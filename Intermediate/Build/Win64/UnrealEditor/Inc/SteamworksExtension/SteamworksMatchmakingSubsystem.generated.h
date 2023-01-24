// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FUniqueNetIdRepl;
enum class ESteamChatEntryType : uint8;
enum class ESteamChatMemberStateChange : uint8;
enum class ESteamResult : uint8;
enum class ESteamChatRoomEnterResponse : uint8;
#ifdef STEAMWORKSEXTENSION_SteamworksMatchmakingSubsystem_generated_h
#error "SteamworksMatchmakingSubsystem.generated.h already included, missing '#pragma once' in SteamworksMatchmakingSubsystem.h"
#endif
#define STEAMWORKSEXTENSION_SteamworksMatchmakingSubsystem_generated_h

#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksMatchmakingSubsystem_h_54_DELEGATE \
struct _Script_SteamworksExtension_eventOnLobbyChatMsgDelegate_Parms \
{ \
	FUniqueNetIdRepl LobbyId; \
	FUniqueNetIdRepl UserId; \
	ESteamChatEntryType ChatEntryType; \
	int32 ChatID; \
}; \
static inline void FOnLobbyChatMsgDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyChatMsgDelegate, FUniqueNetIdRepl LobbyId, FUniqueNetIdRepl UserId, ESteamChatEntryType ChatEntryType, int32 ChatID) \
{ \
	_Script_SteamworksExtension_eventOnLobbyChatMsgDelegate_Parms Parms; \
	Parms.LobbyId=LobbyId; \
	Parms.UserId=UserId; \
	Parms.ChatEntryType=ChatEntryType; \
	Parms.ChatID=ChatID; \
	OnLobbyChatMsgDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksMatchmakingSubsystem_h_55_DELEGATE \
struct _Script_SteamworksExtension_eventOnLobbyChatUpdateDelegate_Parms \
{ \
	FUniqueNetIdRepl LobbyId; \
	FUniqueNetIdRepl UserIdChanged; \
	FUniqueNetIdRepl UserIdMakingChange; \
	TArray<ESteamChatMemberStateChange> ChatMemberStateChange; \
}; \
static inline void FOnLobbyChatUpdateDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyChatUpdateDelegate, FUniqueNetIdRepl LobbyId, FUniqueNetIdRepl UserIdChanged, FUniqueNetIdRepl UserIdMakingChange, const TArray<ESteamChatMemberStateChange>& ChatMemberStateChange) \
{ \
	_Script_SteamworksExtension_eventOnLobbyChatUpdateDelegate_Parms Parms; \
	Parms.LobbyId=LobbyId; \
	Parms.UserIdChanged=UserIdChanged; \
	Parms.UserIdMakingChange=UserIdMakingChange; \
	Parms.ChatMemberStateChange=ChatMemberStateChange; \
	OnLobbyChatUpdateDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksMatchmakingSubsystem_h_56_DELEGATE \
struct _Script_SteamworksExtension_eventOnLobbyCreatedDelegate_Parms \
{ \
	ESteamResult Result; \
	FUniqueNetIdRepl LobbyId; \
}; \
static inline void FOnLobbyCreatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyCreatedDelegate, ESteamResult Result, FUniqueNetIdRepl LobbyId) \
{ \
	_Script_SteamworksExtension_eventOnLobbyCreatedDelegate_Parms Parms; \
	Parms.Result=Result; \
	Parms.LobbyId=LobbyId; \
	OnLobbyCreatedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksMatchmakingSubsystem_h_57_DELEGATE \
struct _Script_SteamworksExtension_eventOnLobbyDataUpdateDelegate_Parms \
{ \
	FUniqueNetIdRepl LobbyId; \
	FUniqueNetIdRepl MemberId; \
	bool bSuccess; \
}; \
static inline void FOnLobbyDataUpdateDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyDataUpdateDelegate, FUniqueNetIdRepl LobbyId, FUniqueNetIdRepl MemberId, bool bSuccess) \
{ \
	_Script_SteamworksExtension_eventOnLobbyDataUpdateDelegate_Parms Parms; \
	Parms.LobbyId=LobbyId; \
	Parms.MemberId=MemberId; \
	Parms.bSuccess=bSuccess ? true : false; \
	OnLobbyDataUpdateDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksMatchmakingSubsystem_h_58_DELEGATE \
struct _Script_SteamworksExtension_eventOnLobbyEnterDelegate_Parms \
{ \
	FUniqueNetIdRepl LobbyId; \
	bool bLocked; \
	ESteamChatRoomEnterResponse ChatRoomEnterResponse; \
}; \
static inline void FOnLobbyEnterDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyEnterDelegate, FUniqueNetIdRepl LobbyId, bool bLocked, ESteamChatRoomEnterResponse ChatRoomEnterResponse) \
{ \
	_Script_SteamworksExtension_eventOnLobbyEnterDelegate_Parms Parms; \
	Parms.LobbyId=LobbyId; \
	Parms.bLocked=bLocked ? true : false; \
	Parms.ChatRoomEnterResponse=ChatRoomEnterResponse; \
	OnLobbyEnterDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksMatchmakingSubsystem_h_59_DELEGATE \
struct _Script_SteamworksExtension_eventOnLobbyGameCreatedDelegate_Parms \
{ \
	FUniqueNetIdRepl LobbyId; \
	FUniqueNetIdRepl ServerId; \
	FString IP; \
	int32 Port; \
}; \
static inline void FOnLobbyGameCreatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyGameCreatedDelegate, FUniqueNetIdRepl LobbyId, FUniqueNetIdRepl ServerId, const FString& IP, int32 Port) \
{ \
	_Script_SteamworksExtension_eventOnLobbyGameCreatedDelegate_Parms Parms; \
	Parms.LobbyId=LobbyId; \
	Parms.ServerId=ServerId; \
	Parms.IP=IP; \
	Parms.Port=Port; \
	OnLobbyGameCreatedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksMatchmakingSubsystem_h_64_SPARSE_DATA
#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksMatchmakingSubsystem_h_64_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetLobbyOwner); \
	DECLARE_FUNCTION(execSetLobbyOwner); \
	DECLARE_FUNCTION(execGetLobbyGameServer); \
	DECLARE_FUNCTION(execSetLobbyGameServer); \
	DECLARE_FUNCTION(execSendLobbyChatMsg); \
	DECLARE_FUNCTION(execGetLobbyChatEntry);


#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksMatchmakingSubsystem_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetLobbyOwner); \
	DECLARE_FUNCTION(execSetLobbyOwner); \
	DECLARE_FUNCTION(execGetLobbyGameServer); \
	DECLARE_FUNCTION(execSetLobbyGameServer); \
	DECLARE_FUNCTION(execSendLobbyChatMsg); \
	DECLARE_FUNCTION(execGetLobbyChatEntry);


#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksMatchmakingSubsystem_h_64_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamworksMatchmakingSubsystem(); \
	friend struct Z_Construct_UClass_USteamworksMatchmakingSubsystem_Statics; \
public: \
	DECLARE_CLASS(USteamworksMatchmakingSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamworksExtension"), NO_API) \
	DECLARE_SERIALIZER(USteamworksMatchmakingSubsystem)


#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksMatchmakingSubsystem_h_64_INCLASS \
private: \
	static void StaticRegisterNativesUSteamworksMatchmakingSubsystem(); \
	friend struct Z_Construct_UClass_USteamworksMatchmakingSubsystem_Statics; \
public: \
	DECLARE_CLASS(USteamworksMatchmakingSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamworksExtension"), NO_API) \
	DECLARE_SERIALIZER(USteamworksMatchmakingSubsystem)


#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksMatchmakingSubsystem_h_64_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamworksMatchmakingSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamworksMatchmakingSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamworksMatchmakingSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamworksMatchmakingSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamworksMatchmakingSubsystem(USteamworksMatchmakingSubsystem&&); \
	NO_API USteamworksMatchmakingSubsystem(const USteamworksMatchmakingSubsystem&); \
public:


#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksMatchmakingSubsystem_h_64_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamworksMatchmakingSubsystem(USteamworksMatchmakingSubsystem&&); \
	NO_API USteamworksMatchmakingSubsystem(const USteamworksMatchmakingSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamworksMatchmakingSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamworksMatchmakingSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USteamworksMatchmakingSubsystem)


#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksMatchmakingSubsystem_h_61_PROLOG
#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksMatchmakingSubsystem_h_64_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksMatchmakingSubsystem_h_64_SPARSE_DATA \
	FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksMatchmakingSubsystem_h_64_RPC_WRAPPERS \
	FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksMatchmakingSubsystem_h_64_INCLASS \
	FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksMatchmakingSubsystem_h_64_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksMatchmakingSubsystem_h_64_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksMatchmakingSubsystem_h_64_SPARSE_DATA \
	FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksMatchmakingSubsystem_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksMatchmakingSubsystem_h_64_INCLASS_NO_PURE_DECLS \
	FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksMatchmakingSubsystem_h_64_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMWORKSEXTENSION_API UClass* StaticClass<class USteamworksMatchmakingSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksMatchmakingSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
