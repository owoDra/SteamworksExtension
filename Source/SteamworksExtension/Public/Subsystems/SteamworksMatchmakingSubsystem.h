// Copyright 2022 RutenStudio

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"

#include "SteamworksExtension.h"
#include "SteamworksAPI.h"
#include "SteamworksExtensionUtils.h"

#include "SteamworksMatchmakingSubsystem.generated.h"

// #==============================================#
// ** Unimplemented Features 
//
// # AddFavoriteGame();
// # AddRequestLobbyListCompatibleMembersFilter();	|| Already Imple In Online Subsystem Steam ||
// # AddRequestLobbyListDistanceFilter();			|| Already Imple In Online Subsystem Steam ||
// # AddRequestLobbyListFilterSlotsAvailable();		|| Already Imple In Online Subsystem Steam ||
// # AddRequestLobbyListNearValueFilter();			|| Already Imple In Online Subsystem Steam ||
// # AddRequestLobbyListNumericalFilter();			|| Already Imple In Online Subsystem Steam ||
// # AddRequestLobbyListResultCountFilter();		|| Already Imple In Online Subsystem Steam ||
// # AddRequestLobbyListStringFilter();				|| Already Imple In Online Subsystem Steam ||
// # CreateLobby();									|| Already Imple In Online Subsystem Steam ||
// # DeleteLobbyData();								|| Already Imple In Online Subsystem Steam ||
// # GetFavoriteGameCount();	
// # GetLobbyByIndex();								|| Already Imple In Online Subsystem Steam ||
// # GetLobbyData();								|| Already Imple In Online Subsystem Steam ||
// # GetLobbyDataCount()							|| Already Imple In Online Subsystem Steam ||
// # GetLobbyMemberByIndex();						|| Already Imple In Online Subsystem Steam ||
// # GetLobbyMemberData();							|| Already Imple In Online Subsystem Steam ||
// # GetLobbyMemberLimit();							|| Already Imple In Online Subsystem Steam ||
// # GetNumLobbyMembers();							|| Already Imple In Online Subsystem Steam ||
// # InviteUserToLobby();							|| Already Imple In Online Subsystem Steam ||
// # JoinLobby();									|| Already Imple In Online Subsystem Steam ||
// # LeaveLobby();									|| Already Imple In Online Subsystem Steam ||
// # RemoveFavoriteGame();
// # RequestLobbyData();							|| Already Imple In Online Subsystem Steam ||
// # RequestLobbyList();							|| Already Imple In Online Subsystem Steam ||
// # SetLinkedLobby();
// # SetLobbyData();								|| Already Imple In Online Subsystem Steam ||
// # SetLobbyJoinable();							|| Already Imple In Online Subsystem Steam ||
// # SetLobbyMemberData():							|| Already Imple In Online Subsystem Steam ||
// # SetLobbyMemberLimit();							|| Already Imple In Online Subsystem Steam ||
// # SetLobbyType();								|| Already Imple In Online Subsystem Steam ||
//
// #==============================================#

// ================================================
//   Steamworks Matchmaking Extension Subsystem
// ================================================

DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnLobbyChatMsgDelegate, FUniqueNetIdRepl, LobbyId, FUniqueNetIdRepl, UserId, ESteamChatEntryType, ChatEntryType, int32, ChatID);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnLobbyChatUpdateDelegate, FUniqueNetIdRepl, LobbyId, FUniqueNetIdRepl, UserIdChanged, FUniqueNetIdRepl, UserIdMakingChange, TArray<ESteamChatMemberStateChange>, ChatMemberStateChange);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLobbyCreatedDelegate, ESteamResult, Result, FUniqueNetIdRepl, LobbyId);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnLobbyDataUpdateDelegate, FUniqueNetIdRepl, LobbyId, FUniqueNetIdRepl, MemberId, bool, bSuccess);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnLobbyEnterDelegate, FUniqueNetIdRepl, LobbyId, bool, bLocked, ESteamChatRoomEnterResponse, ChatRoomEnterResponse);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnLobbyGameCreatedDelegate, FUniqueNetIdRepl, LobbyId, FUniqueNetIdRepl, ServerId, FString, IP, int32, Port);

