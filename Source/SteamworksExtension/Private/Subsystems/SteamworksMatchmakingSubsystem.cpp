// Copyright 2022 RutenStudio

#include "Subsystems/SteamworksMatchmakingSubsystem.h"


// ===== Initialization =====

USteamworksMatchmakingSubsystem::USteamworksMatchmakingSubsystem()
{
	if (this->HasAnyFlags(RF_ClassDefaultObject))
	{
		return;
	}

	auto GameInstance = this->GetGameInstance();
	check(IsValid(GameInstance));

	auto World = GameInstance->GetWorld();
	check(IsValid(World));

	OnLobbyChatMsgCallback.Register(this, &USteamworksMatchmakingSubsystem::OnLobbyChatMsg);
	OnLobbyChatUpdateCallback.Register(this, &USteamworksMatchmakingSubsystem::OnLobbyChatUpdate);
	OnLobbyCreatedCallback.Register(this, &USteamworksMatchmakingSubsystem::OnLobbyCreated);
	OnLobbyDataUpdateCallback.Register(this, &USteamworksMatchmakingSubsystem::OnLobbyDataUpdate);
	OnLobbyEnterCallback.Register(this, &USteamworksMatchmakingSubsystem::OnLobbyEnter);
	OnLobbyGameCreatedCallback.Register(this, &USteamworksMatchmakingSubsystem::OnLobbyGameCreated);
}

void USteamworksMatchmakingSubsystem::BeginDestroy()
{
	if (this->HasAnyFlags(RF_ClassDefaultObject))
	{
		Super::BeginDestroy();
		return;
	}

	OnLobbyChatMsgCallback.Unregister();
	OnLobbyChatUpdateCallback.Unregister();
	OnLobbyCreatedCallback.Unregister();
	OnLobbyDataUpdateCallback.Unregister();
	OnLobbyEnterCallback.Unregister();
	OnLobbyGameCreatedCallback.Unregister();

	Super::BeginDestroy();
}


// ===== Communicate =====

int32 USteamworksMatchmakingSubsystem::GetLobbyChatEntry(FUniqueNetIdRepl LobbyId, int32 ChatID, FUniqueNetIdRepl& UserId, FString& Message, ESteamChatEntryType& ChatEntryType) const
{
	if (!LobbyId.IsValid() || !LobbyId.GetUniqueNetId()->IsValid() || LobbyId.GetUniqueNetId()->GetType() != STEAM_SUBSYSTEM)
	{
		UE_LOG(LogSteamworksExtension, Warning, TEXT("Steamworks: GetLobbyChatEntry Had a bad UniqueNetId!"));
		return 0;
	}

	CSteamID SteamIDLobby = *((uint64*)LobbyId.GetUniqueNetId()->GetBytes());

	EChatEntryType TmpType;
	CSteamID TmpUserSteamID = *((uint64*)UserId.GetUniqueNetId()->GetBytes());;
	TArray<uint8> MessageBuffer;
	MessageBuffer.SetNum(8192);

	int32 Result = SteamMatchmaking()->GetLobbyChatEntry(SteamIDLobby, ChatID, &TmpUserSteamID, MessageBuffer.GetData(), 8192, &TmpType);

	UserId = USteamworksExtensionUtils::ConvertSteamIdToUniqueNetId(TmpUserSteamID);
	ChatEntryType = (ESteamChatEntryType)TmpType;

	FMemoryReader MemReader(MessageBuffer, true);
	MemReader << Message;
	MemReader.Close();

	return Result;
}

bool USteamworksMatchmakingSubsystem::SendLobbyChatMsg(FUniqueNetIdRepl LobbyId, FString Message) const
{
	if (!LobbyId.IsValid() || !LobbyId.GetUniqueNetId()->IsValid() || LobbyId.GetUniqueNetId()->GetType() != STEAM_SUBSYSTEM)
	{
		UE_LOG(LogSteamworksExtension, Warning, TEXT("Steamworks: SendLobbyChatMsg Had a bad UniqueNetId!"));
		return false;
	}


	CSteamID SteamIDLobby = *((uint64*)LobbyId.GetUniqueNetId()->GetBytes());
	TArray<uint8> MessageBuffer;
	FMemoryWriter MemWriter(MessageBuffer, true);
	MemWriter << Message;
	MemWriter.Close();

	return SteamMatchmaking()->SendLobbyChatMsg(SteamIDLobby, MessageBuffer.GetData(), MessageBuffer.Num());
}


