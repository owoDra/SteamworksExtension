// Copyright 2022 RutenStudio

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"

#include "SteamworksExtension.h"
#include "SteamworksAPI.h"
#include "SteamworksExtensionUtils.h"

#include "SteamworksFriendsSubsystem.generated.h"

class UTexture2D;

// #==============================================#
// ** Unimplemented Features 
//
// # CloseClanChatWindowInSteam();
// # DownloadClanActivityCounts();
// # EnumerateFollowingList();
// # GetChatMemberByIndex();
// # GetClanActivityCounts();
// # GetClanByIndex();
// # GetClanChatMemberCount();
// # GetClanChatMessage();
// # GetClanCount();
// # GetClanName();
// # GetClanOfficerByIndex();
// # GetClanOfficerCount();
// # GetClanOwner();
// # GetClanTag();
// # GetFollowerCount();
// # GetFriendByIndex();					|| Already Imple In Online Subsystem Steam ||
// # GetFriendCount();						|| Already Imple In Online Subsystem Steam ||
// # GetFriendCountFromSource();
// # GetFriendFromSourceByIndex();
// # GetFriendGamePlayed();					|| Already Imple In Online Subsystem Steam ||
// # GetFriendPersonaName();				|| Already Imple In Online Subsystem Steam ||
// # GetFriendPersonaNameHistory();
// # GetFriendPersonaState();				|| Already Imple In Online Subsystem Steam ||
// # GetFriendRelationship();				|| Already Imple In Online Subsystem Steam ||
// # GetFriendRichPresence();				|| Already Imple In Online Subsystem Steam ||
// # GetFriendRichPresenceKeyByIndex();		|| Already Imple In Online Subsystem Steam ||
// # GetFriendRichPresenceKeyCount();		|| Already Imple In Online Subsystem Steam ||
// # GetFriendsGroupCount();
// # GetFriendsGroupIDByIndex();
// # GetFriendsGroupMembersCount();
// # GetFriendsGroupMembersList();
// # GetFriendsGroupName();
// # GetFriendSteamLevel();
// # GetPersonaName();						|| Already Imple In Online Subsystem Steam ||
// # GetPersonaState();						|| Already Imple In Online Subsystem Steam ||
// # GetPlayerNickname();					|| Already Imple In Online Subsystem Steam ||
// # GetUserRestrictions();
// # HasFriend();
// # IsClanChatAdmin();
// # IsClanPublic();
// # IsClanOfficialGameGroup();
// # IsClanChatWindowOpenInSteam();
// # IsFollowing();
// # JoinClanChatRoom();
// # LeaveClanChatRoom();
// # OpenClanChatWindowInSteam();
// # RequestClanOfficerList();
// # SendClanChatMessage();
// # SetPersonaName();
// # SetRichPresence();						|| Already Imple In Online Subsystem Steam ||
// # RequestFriendRichPresence();			|| Already Imple In Online Subsystem Steam ||
//
// #==============================================#

// ================================================
//   Steamworks Friends Extension Subsystem
// ================================================

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGameOverlayActivatedDelegate, bool, bActive);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPersonaStateChangeDelegate, FUniqueNetIdRepl, UniqueId, ESteamPersonaChange, PersonaStateChange);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnFriendRichPresenceUpdateDelegate, FUniqueNetIdRepl, UniqueId, int32, AppID);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnGameConnectedFriendChatMsgDelegate, FUniqueNetIdRepl, UserId, int32, MessageID);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnGameLobbyJoinRequestedDelegate, FUniqueNetIdRepl, LobbyId, FUniqueNetIdRepl, FriendId);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnGameRichPresenceJoinRequestedDelegate, FUniqueNetIdRepl, UserId, FString, ConnectionString);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnGameServerChangeRequestedDelegate, FString, IP, FString, Password);

