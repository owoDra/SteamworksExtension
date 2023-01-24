// Copyright 2022 RutenStudio

#include "Subsystems/SteamworksFriendsSubsystem.h"


// ================================================
//   Steamworks Friends Extension Subsystem
// ================================================

// ===== Initialization =====

USteamworksFriendsSubsystem::USteamworksFriendsSubsystem()
{
	if (this->HasAnyFlags(RF_ClassDefaultObject))
	{
		return;
	}

	auto GameInstance = this->GetGameInstance();
	check(IsValid(GameInstance));

	auto World = GameInstance->GetWorld();
	check(IsValid(World));

	OnFriendRichPresenceUpdateCallback.Register(this, &USteamworksFriendsSubsystem::OnFriendRichPresenceUpdate);
	OnGameConnectedFriendChatMsgCallback.Register(this, &USteamworksFriendsSubsystem::OnGameConnectedFriendChatMsg);
	OnGameLobbyJoinRequestedCallback.Register(this, &USteamworksFriendsSubsystem::OnGameLobbyJoinRequested);
	OnGameOverlayActivatedCallback.Register(this, &USteamworksFriendsSubsystem::OnGameOverlayActivated);
	OnGameRichPresenceJoinRequestedCallback.Register(this, &USteamworksFriendsSubsystem::OnGameRichPresenceJoinRequested);
	OnGameServerChangeRequestedCallback.Register(this, &USteamworksFriendsSubsystem::OnGameServerChangeRequested);
	OnPersonaStateChangeCallback.Register(this, &USteamworksFriendsSubsystem::OnPersonaStateChange);
}

void USteamworksFriendsSubsystem::BeginDestroy()
{
	if (this->HasAnyFlags(RF_ClassDefaultObject))
	{
		Super::BeginDestroy();
		return;
	}

	OnFriendRichPresenceUpdateCallback.Unregister();
	OnGameConnectedFriendChatMsgCallback.Unregister();
	OnGameLobbyJoinRequestedCallback.Unregister();
	OnGameOverlayActivatedCallback.Unregister();
	OnGameRichPresenceJoinRequestedCallback.Unregister();
	OnGameServerChangeRequestedCallback.Unregister();
	OnPersonaStateChangeCallback.Unregister();

	Super::BeginDestroy();
}


// ===== Overlay =====

void USteamworksFriendsSubsystem::ActivateGameOverlay(const ESteamGameOverlayTypes OverlayType)
{
	const FString Str = USteamworksExtensionUtils::GetEnumValueAsStringParsed(USteamworksExtensionUtils::GetEnumValueAsString<ESteamGameOverlayTypes>("ESteamGameOverlayTypes", OverlayType));
	SteamFriends()->ActivateGameOverlay(TCHAR_TO_ANSI(*Str));
}

void USteamworksFriendsSubsystem::ActivateGameOverlayInviteDialog(FUniqueNetIdRepl LobbyId)
{
	if (!LobbyId.IsValid() || !LobbyId.GetUniqueNetId()->IsValid() || LobbyId.GetUniqueNetId()->GetType() != STEAM_SUBSYSTEM)
	{
		UE_LOG(LogSteamworksExtension, Warning, TEXT("Steamworks: ActivateGameOverlayInviteDialog Had a bad UniqueNetId!"));
		return;
	}

	uint64 SteamID = *((uint64*)LobbyId.GetUniqueNetId()->GetBytes());
	SteamFriends()->ActivateGameOverlayInviteDialog(SteamID);
}

void USteamworksFriendsSubsystem::ActivateGameOverlayToStore(int32 AppID, ESteamOverlayToStoreFlag StoreFlag)
{
	SteamFriends()->ActivateGameOverlayToStore(AppID, (EOverlayToStoreFlag)StoreFlag);
}

void USteamworksFriendsSubsystem::ActivateGameOverlayToUser(const ESteamGameUserOverlayTypes OverlayType, FUniqueNetIdRepl UserId)
{
	if (!UserId.IsValid() || !UserId.GetUniqueNetId()->IsValid() || UserId.GetUniqueNetId()->GetType() != STEAM_SUBSYSTEM)
	{
		UE_LOG(LogSteamworksExtension, Warning, TEXT("Steamworks: ActivateGameOverlayToUser Had a bad UniqueNetId!"));
		return;
	}

	uint64 SteamID = *((uint64*)UserId.GetUniqueNetId()->GetBytes());
	const FString Str = USteamworksExtensionUtils::GetEnumValueAsStringParsed(USteamworksExtensionUtils::GetEnumValueAsString<ESteamGameUserOverlayTypes>("ESteamGameUserOverlayTypes", OverlayType));
	SteamFriends()->ActivateGameOverlayToUser(TCHAR_TO_ANSI(*Str), SteamID);
}