// ===== Lobby =====

void USteamworksMatchmakingSubsystem::SetLobbyGameServer(FUniqueNetIdRepl LobbyId, const FString& GameServerIP, int32 GameServerPort, FUniqueNetIdRepl ServerId) const
{
	if (!LobbyId.IsValid() || !LobbyId.GetUniqueNetId()->IsValid() || LobbyId.GetUniqueNetId()->GetType() != STEAM_SUBSYSTEM)
	{
		UE_LOG(LogSteamworksExtension, Warning, TEXT("Steamworks: SetLobbyGameServer Had a bad Lobby UniqueNetId!"));
		return;
	}
	if (!ServerId.IsValid() || !ServerId.GetUniqueNetId()->IsValid() || ServerId.GetUniqueNetId()->GetType() != STEAM_SUBSYSTEM)
	{
		UE_LOG(LogSteamworksExtension, Warning, TEXT("Steamworks: SetLobbyGameServer Had a bad Server UniqueNetId!"));
		return;
	}

	CSteamID SteamIDLobby = *((uint64*)LobbyId.GetUniqueNetId()->GetBytes());
	CSteamID SteamIDGameServer = *((uint64*)ServerId.GetUniqueNetId()->GetBytes());

	uint32 TmpIP = 0;
	USteamworksExtensionUtils::ConvertIPStringToUint32(GameServerIP, TmpIP);

	SteamMatchmaking()->SetLobbyGameServer(SteamIDLobby, TmpIP, GameServerPort, SteamIDGameServer);
}

bool USteamworksMatchmakingSubsystem::GetLobbyGameServer(FUniqueNetIdRepl LobbyId, FString& GameServerIP, int32& GameServerPort, FUniqueNetIdRepl& ServerId) const
{
	if (!LobbyId.IsValid() || !LobbyId.GetUniqueNetId()->IsValid() || LobbyId.GetUniqueNetId()->GetType() != STEAM_SUBSYSTEM)
	{
		UE_LOG(LogSteamworksExtension, Warning, TEXT("Steamworks: GetLobbyGameServer Had a bad Lobby UniqueNetId!"));
		return false;
	}

	CSteamID SteamIDLobby = *((uint64*)LobbyId.GetUniqueNetId()->GetBytes());
	CSteamID SteamIDGameServer;

	uint32 TmpIP = 0;
	bool bResult = SteamMatchmaking()->GetLobbyGameServer(SteamIDLobby, &TmpIP, (uint16*)&GameServerPort, (CSteamID*)&SteamIDGameServer);
	GameServerIP = USteamworksExtensionUtils::ConvertIPToString(TmpIP);
	ServerId = USteamworksExtensionUtils::ConvertSteamIdToUniqueNetId(SteamIDGameServer);
	return bResult;
}

bool USteamworksMatchmakingSubsystem::SetLobbyOwner(FUniqueNetIdRepl LobbyId, FUniqueNetIdRepl UserId) const
{
	if (!LobbyId.IsValid() || !LobbyId.GetUniqueNetId()->IsValid() || LobbyId.GetUniqueNetId()->GetType() != STEAM_SUBSYSTEM)
	{
		UE_LOG(LogSteamworksExtension, Warning, TEXT("Steamworks: SetLobbyOwner Had a bad Lobby UniqueNetId!"));
		return false;
	}
	if (!UserId.IsValid() || !UserId.GetUniqueNetId()->IsValid() || UserId.GetUniqueNetId()->GetType() != STEAM_SUBSYSTEM)
	{
		UE_LOG(LogSteamworksExtension, Warning, TEXT("Steamworks: SetLobbyOwner Had a bad User UniqueNetId!"));
		return false;
	}

	CSteamID SteamIDLobby = *((uint64*)LobbyId.GetUniqueNetId()->GetBytes());
	CSteamID SteamIDNewOwner = *((uint64*)UserId.GetUniqueNetId()->GetBytes());

	return SteamMatchmaking()->SetLobbyOwner(SteamIDLobby, SteamIDNewOwner);
}