UCLASS(BlueprintType)
class STEAMWORKSEXTENSION_API USteamworksFriendsSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
public:
	// ============================================
	//   Variables
	// ============================================

	// ===== Delegate =====

	/** Posted when the Steam Overlay activates or deactivates. The game can use this to be pause or resume single player games. */
	UPROPERTY(BlueprintAssignable, Category = "Steamworks|Friends|Delegates", meta = (DisplayName = "OnGameOverlayActivated"))
		FOnGameOverlayActivatedDelegate m_OnGameOverlayActivated;

	/** Called whenever a friends' status changes. */
	UPROPERTY(BlueprintAssignable, Category = "Steamworks|Friends|Delegates", meta = (DisplayName = "OnPersonaStateChange"))
		FOnPersonaStateChangeDelegate m_OnPersonaStateChange;

	/** Called when Rich Presence data has been updated for a user, this can happen automatically when friends in the same game update their rich presence, or after a call to RequestFriendRichPresence. */
	UPROPERTY(BlueprintAssignable, Category = "Steamworks|Friends|Delegates", meta = (DisplayName = "OnFriendRichPresenceUpdate"))
		FOnFriendRichPresenceUpdateDelegate m_OnFriendRichPresenceUpdate;

	/** Called when chat message has been received from a friend. */
	UPROPERTY(BlueprintAssignable, Category = "Steamworks|Friends|Delegates", meta = (DisplayName = "OnGameConnectedFriendChatMsg"))
		FOnGameConnectedFriendChatMsgDelegate m_OnGameConnectedFriendChatMsg;

	/**
	 * Called when the user tries to join a lobby from their friends list or from an invite. The game client should attempt to connect to specified lobby when this is received.
	 * If the game isn't running yet then the game will be automatically launched with the command line parameter +connect_lobby <64-bit lobby Steam ID> instead.
	 * NOTE: This callback is made when joining a lobby. If the user is attempting to join a game but not a lobby, then the callback GameRichPresenceJoinRequested_t will be made.
	 */
	UPROPERTY(BlueprintAssignable, Category = "Steamworks|Friends|Delegates", meta = (DisplayName = "OnGameLobbyJoinRequested"))
		FOnGameLobbyJoinRequestedDelegate m_OnGameLobbyJoinRequested;

	/**
	 * Called when the user tries to join a game from their friends list or after a user accepts an invite by a friend with InviteUserToGame.
	 * NOTE: This callback is made when joining a game. If the user is attempting to join a lobby, then the callback GameLobbyJoinRequested_t will be made.
	 */
	UPROPERTY(BlueprintAssignable, Category = "Steamworks|Friends|Delegates", meta = (DisplayName = "OnGameRichPresenceJoinRequested"))
		FOnGameRichPresenceJoinRequestedDelegate m_OnGameRichPresenceJoinRequested;

	/** Called when the user tries to join a different game server from their friends list. The game client should attempt to connect to specified server when this is received. */
	UPROPERTY(BlueprintAssignable, Category = "Steamworks|Friends|Delegates", meta = (DisplayName = "OnGameServerChangeRequested"))
		FOnGameServerChangeRequestedDelegate m_OnGameServerChangeRequested;


	// ============================================
	//   Functions
	// ============================================

	// ===== Initialization =====

	USteamworksFriendsSubsystem();

	virtual void BeginDestroy() override;


	// ===== Overlay =====

	/**
	 * Activates the Steam Overlay to a specific dialog.
	 * This is equivalent to calling ActivateGameOverlayToUser with steamID set to ISteamUser::GetSteamID.
	 *
	 * @param const ESteamOverlayTypes OverlayType - The dialog to open.
	 * @return void
	 */
	UFUNCTION(BlueprintCallable, Category = "Steamworks|Friends")
		void ActivateGameOverlay(const ESteamGameOverlayTypes OverlayType);

	/**
	 * Activates the Steam Overlay to open the invite dialog. Invitations sent from this dialog will be for the provided lobby.
	 *
	 * @param FUniqueNetIdRepl SteamIDLobby - The Steam ID of the lobby that selected users will be invited to.
	 * @return void
	 */
	UFUNCTION(BlueprintCallable, Category = "Steamworks|Friends")
		void ActivateGameOverlayInviteDialog(FUniqueNetIdRepl LobbyId);

	/**
	 * Activates the Steam Overlay to the Steam store page for the provided app.
	 * Using k_uAppIdInvalid brings the user to the front page of the Steam store.
	 *
	 * @param int32 AppID - The app ID to show the store page of.
	 * @param ESteamOverlayToStoreFlag StoreFlag - 	Flags to modify the behavior when the page opens.
	 * @return void
	 */
	UFUNCTION(BlueprintCallable, Category = "Steamworks|Friends")
		void ActivateGameOverlayToStore(int32 AppID, ESteamOverlayToStoreFlag StoreFlag);

	/**
	 * Activates Steam Overlay to a specific dialog.
	 *
	 * @param const ESteamGameUserOverlayTypes OverlayType - The dialog to open.
	 * @param FUniqueNetIdRepl UserId - The Steam ID of the context to open this dialog to.
	 * @return void
	 */
	UFUNCTION(BlueprintCallable, Category = "Steamworks|Friends")
		void ActivateGameOverlayToUser(const ESteamGameUserOverlayTypes OverlayType, FUniqueNetIdRepl UserId);

	/**
	 * Activates Steam Overlay web browser directly to the specified URL.
	 *
	 * @param const FString & URL - The webpage to open. (A fully qualified address with the protocol is required, e.g. "http://www.steampowered.com")
	 * @param bool bShowModal
	 * @return void
	 */
	UFUNCTION(BlueprintCallable, Category = "Steamworks|Friends")
		void ActivateGameOverlayToWebPage(const FString& URL, bool bShowModal = false);


	// ===== Presence =====

	/**
	 * Clears all of the current user's Rich Presence key/values.
	 *
	 * @return void
	 */
	UFUNCTION(BlueprintCallable, Category = "Steamworks|Friends")
		void ClearRichPresence();

	/**
	 * Mark a target user as 'played with'.
	 * The current user must be in game with the other player for the association to work.
	 *
	 * @param FSteamID SteamIDUserPlayedWith - The other user that we have played with.
	 * @return void
	 */
	UFUNCTION(BlueprintCallable, Category = "Steamworks|Friends")
		void SetPlayedWith(FUniqueNetIdRepl UserIdPlayedWith);


	// ===== Communicate =====

	/**
	 * Listens for Steam friends chat messages.
	 * You can then show these chats inline in the game. For example with a Blizzard style chat message system or the chat system in Dota 2.
	 * After enabling this you will receive GameConnectedFriendChatMsg_t callbacks when ever the user receives a chat message. You can get the actual message data from this callback with GetFriendMessage. You can send messages with ReplyToFriendMessage.
	 * Triggers a GameConnectedFriendChatMsg_t callback.
	 *
	 * @param bool bInterceptEnabled - 	Turn friends message interception on (true) or off (false)?
	 * @return bool - Always returns true
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "Steamworks|Friends")
		bool SetListenForFriendsMessages(bool bInterceptEnabled) const;

	/**
	 * Gets the data from a Steam friends message.
	 * This should only ever be called in response to a GameConnectedFriendChatMsg_t callback.
	 *
	 * @param FSteamID SteamIDFriend - The Steam ID of the friend that sent this message.
	 * @param int32 MessageIndex - The index of the message. This should be the m_iMessageID field of GameConnectedFriendChatMsg_t.
	 * @param FString & Message - The buffer where the chat message will be copied into.
	 * @param ESteamChatEntryType & ChatEntryType - Returns the type of chat entry that was received.
	 * @return int32 - The number of bytes copied into pvData. Returns 0 and sets peChatEntryType to k_EChatEntryTypeInvalid if the current user is chat restricted, if the provided Steam ID is not a friend, or if the index provided in iMessageID is invalid.
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "Steamworks|Friends")
		int32 GetFriendMessage(FUniqueNetIdRepl UserId, int32 MessageIndex, FString& Message, ESteamChatEntryType& ChatEntryType);

	/**
	 * Sends a message to a Steam friend.
	 *
	 * @param FSteamID SteamIDFriend - The Steam ID of the friend to send the message to.
	 * @param const FString & MsgToSend - The UTF-8 formatted message to send.
	 * @return bool - true if the message was successfully sent. false if the current user is rate limited or chat restricte
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "Steamworks|Friends")
		bool ReplyToFriendMessage(FUniqueNetIdRepl UserId, const FString& MsgToSend) const;


	// ===== Gameplay =====

	/**
	 * Let Steam know that the user is currently using voice chat in game.
	 * This will suppress the microphone for all voice communication in the Steam UI.
	 *
	 * @param FSteamID SteamIDUser - Unused
	 * @param bool bSpeaking - Did the user start speaking in game (true) or stopped speaking in game (false)?
	 * @return void
	 */
	UFUNCTION(BlueprintCallable, Category = "Steamworks|Friends")
		void SetInGameVoiceSpeaking(FUniqueNetIdRepl UserId, bool bSpeaking);

	/**
	 * Gets the Steam ID of the recently played with user at the given index.
	 * You must call GetCoplayFriendCount before calling this.
	 *
	 * @param int32 CoplayFriendIndex - An index between 0 and GetCoplayFriendCount.
	 * @return FUniqueNetIdRepl
	 */
	UFUNCTION(BlueprintPure, Category = "Steamworks|Friends")
		FUniqueNetIdRepl GetCoplayFriend(int32 CoplayFriendIndex) const;

	/**
	 * Gets the number of players that the current users has recently played with, across all games.
	 * This is used for iteration, after calling this then GetCoplayFriend can be used to get the Steam ID of each player.
	 * These players are have been set with previous calls to SetPlayedWith.
	 *
	 * @return int32 - The number of users that the current user has recently played with.
	 */
	UFUNCTION(BlueprintPure, Category = "Steamworks|Friends")
		int32 GetCoplayFriendCount() const;

	/**
	 * Gets the app ID of the game that user played with someone on their recently-played-with list.
	 *
	 * @param FSteamID SteamIDFriend - The Steam ID of the user on the recently-played-with list to get the game played.
	 * @return int32 - Steam IDs not in the recently-played-with list return k_uAppIdInvalid.
	 */
	UFUNCTION(BlueprintPure, Category = "Steamworks|Friends")
		int32 GetFriendCoplayGame(FUniqueNetIdRepl UserId) const;

	/**
	 * Gets the timestamp of when the user played with someone on their recently-played-with list.
	 *
	 * @param FSteamID SteamIDFriend - The Steam ID of the user on the recently-played-with list to get the timestamp for.
	 * @return int32 - The time is provided in Unix epoch format (seconds since Jan 1st 1970). Steam IDs not in the recently-played-with list return 0.
	 */
	UFUNCTION(BlueprintPure, Category = "Steamworks|Friends")
		int32 GetFriendCoplayTime(FUniqueNetIdRepl UserId) const;

	/**
	 * Invites a friend or clan member to the current game using a special invite string.
	 * If the target user accepts the invite then the pchConnectString gets added to the command-line when launching the game.
	 * If the game is already running for that user, then they will receive a GameRichPresenceJoinRequested_t callback with the connect string.
	 * Triggers a GameRichPresenceJoinRequested_t callback.
	 *
	 * @param FSteamID SteamIDFriend - The Steam ID of the friend to invite.
	 * @param const FString & ConnectString - A string that lets the friend know how to join the game (I.E. the game server IP). This can not be longer than specified in k_cchMaxRichPresenceValueLength.
	 * @return bool - true if the invite was successfully sent. false under the following conditions:
	 * The Steam ID provided to steamIDFriend was invalid.
	 * The Steam ID provided to steamIDFriend is not a friend or does not share the same Steam Group as the current user.
	 * The value provided to pchConnectString was too long.
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "Steamworks|Friends")
		bool InviteUserToGame(FUniqueNetIdRepl UserId, const FString& ConnectString) const;

	
	// ===== Info =====

	/**
	 * Gets a handle to the avatar for the specified user.
	 * You can pass in ISteamUser::GetSteamID to get the current users avatar.
	 * This only works for users that the local user knows about. They will automatically know about their friends, people on leaderboards they've requested, or people in the same source as them -
	 * (Steam group, chat room, lobby, or game server). If they don't know about them then you must call RequestUserInformation to cache the avatar locally.
	 *
	 * @param FUniqueNetIdRepl UserId
	 * @param ESteamAvatarSize AvatarSize
	 * @return UTexture2D*
	 */
	UFUNCTION(BlueprintPure, Category = "Steamworks|Friends")
		UTexture2D* GetAvatarImage(FUniqueNetIdRepl UserId, ESteamAvatarSizes AvatarSize) const;

	/**
	 * Checks if a specified user is in a source (Steam group, chat room, lobby, or game server).
	 *
	 * @param FSteamID SteamIDUser - The user to check if they are in the source.
	 * @param FSteamID SteamIDSource - 	The source to check for the user.
	 * @return bool - true if the local user can see that steamIDUser is a member or in steamIDSource; otherwise, false.
	 */
	UFUNCTION(BlueprintPure, Category = "Steamworks|Friends")
		bool IsUserInSource(FUniqueNetIdRepl UserId, FUniqueNetIdRepl SourceId) const;

	/**
	 * Requests the persona name and optionally the avatar of a specified user.
	 * It's a lot slower to download avatars and churns the local cache, so if you don't need avatars, don't request them.
	 * Triggers a PersonaStateChange_t callback.
	 *
	 * @param FSteamID SteamIDUser - The user to request the information of.
	 * @param bool bRequireNameOnly - Retrieve the Persona name only (true)? Or both the name and the avatar (false)?
	 * @return bool - true means that the data has being requested, and a PersonaStateChange_t callback will be posted when it's retrieved.
	 * false means that we already have all the details about that user, and functions that require this information can be used immediately.
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "Steamworks|Friends")
		bool RequestUserInformation(FUniqueNetIdRepl UserId, bool bRequireNameOnly) const;


	// ===== Delegates =====
private:
	STEAM_CALLBACK_MANUAL(USteamworksFriendsSubsystem, OnGameOverlayActivated, GameOverlayActivated_t, OnGameOverlayActivatedCallback);
	STEAM_CALLBACK_MANUAL(USteamworksFriendsSubsystem, OnFriendRichPresenceUpdate, FriendRichPresenceUpdate_t, OnFriendRichPresenceUpdateCallback);
	STEAM_CALLBACK_MANUAL(USteamworksFriendsSubsystem, OnGameConnectedFriendChatMsg, GameConnectedFriendChatMsg_t, OnGameConnectedFriendChatMsgCallback);
	STEAM_CALLBACK_MANUAL(USteamworksFriendsSubsystem, OnGameLobbyJoinRequested, GameLobbyJoinRequested_t, OnGameLobbyJoinRequestedCallback);
	STEAM_CALLBACK_MANUAL(USteamworksFriendsSubsystem, OnPersonaStateChange, PersonaStateChange_t, OnPersonaStateChangeCallback);
	STEAM_CALLBACK_MANUAL(USteamworksFriendsSubsystem, OnGameRichPresenceJoinRequested, GameRichPresenceJoinRequested_t, OnGameRichPresenceJoinRequestedCallback);
	STEAM_CALLBACK_MANUAL(USteamworksFriendsSubsystem, OnGameServerChangeRequested, GameServerChangeRequested_t, OnGameServerChangeRequestedCallback);
};