void USteamworksFriendsSubsystem::ActivateGameOverlayToWebPage(const FString& URL, bool bShowModal)
{
	SteamFriends()->ActivateGameOverlayToWebPage(TCHAR_TO_UTF8(*URL), bShowModal ? k_EActivateGameOverlayToWebPageMode_Modal : k_EActivateGameOverlayToWebPageMode_Default);
}


// ===== Presence =====

void USteamworksFriendsSubsystem::ClearRichPresence()
{
	SteamFriends()->ClearRichPresence();
}

void USteamworksFriendsSubsystem::SetPlayedWith(FUniqueNetIdRepl UserIdPlayedWith)
{
	if (!UserIdPlayedWith.IsValid() || !UserIdPlayedWith.GetUniqueNetId()->IsValid() || UserIdPlayedWith.GetUniqueNetId()->GetType() != STEAM_SUBSYSTEM)
	{
		UE_LOG(LogSteamworksExtension, Warning, TEXT("Steamworks: SetPlayedWith Had a bad UniqueNetId!"));
		return;
	}

	uint64 SteamID = *((uint64*)UserIdPlayedWith.GetUniqueNetId()->GetBytes());
	SteamFriends()->SetPlayedWith(SteamID);
}


// ===== Communicate =====

bool USteamworksFriendsSubsystem::SetListenForFriendsMessages(bool bInterceptEnabled) const
{
	return SteamFriends()->SetListenForFriendsMessages(bInterceptEnabled);
}

int32 USteamworksFriendsSubsystem::GetFriendMessage(FUniqueNetIdRepl UserId, int32 MessageIndex, FString& Message, ESteamChatEntryType& ChatEntryType)
{
	Message = FString();
	ChatEntryType = ESteamChatEntryType::Invalid;

	if (!UserId.IsValid() || !UserId.GetUniqueNetId()->IsValid() || UserId.GetUniqueNetId()->GetType() != STEAM_SUBSYSTEM)
	{
		UE_LOG(LogSteamworksExtension, Warning, TEXT("Steamworks: GetFriendMessage Had a bad UniqueNetId!"));
		return 0;
	}

	uint64 SteamID = *((uint64*)UserId.GetUniqueNetId()->GetBytes());
	EChatEntryType TmpEntryType;
	TArray<char> TmpMessage;
	TmpMessage.SetNum(2048);

	int32 res = SteamFriends()->GetFriendMessage(SteamID, MessageIndex, TmpMessage.GetData(), 2048, &TmpEntryType);

	if (res <= 0)
	{
		return 0;
	}

	TmpMessage.SetNum(res);
	Message = UTF8_TO_TCHAR(TmpMessage.GetData());
	ChatEntryType = (ESteamChatEntryType)TmpEntryType;
	return res;
}

bool USteamworksFriendsSubsystem::ReplyToFriendMessage(FUniqueNetIdRepl UserId, const FString& MsgToSend) const
{
	if (!UserId.IsValid() || !UserId.GetUniqueNetId()->IsValid() || UserId.GetUniqueNetId()->GetType() != STEAM_SUBSYSTEM)
	{
		UE_LOG(LogSteamworksExtension, Warning, TEXT("Steamworks: ReplyToFriendMessage Had a bad UniqueNetId!"));
		return false;
	}

	uint64 SteamID = *((uint64*)UserId.GetUniqueNetId()->GetBytes());
	return SteamFriends()->ReplyToFriendMessage(SteamID, TCHAR_TO_UTF8(*MsgToSend));
}

void USteamworksFriendsSubsystem::SetInGameVoiceSpeaking(FUniqueNetIdRepl UserId, bool bSpeaking)
{
	if (!UserId.IsValid() || !UserId.GetUniqueNetId()->IsValid() || UserId.GetUniqueNetId()->GetType() != STEAM_SUBSYSTEM)
	{
		UE_LOG(LogSteamworksExtension, Warning, TEXT("Steamworks: SetInGameVoiceSpeaking Had a bad UniqueNetId!"));
		return;
	}

	uint64 SteamID = *((uint64*)UserId.GetUniqueNetId()->GetBytes());
	SteamFriends()->SetInGameVoiceSpeaking(SteamID, bSpeaking);
}


// ===== Gameplay =====

FUniqueNetIdRepl USteamworksFriendsSubsystem::GetCoplayFriend(int32 CoplayFriendIndex) const
{
	return USteamworksExtensionUtils::ConvertSteamIdToUniqueNetId(SteamFriends()->GetCoplayFriend(CoplayFriendIndex));
}

int32 USteamworksFriendsSubsystem::GetCoplayFriendCount() const
{
	return SteamFriends()->GetCoplayFriendCount();
}