UCLASS(BlueprintType)
class STEAMWORKSEXTENSION_API USteamworksMatchmakingSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
public:
	// ============================================
	//   Variables
	// ============================================

	// ===== Delegate =====

	UPROPERTY(BlueprintAssignable, Category = "Steamworks|Matchmaking|Delegate", meta = (DisplayName = "OnLobbyChatMsg"))
		FOnLobbyChatMsgDelegate m_OnLobbyChatMsg;

	UPROPERTY(BlueprintAssignable, Category = "Steamworks|Matchmaking|Delegate", meta = (DisplayName = "OnLobbyChatUpdate"))
		FOnLobbyChatUpdateDelegate m_OnLobbyChatUpdate;

	UPROPERTY(BlueprintAssignable, Category = "Steamworks|Matchmaking|Delegate", meta = (DisplayName = "OnLobbyCreated"))
		FOnLobbyCreatedDelegate m_OnLobbyCreated;

	UPROPERTY(BlueprintAssignable, Category = "Steamworks|Matchmaking|Delegate", meta = (DisplayName = "OnLobbyDataUpdate"))
		FOnLobbyDataUpdateDelegate m_OnLobbyDataUpdate;

	UPROPERTY(BlueprintAssignable, Category = "Steamworks|Matchmaking|Delegate", meta = (DisplayName = "OnLobbyEnter"))
		FOnLobbyEnterDelegate m_OnLobbyEnter;

	UPROPERTY(BlueprintAssignable, Category = "Steamworks|Matchmaking|Delegate", meta = (DisplayName = "OnLobbyGameCreated"))
		FOnLobbyGameCreatedDelegate m_OnLobbyGameCreated;


	// ============================================
	//   Functions
	// ============================================

	// ===== Initialization =====

	USteamworksMatchmakingSubsystem();

	virtual void BeginDestroy() override;


	// ===== Communicate =====

	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "Steamworks|Matchmaking")
		int32 GetLobbyChatEntry(FUniqueNetIdRepl LobbyId, int32 ChatID, FUniqueNetIdRepl& UserId, FString& Message, ESteamChatEntryType& ChatEntryType) const;

	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "Steamworks|Matchmaking")
		bool SendLobbyChatMsg(FUniqueNetIdRepl LobbyId, FString Message) const;


	// ===== Lobby =====

	UFUNCTION(BlueprintCallable, Category = "Steamworks|Matchmaking")
		void SetLobbyGameServer(FUniqueNetIdRepl LobbyId, const FString& GameServerIP, int32 GameServerPort, FUniqueNetIdRepl ServerId) const;

	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "Steamworks|Matchmaking")
		bool GetLobbyGameServer(FUniqueNetIdRepl LobbyId, FString& GameServerIP, int32& GameServerPort, FUniqueNetIdRepl& ServerId) const;

	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "Steamworks|Matchmaking")
		bool SetLobbyOwner(FUniqueNetIdRepl LobbyId, FUniqueNetIdRepl UserId) const;

	UFUNCTION(BlueprintPure, Category = "Steamworks|Matchmaking")
		FUniqueNetIdRepl GetLobbyOwner(FUniqueNetIdRepl LobbyId) const;


	// ===== Delegates =====
private:
	STEAM_CALLBACK_MANUAL(USteamworksMatchmakingSubsystem, OnLobbyChatMsg, LobbyChatMsg_t, OnLobbyChatMsgCallback);
	STEAM_CALLBACK_MANUAL(USteamworksMatchmakingSubsystem, OnLobbyChatUpdate, LobbyChatUpdate_t, OnLobbyChatUpdateCallback);
	STEAM_CALLBACK_MANUAL(USteamworksMatchmakingSubsystem, OnLobbyCreated, LobbyCreated_t, OnLobbyCreatedCallback);
	STEAM_CALLBACK_MANUAL(USteamworksMatchmakingSubsystem, OnLobbyDataUpdate, LobbyDataUpdate_t, OnLobbyDataUpdateCallback);
	STEAM_CALLBACK_MANUAL(USteamworksMatchmakingSubsystem, OnLobbyEnter, LobbyEnter_t, OnLobbyEnterCallback);
	STEAM_CALLBACK_MANUAL(USteamworksMatchmakingSubsystem, OnLobbyGameCreated, LobbyGameCreated_t, OnLobbyGameCreatedCallback);
};
