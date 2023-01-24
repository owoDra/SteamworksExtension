// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FUniqueNetIdRepl;
enum class ESteamPersonaChange : uint8;
enum class ESteamAvatarSizes : uint8;
class UTexture2D;
enum class ESteamChatEntryType : uint8;
enum class ESteamGameUserOverlayTypes : uint8;
enum class ESteamOverlayToStoreFlag : uint8;
enum class ESteamGameOverlayTypes : uint8;
#ifdef STEAMWORKSEXTENSION_SteamworksFriendsSubsystem_generated_h
#error "SteamworksFriendsSubsystem.generated.h already included, missing '#pragma once' in SteamworksFriendsSubsystem.h"
#endif
#define STEAMWORKSEXTENSION_SteamworksFriendsSubsystem_generated_h

#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksFriendsSubsystem_h_77_DELEGATE \
struct _Script_SteamworksExtension_eventOnGameOverlayActivatedDelegate_Parms \
{ \
	bool bActive; \
}; \
static inline void FOnGameOverlayActivatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnGameOverlayActivatedDelegate, bool bActive) \
{ \
	_Script_SteamworksExtension_eventOnGameOverlayActivatedDelegate_Parms Parms; \
	Parms.bActive=bActive ? true : false; \
	OnGameOverlayActivatedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksFriendsSubsystem_h_79_DELEGATE \
struct _Script_SteamworksExtension_eventOnPersonaStateChangeDelegate_Parms \
{ \
	FUniqueNetIdRepl UniqueId; \
	ESteamPersonaChange PersonaStateChange; \
}; \
static inline void FOnPersonaStateChangeDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnPersonaStateChangeDelegate, FUniqueNetIdRepl UniqueId, ESteamPersonaChange PersonaStateChange) \
{ \
	_Script_SteamworksExtension_eventOnPersonaStateChangeDelegate_Parms Parms; \
	Parms.UniqueId=UniqueId; \
	Parms.PersonaStateChange=PersonaStateChange; \
	OnPersonaStateChangeDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksFriendsSubsystem_h_80_DELEGATE \
struct _Script_SteamworksExtension_eventOnFriendRichPresenceUpdateDelegate_Parms \
{ \
	FUniqueNetIdRepl UniqueId; \
	int32 AppID; \
}; \
static inline void FOnFriendRichPresenceUpdateDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnFriendRichPresenceUpdateDelegate, FUniqueNetIdRepl UniqueId, int32 AppID) \
{ \
	_Script_SteamworksExtension_eventOnFriendRichPresenceUpdateDelegate_Parms Parms; \
	Parms.UniqueId=UniqueId; \
	Parms.AppID=AppID; \
	OnFriendRichPresenceUpdateDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksFriendsSubsystem_h_81_DELEGATE \
struct _Script_SteamworksExtension_eventOnGameConnectedFriendChatMsgDelegate_Parms \
{ \
	FUniqueNetIdRepl UserId; \
	int32 MessageID; \
}; \
static inline void FOnGameConnectedFriendChatMsgDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnGameConnectedFriendChatMsgDelegate, FUniqueNetIdRepl UserId, int32 MessageID) \
{ \
	_Script_SteamworksExtension_eventOnGameConnectedFriendChatMsgDelegate_Parms Parms; \
	Parms.UserId=UserId; \
	Parms.MessageID=MessageID; \
	OnGameConnectedFriendChatMsgDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksFriendsSubsystem_h_83_DELEGATE \
struct _Script_SteamworksExtension_eventOnGameLobbyJoinRequestedDelegate_Parms \
{ \
	FUniqueNetIdRepl LobbyId; \
	FUniqueNetIdRepl FriendId; \
}; \
static inline void FOnGameLobbyJoinRequestedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnGameLobbyJoinRequestedDelegate, FUniqueNetIdRepl LobbyId, FUniqueNetIdRepl FriendId) \
{ \
	_Script_SteamworksExtension_eventOnGameLobbyJoinRequestedDelegate_Parms Parms; \
	Parms.LobbyId=LobbyId; \
	Parms.FriendId=FriendId; \
	OnGameLobbyJoinRequestedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksFriendsSubsystem_h_84_DELEGATE \
struct _Script_SteamworksExtension_eventOnGameRichPresenceJoinRequestedDelegate_Parms \
{ \
	FUniqueNetIdRepl UserId; \
	FString ConnectionString; \
}; \
static inline void FOnGameRichPresenceJoinRequestedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnGameRichPresenceJoinRequestedDelegate, FUniqueNetIdRepl UserId, const FString& ConnectionString) \
{ \
	_Script_SteamworksExtension_eventOnGameRichPresenceJoinRequestedDelegate_Parms Parms; \
	Parms.UserId=UserId; \
	Parms.ConnectionString=ConnectionString; \
	OnGameRichPresenceJoinRequestedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksFriendsSubsystem_h_85_DELEGATE \
struct _Script_SteamworksExtension_eventOnGameServerChangeRequestedDelegate_Parms \
{ \
	FString IP; \
	FString Password; \
}; \
static inline void FOnGameServerChangeRequestedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnGameServerChangeRequestedDelegate, const FString& IP, const FString& Password) \
{ \
	_Script_SteamworksExtension_eventOnGameServerChangeRequestedDelegate_Parms Parms; \
	Parms.IP=IP; \
	Parms.Password=Password; \
	OnGameServerChangeRequestedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksFriendsSubsystem_h_90_SPARSE_DATA
#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksFriendsSubsystem_h_90_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRequestUserInformation); \
	DECLARE_FUNCTION(execIsUserInSource); \
	DECLARE_FUNCTION(execGetAvatarImage); \
	DECLARE_FUNCTION(execInviteUserToGame); \
	DECLARE_FUNCTION(execGetFriendCoplayTime); \
	DECLARE_FUNCTION(execGetFriendCoplayGame); \
	DECLARE_FUNCTION(execGetCoplayFriendCount); \
	DECLARE_FUNCTION(execGetCoplayFriend); \
	DECLARE_FUNCTION(execSetInGameVoiceSpeaking); \
	DECLARE_FUNCTION(execReplyToFriendMessage); \
	DECLARE_FUNCTION(execGetFriendMessage); \
	DECLARE_FUNCTION(execSetListenForFriendsMessages); \
	DECLARE_FUNCTION(execSetPlayedWith); \
	DECLARE_FUNCTION(execClearRichPresence); \
	DECLARE_FUNCTION(execActivateGameOverlayToWebPage); \
	DECLARE_FUNCTION(execActivateGameOverlayToUser); \
	DECLARE_FUNCTION(execActivateGameOverlayToStore); \
	DECLARE_FUNCTION(execActivateGameOverlayInviteDialog); \
	DECLARE_FUNCTION(execActivateGameOverlay);


#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksFriendsSubsystem_h_90_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRequestUserInformation); \
	DECLARE_FUNCTION(execIsUserInSource); \
	DECLARE_FUNCTION(execGetAvatarImage); \
	DECLARE_FUNCTION(execInviteUserToGame); \
	DECLARE_FUNCTION(execGetFriendCoplayTime); \
	DECLARE_FUNCTION(execGetFriendCoplayGame); \
	DECLARE_FUNCTION(execGetCoplayFriendCount); \
	DECLARE_FUNCTION(execGetCoplayFriend); \
	DECLARE_FUNCTION(execSetInGameVoiceSpeaking); \
	DECLARE_FUNCTION(execReplyToFriendMessage); \
	DECLARE_FUNCTION(execGetFriendMessage); \
	DECLARE_FUNCTION(execSetListenForFriendsMessages); \
	DECLARE_FUNCTION(execSetPlayedWith); \
	DECLARE_FUNCTION(execClearRichPresence); \
	DECLARE_FUNCTION(execActivateGameOverlayToWebPage); \
	DECLARE_FUNCTION(execActivateGameOverlayToUser); \
	DECLARE_FUNCTION(execActivateGameOverlayToStore); \
	DECLARE_FUNCTION(execActivateGameOverlayInviteDialog); \
	DECLARE_FUNCTION(execActivateGameOverlay);


#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksFriendsSubsystem_h_90_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamworksFriendsSubsystem(); \
	friend struct Z_Construct_UClass_USteamworksFriendsSubsystem_Statics; \
public: \
	DECLARE_CLASS(USteamworksFriendsSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamworksExtension"), NO_API) \
	DECLARE_SERIALIZER(USteamworksFriendsSubsystem)


#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksFriendsSubsystem_h_90_INCLASS \
private: \
	static void StaticRegisterNativesUSteamworksFriendsSubsystem(); \
	friend struct Z_Construct_UClass_USteamworksFriendsSubsystem_Statics; \
public: \
	DECLARE_CLASS(USteamworksFriendsSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamworksExtension"), NO_API) \
	DECLARE_SERIALIZER(USteamworksFriendsSubsystem)


#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksFriendsSubsystem_h_90_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamworksFriendsSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamworksFriendsSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamworksFriendsSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamworksFriendsSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamworksFriendsSubsystem(USteamworksFriendsSubsystem&&); \
	NO_API USteamworksFriendsSubsystem(const USteamworksFriendsSubsystem&); \
public:


#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksFriendsSubsystem_h_90_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamworksFriendsSubsystem(USteamworksFriendsSubsystem&&); \
	NO_API USteamworksFriendsSubsystem(const USteamworksFriendsSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamworksFriendsSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamworksFriendsSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USteamworksFriendsSubsystem)


#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksFriendsSubsystem_h_87_PROLOG
#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksFriendsSubsystem_h_90_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksFriendsSubsystem_h_90_SPARSE_DATA \
	FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksFriendsSubsystem_h_90_RPC_WRAPPERS \
	FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksFriendsSubsystem_h_90_INCLASS \
	FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksFriendsSubsystem_h_90_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksFriendsSubsystem_h_90_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksFriendsSubsystem_h_90_SPARSE_DATA \
	FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksFriendsSubsystem_h_90_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksFriendsSubsystem_h_90_INCLASS_NO_PURE_DECLS \
	FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksFriendsSubsystem_h_90_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMWORKSEXTENSION_API UClass* StaticClass<class USteamworksFriendsSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksFriendsSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