int32 USteamworksFriendsSubsystem::GetFriendCoplayGame(FUniqueNetIdRepl UserId) const
{
	if (!UserId.IsValid() || !UserId.GetUniqueNetId()->IsValid() || UserId.GetUniqueNetId()->GetType() != STEAM_SUBSYSTEM)
	{
		UE_LOG(LogSteamworksExtension, Warning, TEXT("Steamworks: GetFriendCoplayGame Had a bad UniqueNetId!"));
		return 0;
	}

	uint64 SteamID = *((uint64*)UserId.GetUniqueNetId()->GetBytes());
	return SteamFriends()->GetFriendCoplayGame(SteamID);
}

int32 USteamworksFriendsSubsystem::GetFriendCoplayTime(FUniqueNetIdRepl UserId) const
{
	if (!UserId.IsValid() || !UserId.GetUniqueNetId()->IsValid() || UserId.GetUniqueNetId()->GetType() != STEAM_SUBSYSTEM)
	{
		UE_LOG(LogSteamworksExtension, Warning, TEXT("Steamworks: GetFriendCoplayTime Had a bad UniqueNetId!"));
		return 0;
	}

	uint64 SteamID = *((uint64*)UserId.GetUniqueNetId()->GetBytes());
	return SteamFriends()->GetFriendCoplayTime(SteamID);
}

bool USteamworksFriendsSubsystem::InviteUserToGame(FUniqueNetIdRepl UserId, const FString& ConnectString) const
{
	if (!UserId.IsValid() || !UserId.GetUniqueNetId()->IsValid() || UserId.GetUniqueNetId()->GetType() != STEAM_SUBSYSTEM)
	{
		UE_LOG(LogSteamworksExtension, Warning, TEXT("Steamworks: InviteUserToGame Had a bad UniqueNetId!"));
		return false;
	}

	uint64 SteamID = *((uint64*)UserId.GetUniqueNetId()->GetBytes());
	return SteamFriends()->InviteUserToGame(SteamID, TCHAR_TO_UTF8(*ConnectString));
}


// ===== Info =====

UTexture2D* USteamworksFriendsSubsystem::GetAvatarImage(FUniqueNetIdRepl UserId, ESteamAvatarSizes AvatarSize) const
{
	if (!UserId.IsValid() || !UserId.GetUniqueNetId()->IsValid() || UserId.GetUniqueNetId()->GetType() != STEAM_SUBSYSTEM)
	{
		UE_LOG(LogSteamworksExtension, Warning, TEXT("Steamworks: GetAvatarImage Had a bad UniqueNetId!"));
		return nullptr;
	}

	uint32 Width = 0;
	uint32 Height = 0;

	uint64 id = *((uint64*)UserId.GetUniqueNetId()->GetBytes());
	int Picture = 0;

	switch (AvatarSize)
	{
	case ESteamAvatarSizes::SteamAvatar_Small: Picture = SteamFriends()->GetSmallFriendAvatar(id); break;
	case ESteamAvatarSizes::SteamAvatar_Medium: Picture = SteamFriends()->GetMediumFriendAvatar(id); break;
	case ESteamAvatarSizes::SteamAvatar_Large: Picture = SteamFriends()->GetLargeFriendAvatar(id); break;
	default: break;
	}

	if (Picture == -1)
	{
		return NULL;
	}

	SteamUtils()->GetImageSize(Picture, &Width, &Height);

	// STOLEN FROM ANSWERHUB :p, then fixed because answerhub wasn't releasing the memory O.o
	// Also fixed image pixel format and switched to a memcpy instead of manual iteration.
	// At some point I should probably reply to that answerhub post with these fixes to prevent people killing their games.....

	if (Width > 0 && Height > 0)
	{
		//Creating the buffer "oAvatarRGBA" and then filling it with the RGBA Stream from the Steam Avatar
		uint8* oAvatarRGBA = new uint8[Width * Height * 4];


		//Filling the buffer with the RGBA Stream from the Steam Avatar and creating a UTextur2D to parse the RGBA Steam in
		SteamUtils()->GetImageRGBA(Picture, (uint8*)oAvatarRGBA, 4 * Height * Width * sizeof(char));

		UTexture2D* Avatar = UTexture2D::CreateTransient(Width, Height, PF_R8G8B8A8);

		// Switched to a Memcpy instead of byte by byte transer
		uint8* MipData = (uint8*)Avatar->PlatformData->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
		FMemory::Memcpy(MipData, (void*)oAvatarRGBA, Height * Width * 4);
		Avatar->PlatformData->Mips[0].BulkData.Unlock();

		// Original implementation was missing this!!
		// the hell man......
		delete[] oAvatarRGBA;

		//Setting some Parameters for the Texture and finally returning it
		Avatar->PlatformData->SetNumSlices(1);
		Avatar->NeverStream = true;
		//Avatar->CompressionSettings = TC_EditorIcon;

		Avatar->UpdateResource();

		return Avatar;
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Steamworks: Bad Height / Width with steam avatar!"));
		return nullptr;
	}
}