FUniqueNetIdRepl USteamworksMatchmakingSubsystem::GetLobbyOwner(FUniqueNetIdRepl LobbyId) const
{
	if (!LobbyId.IsValid() || !LobbyId.GetUniqueNetId()->IsValid() || LobbyId.GetUniqueNetId()->GetType() != STEAM_SUBSYSTEM)
	{
		UE_LOG(LogSteamworksExtension, Warning, TEXT("Steamworks: GetLobbyOwner Had a bad UniqueNetId!"));
		return FUniqueNetIdRepl();
	}

	CSteamID SteamIDLobby = *((uint64*)LobbyId.GetUniqueNetId()->GetBytes());

	return USteamworksExtensionUtils::ConvertSteamIdToUniqueNetId(SteamMatchmaking()->GetLobbyOwner(SteamIDLobby));
}


// ===== Delegates =====

void USteamworksMatchmakingSubsystem::OnLobbyChatMsg(LobbyChatMsg_t* pParam)
{

	m_OnLobbyChatMsg.Broadcast(
		USteamworksExtensionUtils::ConvertSteamIdToUniqueNetId(pParam->m_ulSteamIDLobby),
		USteamworksExtensionUtils::ConvertSteamIdToUniqueNetId(pParam->m_ulSteamIDUser),
		(ESteamChatEntryType)pParam->m_eChatEntryType, pParam->m_iChatID);
}

void USteamworksMatchmakingSubsystem::OnLobbyChatUpdate(LobbyChatUpdate_t* pParam)
{
	uint32 TmpFlags = pParam->m_rgfChatMemberStateChange;
	TArray<ESteamChatMemberStateChange> Flags;
	for (int32 i = 0; i < 32; i++)
	{
		if (TmpFlags & 1 << i)
		{
			Flags.Add((ESteamChatMemberStateChange)i);
		}
	}
	m_OnLobbyChatUpdate.Broadcast(
		USteamworksExtensionUtils::ConvertSteamIdToUniqueNetId(pParam->m_ulSteamIDLobby), 
		USteamworksExtensionUtils::ConvertSteamIdToUniqueNetId(pParam->m_ulSteamIDUserChanged),
		USteamworksExtensionUtils::ConvertSteamIdToUniqueNetId(pParam->m_ulSteamIDMakingChange),
		Flags);
}

void USteamworksMatchmakingSubsystem::OnLobbyCreated(LobbyCreated_t* pParam)
{
	m_OnLobbyCreated.Broadcast(
		(ESteamResult)pParam->m_eResult,
		USteamworksExtensionUtils::ConvertSteamIdToUniqueNetId(pParam->m_ulSteamIDLobby));
}

void USteamworksMatchmakingSubsystem::OnLobbyDataUpdate(LobbyDataUpdate_t* pParam)
{
	m_OnLobbyDataUpdate.Broadcast(
		USteamworksExtensionUtils::ConvertSteamIdToUniqueNetId(pParam->m_ulSteamIDLobby),
		USteamworksExtensionUtils::ConvertSteamIdToUniqueNetId(pParam->m_ulSteamIDMember),
		pParam->m_bSuccess == 1);
}

void USteamworksMatchmakingSubsystem::OnLobbyEnter(LobbyEnter_t* pParam)
{
	m_OnLobbyEnter.Broadcast(
		USteamworksExtensionUtils::ConvertSteamIdToUniqueNetId(pParam->m_ulSteamIDLobby),
		pParam->m_bLocked,
		(ESteamChatRoomEnterResponse)pParam->m_EChatRoomEnterResponse);
}

void USteamworksMatchmakingSubsystem::OnLobbyGameCreated(LobbyGameCreated_t* pParam)
{
	m_OnLobbyGameCreated.Broadcast(
		USteamworksExtensionUtils::ConvertSteamIdToUniqueNetId(pParam->m_ulSteamIDLobby),
		USteamworksExtensionUtils::ConvertSteamIdToUniqueNetId(pParam->m_ulSteamIDGameServer),
		USteamworksExtensionUtils::ConvertIPToString(pParam->m_unIP),
		pParam->m_usPort);
}