bool USteamworksFriendsSubsystem::IsUserInSource(FUniqueNetIdRepl UserId, FUniqueNetIdRepl SourceId) const
{
	if (!UserId.IsValid() || !UserId.GetUniqueNetId()->IsValid() || UserId.GetUniqueNetId()->GetType() != STEAM_SUBSYSTEM)
	{
		UE_LOG(LogSteamworksExtension, Warning, TEXT("Steamworks: IsUserInSource Had a bad User UniqueNetId!"));
		return false;
	}

	// # Maybe wrong
	if (!SourceId.IsValid() || !SourceId.GetUniqueNetId()->IsValid() || SourceId.GetUniqueNetId()->GetType() != STEAM_SUBSYSTEM)
	{
		UE_LOG(LogSteamworksExtension, Warning, TEXT("Steamworks: IsUserInSource Had a bad Source UniqueNetId!"));
		return false;
	}

	uint64 SteamID = *((uint64*)UserId.GetUniqueNetId()->GetBytes());
	uint64 SteamSorceID = *((uint64*)SourceId.GetUniqueNetId()->GetBytes());
	return SteamFriends()->IsUserInSource(SteamID, SteamSorceID);
}

bool USteamworksFriendsSubsystem::RequestUserInformation(FUniqueNetIdRepl UserId, bool bRequireNameOnly) const
{
	if (!UserId.IsValid() || !UserId.GetUniqueNetId()->IsValid() || UserId.GetUniqueNetId()->GetType() != STEAM_SUBSYSTEM)
	{
		UE_LOG(LogSteamworksExtension, Warning, TEXT("Steamworks: RequestUserInformation Had a bad UniqueNetId!"));
		return false;
	}

	uint64 SteamID = *((uint64*)UserId.GetUniqueNetId()->GetBytes());
	return SteamFriends()->RequestUserInformation(SteamID, bRequireNameOnly);
}


// ===== Delegates =====

void USteamworksFriendsSubsystem::OnGameOverlayActivated(GameOverlayActivated_t* pParam)
{
	m_OnGameOverlayActivated.Broadcast(pParam->m_bActive == 1);
}

void USteamworksFriendsSubsystem::OnFriendRichPresenceUpdate(FriendRichPresenceUpdate_t* pParam)
{
	m_OnFriendRichPresenceUpdate.Broadcast(USteamworksExtensionUtils::ConvertSteamIdToUniqueNetId(pParam->m_steamIDFriend), pParam->m_nAppID);
}

void USteamworksFriendsSubsystem::OnGameConnectedFriendChatMsg(GameConnectedFriendChatMsg_t* pParam)
{
	m_OnGameConnectedFriendChatMsg.Broadcast(USteamworksExtensionUtils::ConvertSteamIdToUniqueNetId(pParam->m_steamIDUser), pParam->m_iMessageID);
}

void USteamworksFriendsSubsystem::OnGameLobbyJoinRequested(GameLobbyJoinRequested_t* pParam)
{
	m_OnGameLobbyJoinRequested.Broadcast(
		USteamworksExtensionUtils::ConvertSteamIdToUniqueNetId(pParam->m_steamIDLobby),
		USteamworksExtensionUtils::ConvertSteamIdToUniqueNetId(pParam->m_steamIDFriend));
}

void USteamworksFriendsSubsystem::OnPersonaStateChange(PersonaStateChange_t* pParam)
{
	m_OnPersonaStateChange.Broadcast(USteamworksExtensionUtils::ConvertSteamIdToUniqueNetId(pParam->m_ulSteamID), static_cast<ESteamPersonaChange>((uint8)pParam->m_nChangeFlags));
}

void USteamworksFriendsSubsystem::OnGameRichPresenceJoinRequested(GameRichPresenceJoinRequested_t* pParam)
{
	m_OnGameRichPresenceJoinRequested.Broadcast(USteamworksExtensionUtils::ConvertSteamIdToUniqueNetId(pParam->m_steamIDFriend), UTF8_TO_TCHAR(pParam->m_rgchConnect));
}

void USteamworksFriendsSubsystem::OnGameServerChangeRequested(GameServerChangeRequested_t* pParam)
{
	m_OnGameServerChangeRequested.Broadcast(UTF8_TO_TCHAR(pParam->m_rgchServer), UTF8_TO_TCHAR(pParam->m_rgchPassword));
}
