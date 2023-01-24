// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamworksExtension/Public/Subsystems/SteamworksFriendsSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamworksFriendsSubsystem() {}
// Cross Module References
	STEAMWORKSEXTENSION_API UFunction* Z_Construct_UDelegateFunction_SteamworksExtension_OnGameOverlayActivatedDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SteamworksExtension();
	STEAMWORKSEXTENSION_API UFunction* Z_Construct_UDelegateFunction_SteamworksExtension_OnPersonaStateChangeDelegate__DelegateSignature();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	STEAMWORKSEXTENSION_API UEnum* Z_Construct_UEnum_SteamworksExtension_ESteamPersonaChange();
	STEAMWORKSEXTENSION_API UFunction* Z_Construct_UDelegateFunction_SteamworksExtension_OnFriendRichPresenceUpdateDelegate__DelegateSignature();
	STEAMWORKSEXTENSION_API UFunction* Z_Construct_UDelegateFunction_SteamworksExtension_OnGameConnectedFriendChatMsgDelegate__DelegateSignature();
	STEAMWORKSEXTENSION_API UFunction* Z_Construct_UDelegateFunction_SteamworksExtension_OnGameLobbyJoinRequestedDelegate__DelegateSignature();
	STEAMWORKSEXTENSION_API UFunction* Z_Construct_UDelegateFunction_SteamworksExtension_OnGameRichPresenceJoinRequestedDelegate__DelegateSignature();
	STEAMWORKSEXTENSION_API UFunction* Z_Construct_UDelegateFunction_SteamworksExtension_OnGameServerChangeRequestedDelegate__DelegateSignature();
	STEAMWORKSEXTENSION_API UClass* Z_Construct_UClass_USteamworksFriendsSubsystem_NoRegister();
	STEAMWORKSEXTENSION_API UClass* Z_Construct_UClass_USteamworksFriendsSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	STEAMWORKSEXTENSION_API UEnum* Z_Construct_UEnum_SteamworksExtension_ESteamGameOverlayTypes();
	STEAMWORKSEXTENSION_API UEnum* Z_Construct_UEnum_SteamworksExtension_ESteamOverlayToStoreFlag();
	STEAMWORKSEXTENSION_API UEnum* Z_Construct_UEnum_SteamworksExtension_ESteamGameUserOverlayTypes();
	STEAMWORKSEXTENSION_API UEnum* Z_Construct_UEnum_SteamworksExtension_ESteamAvatarSizes();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	STEAMWORKSEXTENSION_API UEnum* Z_Construct_UEnum_SteamworksExtension_ESteamChatEntryType();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SteamworksExtension_OnGameOverlayActivatedDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamworksExtension_eventOnGameOverlayActivatedDelegate_Parms
		{
			bool bActive;
		};
		static void NewProp_bActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bActive;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_SteamworksExtension_OnGameOverlayActivatedDelegate__DelegateSignature_Statics::NewProp_bActive_SetBit(void* Obj)
	{
		((_Script_SteamworksExtension_eventOnGameOverlayActivatedDelegate_Parms*)Obj)->bActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamworksExtension_OnGameOverlayActivatedDelegate__DelegateSignature_Statics::NewProp_bActive = { "bActive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_SteamworksExtension_eventOnGameOverlayActivatedDelegate_Parms), &Z_Construct_UDelegateFunction_SteamworksExtension_OnGameOverlayActivatedDelegate__DelegateSignature_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamworksExtension_OnGameOverlayActivatedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamworksExtension_OnGameOverlayActivatedDelegate__DelegateSignature_Statics::NewProp_bActive,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamworksExtension_OnGameOverlayActivatedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ================================================\n//   Steamworks Friends Extension Subsystem\n// ================================================\n" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksFriendsSubsystem.h" },
		{ "ToolTip", "Steamworks Friends Extension Subsystem" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamworksExtension_OnGameOverlayActivatedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamworksExtension, nullptr, "OnGameOverlayActivatedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamworksExtension_OnGameOverlayActivatedDelegate__DelegateSignature_Statics::_Script_SteamworksExtension_eventOnGameOverlayActivatedDelegate_Parms), Z_Construct_UDelegateFunction_SteamworksExtension_OnGameOverlayActivatedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamworksExtension_OnGameOverlayActivatedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamworksExtension_OnGameOverlayActivatedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamworksExtension_OnGameOverlayActivatedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamworksExtension_OnGameOverlayActivatedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamworksExtension_OnGameOverlayActivatedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamworksExtension_OnPersonaStateChangeDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamworksExtension_eventOnPersonaStateChangeDelegate_Parms
		{
			FUniqueNetIdRepl UniqueId;
			ESteamPersonaChange PersonaStateChange;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UniqueId;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PersonaStateChange_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PersonaStateChange;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamworksExtension_OnPersonaStateChangeDelegate__DelegateSignature_Statics::NewProp_UniqueId = { "UniqueId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamworksExtension_eventOnPersonaStateChangeDelegate_Parms, UniqueId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 3508419189
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamworksExtension_OnPersonaStateChangeDelegate__DelegateSignature_Statics::NewProp_PersonaStateChange_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SteamworksExtension_OnPersonaStateChangeDelegate__DelegateSignature_Statics::NewProp_PersonaStateChange = { "PersonaStateChange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamworksExtension_eventOnPersonaStateChangeDelegate_Parms, PersonaStateChange), Z_Construct_UEnum_SteamworksExtension_ESteamPersonaChange, METADATA_PARAMS(nullptr, 0) }; // 2307038629
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamworksExtension_OnPersonaStateChangeDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamworksExtension_OnPersonaStateChangeDelegate__DelegateSignature_Statics::NewProp_UniqueId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamworksExtension_OnPersonaStateChangeDelegate__DelegateSignature_Statics::NewProp_PersonaStateChange_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamworksExtension_OnPersonaStateChangeDelegate__DelegateSignature_Statics::NewProp_PersonaStateChange,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamworksExtension_OnPersonaStateChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksFriendsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamworksExtension_OnPersonaStateChangeDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamworksExtension, nullptr, "OnPersonaStateChangeDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamworksExtension_OnPersonaStateChangeDelegate__DelegateSignature_Statics::_Script_SteamworksExtension_eventOnPersonaStateChangeDelegate_Parms), Z_Construct_UDelegateFunction_SteamworksExtension_OnPersonaStateChangeDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamworksExtension_OnPersonaStateChangeDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamworksExtension_OnPersonaStateChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamworksExtension_OnPersonaStateChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamworksExtension_OnPersonaStateChangeDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamworksExtension_OnPersonaStateChangeDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamworksExtension_OnFriendRichPresenceUpdateDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamworksExtension_eventOnFriendRichPresenceUpdateDelegate_Parms
		{
			FUniqueNetIdRepl UniqueId;
			int32 AppID;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UniqueId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamworksExtension_OnFriendRichPresenceUpdateDelegate__DelegateSignature_Statics::NewProp_UniqueId = { "UniqueId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamworksExtension_eventOnFriendRichPresenceUpdateDelegate_Parms, UniqueId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 3508419189
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamworksExtension_OnFriendRichPresenceUpdateDelegate__DelegateSignature_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamworksExtension_eventOnFriendRichPresenceUpdateDelegate_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamworksExtension_OnFriendRichPresenceUpdateDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamworksExtension_OnFriendRichPresenceUpdateDelegate__DelegateSignature_Statics::NewProp_UniqueId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamworksExtension_OnFriendRichPresenceUpdateDelegate__DelegateSignature_Statics::NewProp_AppID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamworksExtension_OnFriendRichPresenceUpdateDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksFriendsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamworksExtension_OnFriendRichPresenceUpdateDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamworksExtension, nullptr, "OnFriendRichPresenceUpdateDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamworksExtension_OnFriendRichPresenceUpdateDelegate__DelegateSignature_Statics::_Script_SteamworksExtension_eventOnFriendRichPresenceUpdateDelegate_Parms), Z_Construct_UDelegateFunction_SteamworksExtension_OnFriendRichPresenceUpdateDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamworksExtension_OnFriendRichPresenceUpdateDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamworksExtension_OnFriendRichPresenceUpdateDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamworksExtension_OnFriendRichPresenceUpdateDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamworksExtension_OnFriendRichPresenceUpdateDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamworksExtension_OnFriendRichPresenceUpdateDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamworksExtension_OnGameConnectedFriendChatMsgDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamworksExtension_eventOnGameConnectedFriendChatMsgDelegate_Parms
		{
			FUniqueNetIdRepl UserId;
			int32 MessageID;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MessageID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamworksExtension_OnGameConnectedFriendChatMsgDelegate__DelegateSignature_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamworksExtension_eventOnGameConnectedFriendChatMsgDelegate_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 3508419189
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamworksExtension_OnGameConnectedFriendChatMsgDelegate__DelegateSignature_Statics::NewProp_MessageID = { "MessageID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamworksExtension_eventOnGameConnectedFriendChatMsgDelegate_Parms, MessageID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamworksExtension_OnGameConnectedFriendChatMsgDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamworksExtension_OnGameConnectedFriendChatMsgDelegate__DelegateSignature_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamworksExtension_OnGameConnectedFriendChatMsgDelegate__DelegateSignature_Statics::NewProp_MessageID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamworksExtension_OnGameConnectedFriendChatMsgDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksFriendsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamworksExtension_OnGameConnectedFriendChatMsgDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamworksExtension, nullptr, "OnGameConnectedFriendChatMsgDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamworksExtension_OnGameConnectedFriendChatMsgDelegate__DelegateSignature_Statics::_Script_SteamworksExtension_eventOnGameConnectedFriendChatMsgDelegate_Parms), Z_Construct_UDelegateFunction_SteamworksExtension_OnGameConnectedFriendChatMsgDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamworksExtension_OnGameConnectedFriendChatMsgDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamworksExtension_OnGameConnectedFriendChatMsgDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamworksExtension_OnGameConnectedFriendChatMsgDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamworksExtension_OnGameConnectedFriendChatMsgDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamworksExtension_OnGameConnectedFriendChatMsgDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamworksExtension_OnGameLobbyJoinRequestedDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamworksExtension_eventOnGameLobbyJoinRequestedDelegate_Parms
		{
			FUniqueNetIdRepl LobbyId;
			FUniqueNetIdRepl FriendId;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FriendId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamworksExtension_OnGameLobbyJoinRequestedDelegate__DelegateSignature_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamworksExtension_eventOnGameLobbyJoinRequestedDelegate_Parms, LobbyId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 3508419189
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamworksExtension_OnGameLobbyJoinRequestedDelegate__DelegateSignature_Statics::NewProp_FriendId = { "FriendId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamworksExtension_eventOnGameLobbyJoinRequestedDelegate_Parms, FriendId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 3508419189
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamworksExtension_OnGameLobbyJoinRequestedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamworksExtension_OnGameLobbyJoinRequestedDelegate__DelegateSignature_Statics::NewProp_LobbyId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamworksExtension_OnGameLobbyJoinRequestedDelegate__DelegateSignature_Statics::NewProp_FriendId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamworksExtension_OnGameLobbyJoinRequestedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksFriendsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamworksExtension_OnGameLobbyJoinRequestedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamworksExtension, nullptr, "OnGameLobbyJoinRequestedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamworksExtension_OnGameLobbyJoinRequestedDelegate__DelegateSignature_Statics::_Script_SteamworksExtension_eventOnGameLobbyJoinRequestedDelegate_Parms), Z_Construct_UDelegateFunction_SteamworksExtension_OnGameLobbyJoinRequestedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamworksExtension_OnGameLobbyJoinRequestedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamworksExtension_OnGameLobbyJoinRequestedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamworksExtension_OnGameLobbyJoinRequestedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamworksExtension_OnGameLobbyJoinRequestedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamworksExtension_OnGameLobbyJoinRequestedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamworksExtension_OnGameRichPresenceJoinRequestedDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamworksExtension_eventOnGameRichPresenceJoinRequestedDelegate_Parms
		{
			FUniqueNetIdRepl UserId;
			FString ConnectionString;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ConnectionString;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamworksExtension_OnGameRichPresenceJoinRequestedDelegate__DelegateSignature_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamworksExtension_eventOnGameRichPresenceJoinRequestedDelegate_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 3508419189
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SteamworksExtension_OnGameRichPresenceJoinRequestedDelegate__DelegateSignature_Statics::NewProp_ConnectionString = { "ConnectionString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamworksExtension_eventOnGameRichPresenceJoinRequestedDelegate_Parms, ConnectionString), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamworksExtension_OnGameRichPresenceJoinRequestedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamworksExtension_OnGameRichPresenceJoinRequestedDelegate__DelegateSignature_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamworksExtension_OnGameRichPresenceJoinRequestedDelegate__DelegateSignature_Statics::NewProp_ConnectionString,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamworksExtension_OnGameRichPresenceJoinRequestedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksFriendsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamworksExtension_OnGameRichPresenceJoinRequestedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamworksExtension, nullptr, "OnGameRichPresenceJoinRequestedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamworksExtension_OnGameRichPresenceJoinRequestedDelegate__DelegateSignature_Statics::_Script_SteamworksExtension_eventOnGameRichPresenceJoinRequestedDelegate_Parms), Z_Construct_UDelegateFunction_SteamworksExtension_OnGameRichPresenceJoinRequestedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamworksExtension_OnGameRichPresenceJoinRequestedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamworksExtension_OnGameRichPresenceJoinRequestedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamworksExtension_OnGameRichPresenceJoinRequestedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamworksExtension_OnGameRichPresenceJoinRequestedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamworksExtension_OnGameRichPresenceJoinRequestedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamworksExtension_OnGameServerChangeRequestedDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamworksExtension_eventOnGameServerChangeRequestedDelegate_Parms
		{
			FString IP;
			FString Password;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_IP;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Password;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SteamworksExtension_OnGameServerChangeRequestedDelegate__DelegateSignature_Statics::NewProp_IP = { "IP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamworksExtension_eventOnGameServerChangeRequestedDelegate_Parms, IP), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SteamworksExtension_OnGameServerChangeRequestedDelegate__DelegateSignature_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamworksExtension_eventOnGameServerChangeRequestedDelegate_Parms, Password), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamworksExtension_OnGameServerChangeRequestedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamworksExtension_OnGameServerChangeRequestedDelegate__DelegateSignature_Statics::NewProp_IP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamworksExtension_OnGameServerChangeRequestedDelegate__DelegateSignature_Statics::NewProp_Password,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamworksExtension_OnGameServerChangeRequestedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksFriendsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamworksExtension_OnGameServerChangeRequestedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamworksExtension, nullptr, "OnGameServerChangeRequestedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamworksExtension_OnGameServerChangeRequestedDelegate__DelegateSignature_Statics::_Script_SteamworksExtension_eventOnGameServerChangeRequestedDelegate_Parms), Z_Construct_UDelegateFunction_SteamworksExtension_OnGameServerChangeRequestedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamworksExtension_OnGameServerChangeRequestedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamworksExtension_OnGameServerChangeRequestedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamworksExtension_OnGameServerChangeRequestedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamworksExtension_OnGameServerChangeRequestedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamworksExtension_OnGameServerChangeRequestedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(USteamworksFriendsSubsystem::execRequestUserInformation)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UserId);
		P_GET_UBOOL(Z_Param_bRequireNameOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestUserInformation(Z_Param_UserId,Z_Param_bRequireNameOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamworksFriendsSubsystem::execIsUserInSource)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UserId);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_SourceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsUserInSource(Z_Param_UserId,Z_Param_SourceId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamworksFriendsSubsystem::execGetAvatarImage)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UserId);
		P_GET_ENUM(ESteamAvatarSizes,Z_Param_AvatarSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=P_THIS->GetAvatarImage(Z_Param_UserId,ESteamAvatarSizes(Z_Param_AvatarSize));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamworksFriendsSubsystem::execInviteUserToGame)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UserId);
		P_GET_PROPERTY(FStrProperty,Z_Param_ConnectString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->InviteUserToGame(Z_Param_UserId,Z_Param_ConnectString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamworksFriendsSubsystem::execGetFriendCoplayTime)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UserId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetFriendCoplayTime(Z_Param_UserId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamworksFriendsSubsystem::execGetFriendCoplayGame)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UserId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetFriendCoplayGame(Z_Param_UserId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamworksFriendsSubsystem::execGetCoplayFriendCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCoplayFriendCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamworksFriendsSubsystem::execGetCoplayFriend)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_CoplayFriendIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FUniqueNetIdRepl*)Z_Param__Result=P_THIS->GetCoplayFriend(Z_Param_CoplayFriendIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamworksFriendsSubsystem::execSetInGameVoiceSpeaking)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UserId);
		P_GET_UBOOL(Z_Param_bSpeaking);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInGameVoiceSpeaking(Z_Param_UserId,Z_Param_bSpeaking);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamworksFriendsSubsystem::execReplyToFriendMessage)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UserId);
		P_GET_PROPERTY(FStrProperty,Z_Param_MsgToSend);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ReplyToFriendMessage(Z_Param_UserId,Z_Param_MsgToSend);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamworksFriendsSubsystem::execGetFriendMessage)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UserId);
		P_GET_PROPERTY(FIntProperty,Z_Param_MessageIndex);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Message);
		P_GET_ENUM_REF(ESteamChatEntryType,Z_Param_Out_ChatEntryType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetFriendMessage(Z_Param_UserId,Z_Param_MessageIndex,Z_Param_Out_Message,(ESteamChatEntryType&)(Z_Param_Out_ChatEntryType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamworksFriendsSubsystem::execSetListenForFriendsMessages)
	{
		P_GET_UBOOL(Z_Param_bInterceptEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetListenForFriendsMessages(Z_Param_bInterceptEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamworksFriendsSubsystem::execSetPlayedWith)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UserIdPlayedWith);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayedWith(Z_Param_UserIdPlayedWith);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamworksFriendsSubsystem::execClearRichPresence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearRichPresence();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamworksFriendsSubsystem::execActivateGameOverlayToWebPage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_GET_UBOOL(Z_Param_bShowModal);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateGameOverlayToWebPage(Z_Param_URL,Z_Param_bShowModal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamworksFriendsSubsystem::execActivateGameOverlayToUser)
	{
		P_GET_ENUM(ESteamGameUserOverlayTypes,Z_Param_OverlayType);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UserId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateGameOverlayToUser(ESteamGameUserOverlayTypes(Z_Param_OverlayType),Z_Param_UserId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamworksFriendsSubsystem::execActivateGameOverlayToStore)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_ENUM(ESteamOverlayToStoreFlag,Z_Param_StoreFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateGameOverlayToStore(Z_Param_AppID,ESteamOverlayToStoreFlag(Z_Param_StoreFlag));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamworksFriendsSubsystem::execActivateGameOverlayInviteDialog)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_LobbyId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateGameOverlayInviteDialog(Z_Param_LobbyId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamworksFriendsSubsystem::execActivateGameOverlay)
	{
		P_GET_ENUM(ESteamGameOverlayTypes,Z_Param_OverlayType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateGameOverlay(ESteamGameOverlayTypes(Z_Param_OverlayType));
		P_NATIVE_END;
	}
	void USteamworksFriendsSubsystem::StaticRegisterNativesUSteamworksFriendsSubsystem()
	{
		UClass* Class = USteamworksFriendsSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateGameOverlay", &USteamworksFriendsSubsystem::execActivateGameOverlay },
			{ "ActivateGameOverlayInviteDialog", &USteamworksFriendsSubsystem::execActivateGameOverlayInviteDialog },
			{ "ActivateGameOverlayToStore", &USteamworksFriendsSubsystem::execActivateGameOverlayToStore },
			{ "ActivateGameOverlayToUser", &USteamworksFriendsSubsystem::execActivateGameOverlayToUser },
			{ "ActivateGameOverlayToWebPage", &USteamworksFriendsSubsystem::execActivateGameOverlayToWebPage },
			{ "ClearRichPresence", &USteamworksFriendsSubsystem::execClearRichPresence },
			{ "GetAvatarImage", &USteamworksFriendsSubsystem::execGetAvatarImage },
			{ "GetCoplayFriend", &USteamworksFriendsSubsystem::execGetCoplayFriend },
			{ "GetCoplayFriendCount", &USteamworksFriendsSubsystem::execGetCoplayFriendCount },
			{ "GetFriendCoplayGame", &USteamworksFriendsSubsystem::execGetFriendCoplayGame },
			{ "GetFriendCoplayTime", &USteamworksFriendsSubsystem::execGetFriendCoplayTime },
			{ "GetFriendMessage", &USteamworksFriendsSubsystem::execGetFriendMessage },
			{ "InviteUserToGame", &USteamworksFriendsSubsystem::execInviteUserToGame },
			{ "IsUserInSource", &USteamworksFriendsSubsystem::execIsUserInSource },
			{ "ReplyToFriendMessage", &USteamworksFriendsSubsystem::execReplyToFriendMessage },
			{ "RequestUserInformation", &USteamworksFriendsSubsystem::execRequestUserInformation },
			{ "SetInGameVoiceSpeaking", &USteamworksFriendsSubsystem::execSetInGameVoiceSpeaking },
			{ "SetListenForFriendsMessages", &USteamworksFriendsSubsystem::execSetListenForFriendsMessages },
			{ "SetPlayedWith", &USteamworksFriendsSubsystem::execSetPlayedWith },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlay_Statics
	{
		struct SteamworksFriendsSubsystem_eventActivateGameOverlay_Parms
		{
			ESteamGameOverlayTypes OverlayType;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_OverlayType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlayType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OverlayType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlay_Statics::NewProp_OverlayType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlay_Statics::NewProp_OverlayType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlay_Statics::NewProp_OverlayType = { "OverlayType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksFriendsSubsystem_eventActivateGameOverlay_Parms, OverlayType), Z_Construct_UEnum_SteamworksExtension_ESteamGameOverlayTypes, METADATA_PARAMS(Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlay_Statics::NewProp_OverlayType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlay_Statics::NewProp_OverlayType_MetaData)) }; // 1345040405
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlay_Statics::NewProp_OverlayType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlay_Statics::NewProp_OverlayType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Steamworks|Friends" },
		{ "Comment", "/**\n\x09 * Activates the Steam Overlay to a specific dialog.\n\x09 * This is equivalent to calling ActivateGameOverlayToUser with steamID set to ISteamUser::GetSteamID.\n\x09 *\n\x09 * @param const ESteamOverlayTypes OverlayType - The dialog to open.\n\x09 * @return void\n\x09 */" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksFriendsSubsystem.h" },
		{ "ToolTip", "Activates the Steam Overlay to a specific dialog.\nThis is equivalent to calling ActivateGameOverlayToUser with steamID set to ISteamUser::GetSteamID.\n\n@param const ESteamOverlayTypes OverlayType - The dialog to open.\n@return void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamworksFriendsSubsystem, nullptr, "ActivateGameOverlay", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlay_Statics::SteamworksFriendsSubsystem_eventActivateGameOverlay_Parms), Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlayInviteDialog_Statics
	{
		struct SteamworksFriendsSubsystem_eventActivateGameOverlayInviteDialog_Parms
		{
			FUniqueNetIdRepl LobbyId;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlayInviteDialog_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksFriendsSubsystem_eventActivateGameOverlayInviteDialog_Parms, LobbyId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 3508419189
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlayInviteDialog_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlayInviteDialog_Statics::NewProp_LobbyId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlayInviteDialog_Statics::Function_MetaDataParams[] = {
		{ "Category", "Steamworks|Friends" },
		{ "Comment", "/**\n\x09 * Activates the Steam Overlay to open the invite dialog. Invitations sent from this dialog will be for the provided lobby.\n\x09 *\n\x09 * @param FUniqueNetIdRepl SteamIDLobby - The Steam ID of the lobby that selected users will be invited to.\n\x09 * @return void\n\x09 */" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksFriendsSubsystem.h" },
		{ "ToolTip", "Activates the Steam Overlay to open the invite dialog. Invitations sent from this dialog will be for the provided lobby.\n\n@param FUniqueNetIdRepl SteamIDLobby - The Steam ID of the lobby that selected users will be invited to.\n@return void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlayInviteDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamworksFriendsSubsystem, nullptr, "ActivateGameOverlayInviteDialog", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlayInviteDialog_Statics::SteamworksFriendsSubsystem_eventActivateGameOverlayInviteDialog_Parms), Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlayInviteDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlayInviteDialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlayInviteDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlayInviteDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlayInviteDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlayInviteDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlayToStore_Statics
	{
		struct SteamworksFriendsSubsystem_eventActivateGameOverlayToStore_Parms
		{
			int32 AppID;
			ESteamOverlayToStoreFlag StoreFlag;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_StoreFlag_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_StoreFlag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlayToStore_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksFriendsSubsystem_eventActivateGameOverlayToStore_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlayToStore_Statics::NewProp_StoreFlag_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlayToStore_Statics::NewProp_StoreFlag = { "StoreFlag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksFriendsSubsystem_eventActivateGameOverlayToStore_Parms, StoreFlag), Z_Construct_UEnum_SteamworksExtension_ESteamOverlayToStoreFlag, METADATA_PARAMS(nullptr, 0) }; // 177917171
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlayToStore_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlayToStore_Statics::NewProp_AppID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlayToStore_Statics::NewProp_StoreFlag_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlayToStore_Statics::NewProp_StoreFlag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlayToStore_Statics::Function_MetaDataParams[] = {
		{ "Category", "Steamworks|Friends" },
		{ "Comment", "/**\n\x09 * Activates the Steam Overlay to the Steam store page for the provided app.\n\x09 * Using k_uAppIdInvalid brings the user to the front page of the Steam store.\n\x09 *\n\x09 * @param int32 AppID - The app ID to show the store page of.\n\x09 * @param ESteamOverlayToStoreFlag StoreFlag - \x09""Flags to modify the behavior when the page opens.\n\x09 * @return void\n\x09 */" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksFriendsSubsystem.h" },
		{ "ToolTip", "Activates the Steam Overlay to the Steam store page for the provided app.\nUsing k_uAppIdInvalid brings the user to the front page of the Steam store.\n\n@param int32 AppID - The app ID to show the store page of.\n@param ESteamOverlayToStoreFlag StoreFlag -  Flags to modify the behavior when the page opens.\n@return void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlayToStore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamworksFriendsSubsystem, nullptr, "ActivateGameOverlayToStore", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlayToStore_Statics::SteamworksFriendsSubsystem_eventActivateGameOverlayToStore_Parms), Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlayToStore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlayToStore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlayToStore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlayToStore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlayToStore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlayToStore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlayToUser_Statics
	{
		struct SteamworksFriendsSubsystem_eventActivateGameOverlayToUser_Parms
		{
			ESteamGameUserOverlayTypes OverlayType;
			FUniqueNetIdRepl UserId;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_OverlayType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlayType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OverlayType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlayToUser_Statics::NewProp_OverlayType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlayToUser_Statics::NewProp_OverlayType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlayToUser_Statics::NewProp_OverlayType = { "OverlayType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksFriendsSubsystem_eventActivateGameOverlayToUser_Parms, OverlayType), Z_Construct_UEnum_SteamworksExtension_ESteamGameUserOverlayTypes, METADATA_PARAMS(Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlayToUser_Statics::NewProp_OverlayType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlayToUser_Statics::NewProp_OverlayType_MetaData)) }; // 2974265815
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlayToUser_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksFriendsSubsystem_eventActivateGameOverlayToUser_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 3508419189
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlayToUser_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlayToUser_Statics::NewProp_OverlayType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlayToUser_Statics::NewProp_OverlayType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlayToUser_Statics::NewProp_UserId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlayToUser_Statics::Function_MetaDataParams[] = {
		{ "Category", "Steamworks|Friends" },
		{ "Comment", "/**\n\x09 * Activates Steam Overlay to a specific dialog.\n\x09 *\n\x09 * @param const ESteamGameUserOverlayTypes OverlayType - The dialog to open.\n\x09 * @param FUniqueNetIdRepl UserId - The Steam ID of the context to open this dialog to.\n\x09 * @return void\n\x09 */" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksFriendsSubsystem.h" },
		{ "ToolTip", "Activates Steam Overlay to a specific dialog.\n\n@param const ESteamGameUserOverlayTypes OverlayType - The dialog to open.\n@param FUniqueNetIdRepl UserId - The Steam ID of the context to open this dialog to.\n@return void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlayToUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamworksFriendsSubsystem, nullptr, "ActivateGameOverlayToUser", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlayToUser_Statics::SteamworksFriendsSubsystem_eventActivateGameOverlayToUser_Parms), Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlayToUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlayToUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlayToUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlayToUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlayToUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlayToUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlayToWebPage_Statics
	{
		struct SteamworksFriendsSubsystem_eventActivateGameOverlayToWebPage_Parms
		{
			FString URL;
			bool bShowModal;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
		static void NewProp_bShowModal_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowModal;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlayToWebPage_Statics::NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlayToWebPage_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksFriendsSubsystem_eventActivateGameOverlayToWebPage_Parms, URL), METADATA_PARAMS(Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlayToWebPage_Statics::NewProp_URL_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlayToWebPage_Statics::NewProp_URL_MetaData)) };
	void Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlayToWebPage_Statics::NewProp_bShowModal_SetBit(void* Obj)
	{
		((SteamworksFriendsSubsystem_eventActivateGameOverlayToWebPage_Parms*)Obj)->bShowModal = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlayToWebPage_Statics::NewProp_bShowModal = { "bShowModal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamworksFriendsSubsystem_eventActivateGameOverlayToWebPage_Parms), &Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlayToWebPage_Statics::NewProp_bShowModal_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlayToWebPage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlayToWebPage_Statics::NewProp_URL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlayToWebPage_Statics::NewProp_bShowModal,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlayToWebPage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Steamworks|Friends" },
		{ "Comment", "/**\n\x09 * Activates Steam Overlay web browser directly to the specified URL.\n\x09 *\n\x09 * @param const FString & URL - The webpage to open. (A fully qualified address with the protocol is required, e.g. \"http://www.steampowered.com\")\n\x09 * @param bool bShowModal\n\x09 * @return void\n\x09 */" },
		{ "CPP_Default_bShowModal", "false" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksFriendsSubsystem.h" },
		{ "ToolTip", "Activates Steam Overlay web browser directly to the specified URL.\n\n@param const FString & URL - The webpage to open. (A fully qualified address with the protocol is required, e.g. \"http://www.steampowered.com\")\n@param bool bShowModal\n@return void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlayToWebPage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamworksFriendsSubsystem, nullptr, "ActivateGameOverlayToWebPage", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlayToWebPage_Statics::SteamworksFriendsSubsystem_eventActivateGameOverlayToWebPage_Parms), Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlayToWebPage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlayToWebPage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlayToWebPage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlayToWebPage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlayToWebPage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlayToWebPage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamworksFriendsSubsystem_ClearRichPresence_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamworksFriendsSubsystem_ClearRichPresence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Steamworks|Friends" },
		{ "Comment", "/**\n\x09 * Clears all of the current user's Rich Presence key/values.\n\x09 *\n\x09 * @return void\n\x09 */" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksFriendsSubsystem.h" },
		{ "ToolTip", "Clears all of the current user's Rich Presence key/values.\n\n@return void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamworksFriendsSubsystem_ClearRichPresence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamworksFriendsSubsystem, nullptr, "ClearRichPresence", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamworksFriendsSubsystem_ClearRichPresence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksFriendsSubsystem_ClearRichPresence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamworksFriendsSubsystem_ClearRichPresence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamworksFriendsSubsystem_ClearRichPresence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamworksFriendsSubsystem_GetAvatarImage_Statics
	{
		struct SteamworksFriendsSubsystem_eventGetAvatarImage_Parms
		{
			FUniqueNetIdRepl UserId;
			ESteamAvatarSizes AvatarSize;
			UTexture2D* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AvatarSize_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AvatarSize;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamworksFriendsSubsystem_GetAvatarImage_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksFriendsSubsystem_eventGetAvatarImage_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 3508419189
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamworksFriendsSubsystem_GetAvatarImage_Statics::NewProp_AvatarSize_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamworksFriendsSubsystem_GetAvatarImage_Statics::NewProp_AvatarSize = { "AvatarSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksFriendsSubsystem_eventGetAvatarImage_Parms, AvatarSize), Z_Construct_UEnum_SteamworksExtension_ESteamAvatarSizes, METADATA_PARAMS(nullptr, 0) }; // 2166052401
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamworksFriendsSubsystem_GetAvatarImage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksFriendsSubsystem_eventGetAvatarImage_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamworksFriendsSubsystem_GetAvatarImage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksFriendsSubsystem_GetAvatarImage_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksFriendsSubsystem_GetAvatarImage_Statics::NewProp_AvatarSize_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksFriendsSubsystem_GetAvatarImage_Statics::NewProp_AvatarSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksFriendsSubsystem_GetAvatarImage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamworksFriendsSubsystem_GetAvatarImage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Steamworks|Friends" },
		{ "Comment", "/**\n\x09 * Gets a handle to the avatar for the specified user.\n\x09 * You can pass in ISteamUser::GetSteamID to get the current users avatar.\n\x09 * This only works for users that the local user knows about. They will automatically know about their friends, people on leaderboards they've requested, or people in the same source as them -\n\x09 * (Steam group, chat room, lobby, or game server). If they don't know about them then you must call RequestUserInformation to cache the avatar locally.\n\x09 *\n\x09 * @param FUniqueNetIdRepl UserId\n\x09 * @param ESteamAvatarSize AvatarSize\n\x09 * @return UTexture2D*\n\x09 */" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksFriendsSubsystem.h" },
		{ "ToolTip", "Gets a handle to the avatar for the specified user.\nYou can pass in ISteamUser::GetSteamID to get the current users avatar.\nThis only works for users that the local user knows about. They will automatically know about their friends, people on leaderboards they've requested, or people in the same source as them -\n(Steam group, chat room, lobby, or game server). If they don't know about them then you must call RequestUserInformation to cache the avatar locally.\n\n@param FUniqueNetIdRepl UserId\n@param ESteamAvatarSize AvatarSize\n@return UTexture2D*" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamworksFriendsSubsystem_GetAvatarImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamworksFriendsSubsystem, nullptr, "GetAvatarImage", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamworksFriendsSubsystem_GetAvatarImage_Statics::SteamworksFriendsSubsystem_eventGetAvatarImage_Parms), Z_Construct_UFunction_USteamworksFriendsSubsystem_GetAvatarImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksFriendsSubsystem_GetAvatarImage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamworksFriendsSubsystem_GetAvatarImage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksFriendsSubsystem_GetAvatarImage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamworksFriendsSubsystem_GetAvatarImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamworksFriendsSubsystem_GetAvatarImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamworksFriendsSubsystem_GetCoplayFriend_Statics
	{
		struct SteamworksFriendsSubsystem_eventGetCoplayFriend_Parms
		{
			int32 CoplayFriendIndex;
			FUniqueNetIdRepl ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_CoplayFriendIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamworksFriendsSubsystem_GetCoplayFriend_Statics::NewProp_CoplayFriendIndex = { "CoplayFriendIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksFriendsSubsystem_eventGetCoplayFriend_Parms, CoplayFriendIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamworksFriendsSubsystem_GetCoplayFriend_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksFriendsSubsystem_eventGetCoplayFriend_Parms, ReturnValue), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 3508419189
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamworksFriendsSubsystem_GetCoplayFriend_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksFriendsSubsystem_GetCoplayFriend_Statics::NewProp_CoplayFriendIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksFriendsSubsystem_GetCoplayFriend_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamworksFriendsSubsystem_GetCoplayFriend_Statics::Function_MetaDataParams[] = {
		{ "Category", "Steamworks|Friends" },
		{ "Comment", "/**\n\x09 * Gets the Steam ID of the recently played with user at the given index.\n\x09 * You must call GetCoplayFriendCount before calling this.\n\x09 *\n\x09 * @param int32 CoplayFriendIndex - An index between 0 and GetCoplayFriendCount.\n\x09 * @return FUniqueNetIdRepl\n\x09 */" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksFriendsSubsystem.h" },
		{ "ToolTip", "Gets the Steam ID of the recently played with user at the given index.\nYou must call GetCoplayFriendCount before calling this.\n\n@param int32 CoplayFriendIndex - An index between 0 and GetCoplayFriendCount.\n@return FUniqueNetIdRepl" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamworksFriendsSubsystem_GetCoplayFriend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamworksFriendsSubsystem, nullptr, "GetCoplayFriend", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamworksFriendsSubsystem_GetCoplayFriend_Statics::SteamworksFriendsSubsystem_eventGetCoplayFriend_Parms), Z_Construct_UFunction_USteamworksFriendsSubsystem_GetCoplayFriend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksFriendsSubsystem_GetCoplayFriend_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamworksFriendsSubsystem_GetCoplayFriend_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksFriendsSubsystem_GetCoplayFriend_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamworksFriendsSubsystem_GetCoplayFriend()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamworksFriendsSubsystem_GetCoplayFriend_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamworksFriendsSubsystem_GetCoplayFriendCount_Statics
	{
		struct SteamworksFriendsSubsystem_eventGetCoplayFriendCount_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamworksFriendsSubsystem_GetCoplayFriendCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksFriendsSubsystem_eventGetCoplayFriendCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamworksFriendsSubsystem_GetCoplayFriendCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksFriendsSubsystem_GetCoplayFriendCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamworksFriendsSubsystem_GetCoplayFriendCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Steamworks|Friends" },
		{ "Comment", "/**\n\x09 * Gets the number of players that the current users has recently played with, across all games.\n\x09 * This is used for iteration, after calling this then GetCoplayFriend can be used to get the Steam ID of each player.\n\x09 * These players are have been set with previous calls to SetPlayedWith.\n\x09 *\n\x09 * @return int32 - The number of users that the current user has recently played with.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksFriendsSubsystem.h" },
		{ "ToolTip", "Gets the number of players that the current users has recently played with, across all games.\nThis is used for iteration, after calling this then GetCoplayFriend can be used to get the Steam ID of each player.\nThese players are have been set with previous calls to SetPlayedWith.\n\n@return int32 - The number of users that the current user has recently played with." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamworksFriendsSubsystem_GetCoplayFriendCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamworksFriendsSubsystem, nullptr, "GetCoplayFriendCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamworksFriendsSubsystem_GetCoplayFriendCount_Statics::SteamworksFriendsSubsystem_eventGetCoplayFriendCount_Parms), Z_Construct_UFunction_USteamworksFriendsSubsystem_GetCoplayFriendCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksFriendsSubsystem_GetCoplayFriendCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamworksFriendsSubsystem_GetCoplayFriendCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksFriendsSubsystem_GetCoplayFriendCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamworksFriendsSubsystem_GetCoplayFriendCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamworksFriendsSubsystem_GetCoplayFriendCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamworksFriendsSubsystem_GetFriendCoplayGame_Statics
	{
		struct SteamworksFriendsSubsystem_eventGetFriendCoplayGame_Parms
		{
			FUniqueNetIdRepl UserId;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamworksFriendsSubsystem_GetFriendCoplayGame_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksFriendsSubsystem_eventGetFriendCoplayGame_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 3508419189
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamworksFriendsSubsystem_GetFriendCoplayGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksFriendsSubsystem_eventGetFriendCoplayGame_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamworksFriendsSubsystem_GetFriendCoplayGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksFriendsSubsystem_GetFriendCoplayGame_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksFriendsSubsystem_GetFriendCoplayGame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamworksFriendsSubsystem_GetFriendCoplayGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Steamworks|Friends" },
		{ "Comment", "/**\n\x09 * Gets the app ID of the game that user played with someone on their recently-played-with list.\n\x09 *\n\x09 * @param FSteamID SteamIDFriend - The Steam ID of the user on the recently-played-with list to get the game played.\n\x09 * @return int32 - Steam IDs not in the recently-played-with list return k_uAppIdInvalid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksFriendsSubsystem.h" },
		{ "ToolTip", "Gets the app ID of the game that user played with someone on their recently-played-with list.\n\n@param FSteamID SteamIDFriend - The Steam ID of the user on the recently-played-with list to get the game played.\n@return int32 - Steam IDs not in the recently-played-with list return k_uAppIdInvalid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamworksFriendsSubsystem_GetFriendCoplayGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamworksFriendsSubsystem, nullptr, "GetFriendCoplayGame", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamworksFriendsSubsystem_GetFriendCoplayGame_Statics::SteamworksFriendsSubsystem_eventGetFriendCoplayGame_Parms), Z_Construct_UFunction_USteamworksFriendsSubsystem_GetFriendCoplayGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksFriendsSubsystem_GetFriendCoplayGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamworksFriendsSubsystem_GetFriendCoplayGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksFriendsSubsystem_GetFriendCoplayGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamworksFriendsSubsystem_GetFriendCoplayGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamworksFriendsSubsystem_GetFriendCoplayGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamworksFriendsSubsystem_GetFriendCoplayTime_Statics
	{
		struct SteamworksFriendsSubsystem_eventGetFriendCoplayTime_Parms
		{
			FUniqueNetIdRepl UserId;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamworksFriendsSubsystem_GetFriendCoplayTime_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksFriendsSubsystem_eventGetFriendCoplayTime_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 3508419189
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamworksFriendsSubsystem_GetFriendCoplayTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksFriendsSubsystem_eventGetFriendCoplayTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamworksFriendsSubsystem_GetFriendCoplayTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksFriendsSubsystem_GetFriendCoplayTime_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksFriendsSubsystem_GetFriendCoplayTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamworksFriendsSubsystem_GetFriendCoplayTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Steamworks|Friends" },
		{ "Comment", "/**\n\x09 * Gets the timestamp of when the user played with someone on their recently-played-with list.\n\x09 *\n\x09 * @param FSteamID SteamIDFriend - The Steam ID of the user on the recently-played-with list to get the timestamp for.\n\x09 * @return int32 - The time is provided in Unix epoch format (seconds since Jan 1st 1970). Steam IDs not in the recently-played-with list return 0.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksFriendsSubsystem.h" },
		{ "ToolTip", "Gets the timestamp of when the user played with someone on their recently-played-with list.\n\n@param FSteamID SteamIDFriend - The Steam ID of the user on the recently-played-with list to get the timestamp for.\n@return int32 - The time is provided in Unix epoch format (seconds since Jan 1st 1970). Steam IDs not in the recently-played-with list return 0." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamworksFriendsSubsystem_GetFriendCoplayTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamworksFriendsSubsystem, nullptr, "GetFriendCoplayTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamworksFriendsSubsystem_GetFriendCoplayTime_Statics::SteamworksFriendsSubsystem_eventGetFriendCoplayTime_Parms), Z_Construct_UFunction_USteamworksFriendsSubsystem_GetFriendCoplayTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksFriendsSubsystem_GetFriendCoplayTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamworksFriendsSubsystem_GetFriendCoplayTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksFriendsSubsystem_GetFriendCoplayTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamworksFriendsSubsystem_GetFriendCoplayTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamworksFriendsSubsystem_GetFriendCoplayTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamworksFriendsSubsystem_GetFriendMessage_Statics
	{
		struct SteamworksFriendsSubsystem_eventGetFriendMessage_Parms
		{
			FUniqueNetIdRepl UserId;
			int32 MessageIndex;
			FString Message;
			ESteamChatEntryType ChatEntryType;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MessageIndex;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ChatEntryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ChatEntryType;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamworksFriendsSubsystem_GetFriendMessage_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksFriendsSubsystem_eventGetFriendMessage_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 3508419189
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamworksFriendsSubsystem_GetFriendMessage_Statics::NewProp_MessageIndex = { "MessageIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksFriendsSubsystem_eventGetFriendMessage_Parms, MessageIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamworksFriendsSubsystem_GetFriendMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksFriendsSubsystem_eventGetFriendMessage_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamworksFriendsSubsystem_GetFriendMessage_Statics::NewProp_ChatEntryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamworksFriendsSubsystem_GetFriendMessage_Statics::NewProp_ChatEntryType = { "ChatEntryType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksFriendsSubsystem_eventGetFriendMessage_Parms, ChatEntryType), Z_Construct_UEnum_SteamworksExtension_ESteamChatEntryType, METADATA_PARAMS(nullptr, 0) }; // 1289089358
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamworksFriendsSubsystem_GetFriendMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksFriendsSubsystem_eventGetFriendMessage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamworksFriendsSubsystem_GetFriendMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksFriendsSubsystem_GetFriendMessage_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksFriendsSubsystem_GetFriendMessage_Statics::NewProp_MessageIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksFriendsSubsystem_GetFriendMessage_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksFriendsSubsystem_GetFriendMessage_Statics::NewProp_ChatEntryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksFriendsSubsystem_GetFriendMessage_Statics::NewProp_ChatEntryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksFriendsSubsystem_GetFriendMessage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamworksFriendsSubsystem_GetFriendMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Steamworks|Friends" },
		{ "Comment", "/**\n\x09 * Gets the data from a Steam friends message.\n\x09 * This should only ever be called in response to a GameConnectedFriendChatMsg_t callback.\n\x09 *\n\x09 * @param FSteamID SteamIDFriend - The Steam ID of the friend that sent this message.\n\x09 * @param int32 MessageIndex - The index of the message. This should be the m_iMessageID field of GameConnectedFriendChatMsg_t.\n\x09 * @param FString & Message - The buffer where the chat message will be copied into.\n\x09 * @param ESteamChatEntryType & ChatEntryType - Returns the type of chat entry that was received.\n\x09 * @return int32 - The number of bytes copied into pvData. Returns 0 and sets peChatEntryType to k_EChatEntryTypeInvalid if the current user is chat restricted, if the provided Steam ID is not a friend, or if the index provided in iMessageID is invalid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksFriendsSubsystem.h" },
		{ "ToolTip", "Gets the data from a Steam friends message.\nThis should only ever be called in response to a GameConnectedFriendChatMsg_t callback.\n\n@param FSteamID SteamIDFriend - The Steam ID of the friend that sent this message.\n@param int32 MessageIndex - The index of the message. This should be the m_iMessageID field of GameConnectedFriendChatMsg_t.\n@param FString & Message - The buffer where the chat message will be copied into.\n@param ESteamChatEntryType & ChatEntryType - Returns the type of chat entry that was received.\n@return int32 - The number of bytes copied into pvData. Returns 0 and sets peChatEntryType to k_EChatEntryTypeInvalid if the current user is chat restricted, if the provided Steam ID is not a friend, or if the index provided in iMessageID is invalid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamworksFriendsSubsystem_GetFriendMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamworksFriendsSubsystem, nullptr, "GetFriendMessage", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamworksFriendsSubsystem_GetFriendMessage_Statics::SteamworksFriendsSubsystem_eventGetFriendMessage_Parms), Z_Construct_UFunction_USteamworksFriendsSubsystem_GetFriendMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksFriendsSubsystem_GetFriendMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamworksFriendsSubsystem_GetFriendMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksFriendsSubsystem_GetFriendMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamworksFriendsSubsystem_GetFriendMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamworksFriendsSubsystem_GetFriendMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamworksFriendsSubsystem_InviteUserToGame_Statics
	{
		struct SteamworksFriendsSubsystem_eventInviteUserToGame_Parms
		{
			FUniqueNetIdRepl UserId;
			FString ConnectString;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConnectString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ConnectString;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamworksFriendsSubsystem_InviteUserToGame_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksFriendsSubsystem_eventInviteUserToGame_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 3508419189
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamworksFriendsSubsystem_InviteUserToGame_Statics::NewProp_ConnectString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamworksFriendsSubsystem_InviteUserToGame_Statics::NewProp_ConnectString = { "ConnectString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksFriendsSubsystem_eventInviteUserToGame_Parms, ConnectString), METADATA_PARAMS(Z_Construct_UFunction_USteamworksFriendsSubsystem_InviteUserToGame_Statics::NewProp_ConnectString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksFriendsSubsystem_InviteUserToGame_Statics::NewProp_ConnectString_MetaData)) };
	void Z_Construct_UFunction_USteamworksFriendsSubsystem_InviteUserToGame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamworksFriendsSubsystem_eventInviteUserToGame_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamworksFriendsSubsystem_InviteUserToGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamworksFriendsSubsystem_eventInviteUserToGame_Parms), &Z_Construct_UFunction_USteamworksFriendsSubsystem_InviteUserToGame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamworksFriendsSubsystem_InviteUserToGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksFriendsSubsystem_InviteUserToGame_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksFriendsSubsystem_InviteUserToGame_Statics::NewProp_ConnectString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksFriendsSubsystem_InviteUserToGame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamworksFriendsSubsystem_InviteUserToGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Steamworks|Friends" },
		{ "Comment", "/**\n\x09 * Invites a friend or clan member to the current game using a special invite string.\n\x09 * If the target user accepts the invite then the pchConnectString gets added to the command-line when launching the game.\n\x09 * If the game is already running for that user, then they will receive a GameRichPresenceJoinRequested_t callback with the connect string.\n\x09 * Triggers a GameRichPresenceJoinRequested_t callback.\n\x09 *\n\x09 * @param FSteamID SteamIDFriend - The Steam ID of the friend to invite.\n\x09 * @param const FString & ConnectString - A string that lets the friend know how to join the game (I.E. the game server IP). This can not be longer than specified in k_cchMaxRichPresenceValueLength.\n\x09 * @return bool - true if the invite was successfully sent. false under the following conditions:\n\x09 * The Steam ID provided to steamIDFriend was invalid.\n\x09 * The Steam ID provided to steamIDFriend is not a friend or does not share the same Steam Group as the current user.\n\x09 * The value provided to pchConnectString was too long.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksFriendsSubsystem.h" },
		{ "ToolTip", "Invites a friend or clan member to the current game using a special invite string.\nIf the target user accepts the invite then the pchConnectString gets added to the command-line when launching the game.\nIf the game is already running for that user, then they will receive a GameRichPresenceJoinRequested_t callback with the connect string.\nTriggers a GameRichPresenceJoinRequested_t callback.\n\n@param FSteamID SteamIDFriend - The Steam ID of the friend to invite.\n@param const FString & ConnectString - A string that lets the friend know how to join the game (I.E. the game server IP). This can not be longer than specified in k_cchMaxRichPresenceValueLength.\n@return bool - true if the invite was successfully sent. false under the following conditions:\nThe Steam ID provided to steamIDFriend was invalid.\nThe Steam ID provided to steamIDFriend is not a friend or does not share the same Steam Group as the current user.\nThe value provided to pchConnectString was too long." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamworksFriendsSubsystem_InviteUserToGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamworksFriendsSubsystem, nullptr, "InviteUserToGame", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamworksFriendsSubsystem_InviteUserToGame_Statics::SteamworksFriendsSubsystem_eventInviteUserToGame_Parms), Z_Construct_UFunction_USteamworksFriendsSubsystem_InviteUserToGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksFriendsSubsystem_InviteUserToGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamworksFriendsSubsystem_InviteUserToGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksFriendsSubsystem_InviteUserToGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamworksFriendsSubsystem_InviteUserToGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamworksFriendsSubsystem_InviteUserToGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamworksFriendsSubsystem_IsUserInSource_Statics
	{
		struct SteamworksFriendsSubsystem_eventIsUserInSource_Parms
		{
			FUniqueNetIdRepl UserId;
			FUniqueNetIdRepl SourceId;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamworksFriendsSubsystem_IsUserInSource_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksFriendsSubsystem_eventIsUserInSource_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 3508419189
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamworksFriendsSubsystem_IsUserInSource_Statics::NewProp_SourceId = { "SourceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksFriendsSubsystem_eventIsUserInSource_Parms, SourceId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 3508419189
	void Z_Construct_UFunction_USteamworksFriendsSubsystem_IsUserInSource_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamworksFriendsSubsystem_eventIsUserInSource_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamworksFriendsSubsystem_IsUserInSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamworksFriendsSubsystem_eventIsUserInSource_Parms), &Z_Construct_UFunction_USteamworksFriendsSubsystem_IsUserInSource_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamworksFriendsSubsystem_IsUserInSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksFriendsSubsystem_IsUserInSource_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksFriendsSubsystem_IsUserInSource_Statics::NewProp_SourceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksFriendsSubsystem_IsUserInSource_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamworksFriendsSubsystem_IsUserInSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "Steamworks|Friends" },
		{ "Comment", "/**\n\x09 * Checks if a specified user is in a source (Steam group, chat room, lobby, or game server).\n\x09 *\n\x09 * @param FSteamID SteamIDUser - The user to check if they are in the source.\n\x09 * @param FSteamID SteamIDSource - \x09The source to check for the user.\n\x09 * @return bool - true if the local user can see that steamIDUser is a member or in steamIDSource; otherwise, false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksFriendsSubsystem.h" },
		{ "ToolTip", "Checks if a specified user is in a source (Steam group, chat room, lobby, or game server).\n\n@param FSteamID SteamIDUser - The user to check if they are in the source.\n@param FSteamID SteamIDSource -      The source to check for the user.\n@return bool - true if the local user can see that steamIDUser is a member or in steamIDSource; otherwise, false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamworksFriendsSubsystem_IsUserInSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamworksFriendsSubsystem, nullptr, "IsUserInSource", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamworksFriendsSubsystem_IsUserInSource_Statics::SteamworksFriendsSubsystem_eventIsUserInSource_Parms), Z_Construct_UFunction_USteamworksFriendsSubsystem_IsUserInSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksFriendsSubsystem_IsUserInSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamworksFriendsSubsystem_IsUserInSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksFriendsSubsystem_IsUserInSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamworksFriendsSubsystem_IsUserInSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamworksFriendsSubsystem_IsUserInSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamworksFriendsSubsystem_ReplyToFriendMessage_Statics
	{
		struct SteamworksFriendsSubsystem_eventReplyToFriendMessage_Parms
		{
			FUniqueNetIdRepl UserId;
			FString MsgToSend;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MsgToSend_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MsgToSend;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamworksFriendsSubsystem_ReplyToFriendMessage_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksFriendsSubsystem_eventReplyToFriendMessage_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 3508419189
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamworksFriendsSubsystem_ReplyToFriendMessage_Statics::NewProp_MsgToSend_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamworksFriendsSubsystem_ReplyToFriendMessage_Statics::NewProp_MsgToSend = { "MsgToSend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksFriendsSubsystem_eventReplyToFriendMessage_Parms, MsgToSend), METADATA_PARAMS(Z_Construct_UFunction_USteamworksFriendsSubsystem_ReplyToFriendMessage_Statics::NewProp_MsgToSend_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksFriendsSubsystem_ReplyToFriendMessage_Statics::NewProp_MsgToSend_MetaData)) };
	void Z_Construct_UFunction_USteamworksFriendsSubsystem_ReplyToFriendMessage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamworksFriendsSubsystem_eventReplyToFriendMessage_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamworksFriendsSubsystem_ReplyToFriendMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamworksFriendsSubsystem_eventReplyToFriendMessage_Parms), &Z_Construct_UFunction_USteamworksFriendsSubsystem_ReplyToFriendMessage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamworksFriendsSubsystem_ReplyToFriendMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksFriendsSubsystem_ReplyToFriendMessage_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksFriendsSubsystem_ReplyToFriendMessage_Statics::NewProp_MsgToSend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksFriendsSubsystem_ReplyToFriendMessage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamworksFriendsSubsystem_ReplyToFriendMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Steamworks|Friends" },
		{ "Comment", "/**\n\x09 * Sends a message to a Steam friend.\n\x09 *\n\x09 * @param FSteamID SteamIDFriend - The Steam ID of the friend to send the message to.\n\x09 * @param const FString & MsgToSend - The UTF-8 formatted message to send.\n\x09 * @return bool - true if the message was successfully sent. false if the current user is rate limited or chat restricte\n\x09 */" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksFriendsSubsystem.h" },
		{ "ToolTip", "Sends a message to a Steam friend.\n\n@param FSteamID SteamIDFriend - The Steam ID of the friend to send the message to.\n@param const FString & MsgToSend - The UTF-8 formatted message to send.\n@return bool - true if the message was successfully sent. false if the current user is rate limited or chat restricte" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamworksFriendsSubsystem_ReplyToFriendMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamworksFriendsSubsystem, nullptr, "ReplyToFriendMessage", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamworksFriendsSubsystem_ReplyToFriendMessage_Statics::SteamworksFriendsSubsystem_eventReplyToFriendMessage_Parms), Z_Construct_UFunction_USteamworksFriendsSubsystem_ReplyToFriendMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksFriendsSubsystem_ReplyToFriendMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamworksFriendsSubsystem_ReplyToFriendMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksFriendsSubsystem_ReplyToFriendMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamworksFriendsSubsystem_ReplyToFriendMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamworksFriendsSubsystem_ReplyToFriendMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamworksFriendsSubsystem_RequestUserInformation_Statics
	{
		struct SteamworksFriendsSubsystem_eventRequestUserInformation_Parms
		{
			FUniqueNetIdRepl UserId;
			bool bRequireNameOnly;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static void NewProp_bRequireNameOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequireNameOnly;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamworksFriendsSubsystem_RequestUserInformation_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksFriendsSubsystem_eventRequestUserInformation_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 3508419189
	void Z_Construct_UFunction_USteamworksFriendsSubsystem_RequestUserInformation_Statics::NewProp_bRequireNameOnly_SetBit(void* Obj)
	{
		((SteamworksFriendsSubsystem_eventRequestUserInformation_Parms*)Obj)->bRequireNameOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamworksFriendsSubsystem_RequestUserInformation_Statics::NewProp_bRequireNameOnly = { "bRequireNameOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamworksFriendsSubsystem_eventRequestUserInformation_Parms), &Z_Construct_UFunction_USteamworksFriendsSubsystem_RequestUserInformation_Statics::NewProp_bRequireNameOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamworksFriendsSubsystem_RequestUserInformation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamworksFriendsSubsystem_eventRequestUserInformation_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamworksFriendsSubsystem_RequestUserInformation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamworksFriendsSubsystem_eventRequestUserInformation_Parms), &Z_Construct_UFunction_USteamworksFriendsSubsystem_RequestUserInformation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamworksFriendsSubsystem_RequestUserInformation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksFriendsSubsystem_RequestUserInformation_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksFriendsSubsystem_RequestUserInformation_Statics::NewProp_bRequireNameOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksFriendsSubsystem_RequestUserInformation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamworksFriendsSubsystem_RequestUserInformation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Steamworks|Friends" },
		{ "Comment", "/**\n\x09 * Requests the persona name and optionally the avatar of a specified user.\n\x09 * It's a lot slower to download avatars and churns the local cache, so if you don't need avatars, don't request them.\n\x09 * Triggers a PersonaStateChange_t callback.\n\x09 *\n\x09 * @param FSteamID SteamIDUser - The user to request the information of.\n\x09 * @param bool bRequireNameOnly - Retrieve the Persona name only (true)? Or both the name and the avatar (false)?\n\x09 * @return bool - true means that the data has being requested, and a PersonaStateChange_t callback will be posted when it's retrieved.\n\x09 * false means that we already have all the details about that user, and functions that require this information can be used immediately.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksFriendsSubsystem.h" },
		{ "ToolTip", "Requests the persona name and optionally the avatar of a specified user.\nIt's a lot slower to download avatars and churns the local cache, so if you don't need avatars, don't request them.\nTriggers a PersonaStateChange_t callback.\n\n@param FSteamID SteamIDUser - The user to request the information of.\n@param bool bRequireNameOnly - Retrieve the Persona name only (true)? Or both the name and the avatar (false)?\n@return bool - true means that the data has being requested, and a PersonaStateChange_t callback will be posted when it's retrieved.\nfalse means that we already have all the details about that user, and functions that require this information can be used immediately." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamworksFriendsSubsystem_RequestUserInformation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamworksFriendsSubsystem, nullptr, "RequestUserInformation", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamworksFriendsSubsystem_RequestUserInformation_Statics::SteamworksFriendsSubsystem_eventRequestUserInformation_Parms), Z_Construct_UFunction_USteamworksFriendsSubsystem_RequestUserInformation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksFriendsSubsystem_RequestUserInformation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamworksFriendsSubsystem_RequestUserInformation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksFriendsSubsystem_RequestUserInformation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamworksFriendsSubsystem_RequestUserInformation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamworksFriendsSubsystem_RequestUserInformation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamworksFriendsSubsystem_SetInGameVoiceSpeaking_Statics
	{
		struct SteamworksFriendsSubsystem_eventSetInGameVoiceSpeaking_Parms
		{
			FUniqueNetIdRepl UserId;
			bool bSpeaking;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static void NewProp_bSpeaking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpeaking;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamworksFriendsSubsystem_SetInGameVoiceSpeaking_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksFriendsSubsystem_eventSetInGameVoiceSpeaking_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 3508419189
	void Z_Construct_UFunction_USteamworksFriendsSubsystem_SetInGameVoiceSpeaking_Statics::NewProp_bSpeaking_SetBit(void* Obj)
	{
		((SteamworksFriendsSubsystem_eventSetInGameVoiceSpeaking_Parms*)Obj)->bSpeaking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamworksFriendsSubsystem_SetInGameVoiceSpeaking_Statics::NewProp_bSpeaking = { "bSpeaking", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamworksFriendsSubsystem_eventSetInGameVoiceSpeaking_Parms), &Z_Construct_UFunction_USteamworksFriendsSubsystem_SetInGameVoiceSpeaking_Statics::NewProp_bSpeaking_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamworksFriendsSubsystem_SetInGameVoiceSpeaking_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksFriendsSubsystem_SetInGameVoiceSpeaking_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksFriendsSubsystem_SetInGameVoiceSpeaking_Statics::NewProp_bSpeaking,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamworksFriendsSubsystem_SetInGameVoiceSpeaking_Statics::Function_MetaDataParams[] = {
		{ "Category", "Steamworks|Friends" },
		{ "Comment", "/**\n\x09 * Let Steam know that the user is currently using voice chat in game.\n\x09 * This will suppress the microphone for all voice communication in the Steam UI.\n\x09 *\n\x09 * @param FSteamID SteamIDUser - Unused\n\x09 * @param bool bSpeaking - Did the user start speaking in game (true) or stopped speaking in game (false)?\n\x09 * @return void\n\x09 */" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksFriendsSubsystem.h" },
		{ "ToolTip", "Let Steam know that the user is currently using voice chat in game.\nThis will suppress the microphone for all voice communication in the Steam UI.\n\n@param FSteamID SteamIDUser - Unused\n@param bool bSpeaking - Did the user start speaking in game (true) or stopped speaking in game (false)?\n@return void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamworksFriendsSubsystem_SetInGameVoiceSpeaking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamworksFriendsSubsystem, nullptr, "SetInGameVoiceSpeaking", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamworksFriendsSubsystem_SetInGameVoiceSpeaking_Statics::SteamworksFriendsSubsystem_eventSetInGameVoiceSpeaking_Parms), Z_Construct_UFunction_USteamworksFriendsSubsystem_SetInGameVoiceSpeaking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksFriendsSubsystem_SetInGameVoiceSpeaking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamworksFriendsSubsystem_SetInGameVoiceSpeaking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksFriendsSubsystem_SetInGameVoiceSpeaking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamworksFriendsSubsystem_SetInGameVoiceSpeaking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamworksFriendsSubsystem_SetInGameVoiceSpeaking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamworksFriendsSubsystem_SetListenForFriendsMessages_Statics
	{
		struct SteamworksFriendsSubsystem_eventSetListenForFriendsMessages_Parms
		{
			bool bInterceptEnabled;
			bool ReturnValue;
		};
		static void NewProp_bInterceptEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterceptEnabled;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USteamworksFriendsSubsystem_SetListenForFriendsMessages_Statics::NewProp_bInterceptEnabled_SetBit(void* Obj)
	{
		((SteamworksFriendsSubsystem_eventSetListenForFriendsMessages_Parms*)Obj)->bInterceptEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamworksFriendsSubsystem_SetListenForFriendsMessages_Statics::NewProp_bInterceptEnabled = { "bInterceptEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamworksFriendsSubsystem_eventSetListenForFriendsMessages_Parms), &Z_Construct_UFunction_USteamworksFriendsSubsystem_SetListenForFriendsMessages_Statics::NewProp_bInterceptEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamworksFriendsSubsystem_SetListenForFriendsMessages_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamworksFriendsSubsystem_eventSetListenForFriendsMessages_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamworksFriendsSubsystem_SetListenForFriendsMessages_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamworksFriendsSubsystem_eventSetListenForFriendsMessages_Parms), &Z_Construct_UFunction_USteamworksFriendsSubsystem_SetListenForFriendsMessages_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamworksFriendsSubsystem_SetListenForFriendsMessages_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksFriendsSubsystem_SetListenForFriendsMessages_Statics::NewProp_bInterceptEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksFriendsSubsystem_SetListenForFriendsMessages_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamworksFriendsSubsystem_SetListenForFriendsMessages_Statics::Function_MetaDataParams[] = {
		{ "Category", "Steamworks|Friends" },
		{ "Comment", "/**\n\x09 * Listens for Steam friends chat messages.\n\x09 * You can then show these chats inline in the game. For example with a Blizzard style chat message system or the chat system in Dota 2.\n\x09 * After enabling this you will receive GameConnectedFriendChatMsg_t callbacks when ever the user receives a chat message. You can get the actual message data from this callback with GetFriendMessage. You can send messages with ReplyToFriendMessage.\n\x09 * Triggers a GameConnectedFriendChatMsg_t callback.\n\x09 *\n\x09 * @param bool bInterceptEnabled - \x09Turn friends message interception on (true) or off (false)?\n\x09 * @return bool - Always returns true\n\x09 */" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksFriendsSubsystem.h" },
		{ "ToolTip", "Listens for Steam friends chat messages.\nYou can then show these chats inline in the game. For example with a Blizzard style chat message system or the chat system in Dota 2.\nAfter enabling this you will receive GameConnectedFriendChatMsg_t callbacks when ever the user receives a chat message. You can get the actual message data from this callback with GetFriendMessage. You can send messages with ReplyToFriendMessage.\nTriggers a GameConnectedFriendChatMsg_t callback.\n\n@param bool bInterceptEnabled -      Turn friends message interception on (true) or off (false)?\n@return bool - Always returns true" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamworksFriendsSubsystem_SetListenForFriendsMessages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamworksFriendsSubsystem, nullptr, "SetListenForFriendsMessages", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamworksFriendsSubsystem_SetListenForFriendsMessages_Statics::SteamworksFriendsSubsystem_eventSetListenForFriendsMessages_Parms), Z_Construct_UFunction_USteamworksFriendsSubsystem_SetListenForFriendsMessages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksFriendsSubsystem_SetListenForFriendsMessages_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamworksFriendsSubsystem_SetListenForFriendsMessages_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksFriendsSubsystem_SetListenForFriendsMessages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamworksFriendsSubsystem_SetListenForFriendsMessages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamworksFriendsSubsystem_SetListenForFriendsMessages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamworksFriendsSubsystem_SetPlayedWith_Statics
	{
		struct SteamworksFriendsSubsystem_eventSetPlayedWith_Parms
		{
			FUniqueNetIdRepl UserIdPlayedWith;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserIdPlayedWith;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamworksFriendsSubsystem_SetPlayedWith_Statics::NewProp_UserIdPlayedWith = { "UserIdPlayedWith", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksFriendsSubsystem_eventSetPlayedWith_Parms, UserIdPlayedWith), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 3508419189
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamworksFriendsSubsystem_SetPlayedWith_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksFriendsSubsystem_SetPlayedWith_Statics::NewProp_UserIdPlayedWith,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamworksFriendsSubsystem_SetPlayedWith_Statics::Function_MetaDataParams[] = {
		{ "Category", "Steamworks|Friends" },
		{ "Comment", "/**\n\x09 * Mark a target user as 'played with'.\n\x09 * The current user must be in game with the other player for the association to work.\n\x09 *\n\x09 * @param FSteamID SteamIDUserPlayedWith - The other user that we have played with.\n\x09 * @return void\n\x09 */" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksFriendsSubsystem.h" },
		{ "ToolTip", "Mark a target user as 'played with'.\nThe current user must be in game with the other player for the association to work.\n\n@param FSteamID SteamIDUserPlayedWith - The other user that we have played with.\n@return void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamworksFriendsSubsystem_SetPlayedWith_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamworksFriendsSubsystem, nullptr, "SetPlayedWith", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamworksFriendsSubsystem_SetPlayedWith_Statics::SteamworksFriendsSubsystem_eventSetPlayedWith_Parms), Z_Construct_UFunction_USteamworksFriendsSubsystem_SetPlayedWith_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksFriendsSubsystem_SetPlayedWith_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamworksFriendsSubsystem_SetPlayedWith_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksFriendsSubsystem_SetPlayedWith_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamworksFriendsSubsystem_SetPlayedWith()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamworksFriendsSubsystem_SetPlayedWith_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamworksFriendsSubsystem);
	UClass* Z_Construct_UClass_USteamworksFriendsSubsystem_NoRegister()
	{
		return USteamworksFriendsSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_USteamworksFriendsSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnGameOverlayActivated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnGameOverlayActivated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnPersonaStateChange_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnPersonaStateChange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnFriendRichPresenceUpdate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnFriendRichPresenceUpdate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnGameConnectedFriendChatMsg_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnGameConnectedFriendChatMsg;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnGameLobbyJoinRequested_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnGameLobbyJoinRequested;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnGameRichPresenceJoinRequested_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnGameRichPresenceJoinRequested;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnGameServerChangeRequested_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnGameServerChangeRequested;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamworksFriendsSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamworksExtension,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamworksFriendsSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlay, "ActivateGameOverlay" }, // 114885578
		{ &Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlayInviteDialog, "ActivateGameOverlayInviteDialog" }, // 1458530815
		{ &Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlayToStore, "ActivateGameOverlayToStore" }, // 2072138923
		{ &Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlayToUser, "ActivateGameOverlayToUser" }, // 3745768923
		{ &Z_Construct_UFunction_USteamworksFriendsSubsystem_ActivateGameOverlayToWebPage, "ActivateGameOverlayToWebPage" }, // 747260097
		{ &Z_Construct_UFunction_USteamworksFriendsSubsystem_ClearRichPresence, "ClearRichPresence" }, // 2570279574
		{ &Z_Construct_UFunction_USteamworksFriendsSubsystem_GetAvatarImage, "GetAvatarImage" }, // 4125876519
		{ &Z_Construct_UFunction_USteamworksFriendsSubsystem_GetCoplayFriend, "GetCoplayFriend" }, // 1530161886
		{ &Z_Construct_UFunction_USteamworksFriendsSubsystem_GetCoplayFriendCount, "GetCoplayFriendCount" }, // 1746328955
		{ &Z_Construct_UFunction_USteamworksFriendsSubsystem_GetFriendCoplayGame, "GetFriendCoplayGame" }, // 2782979488
		{ &Z_Construct_UFunction_USteamworksFriendsSubsystem_GetFriendCoplayTime, "GetFriendCoplayTime" }, // 1901956166
		{ &Z_Construct_UFunction_USteamworksFriendsSubsystem_GetFriendMessage, "GetFriendMessage" }, // 493397922
		{ &Z_Construct_UFunction_USteamworksFriendsSubsystem_InviteUserToGame, "InviteUserToGame" }, // 550538947
		{ &Z_Construct_UFunction_USteamworksFriendsSubsystem_IsUserInSource, "IsUserInSource" }, // 1449390417
		{ &Z_Construct_UFunction_USteamworksFriendsSubsystem_ReplyToFriendMessage, "ReplyToFriendMessage" }, // 1308272055
		{ &Z_Construct_UFunction_USteamworksFriendsSubsystem_RequestUserInformation, "RequestUserInformation" }, // 1344114807
		{ &Z_Construct_UFunction_USteamworksFriendsSubsystem_SetInGameVoiceSpeaking, "SetInGameVoiceSpeaking" }, // 112786134
		{ &Z_Construct_UFunction_USteamworksFriendsSubsystem_SetListenForFriendsMessages, "SetListenForFriendsMessages" }, // 170266485
		{ &Z_Construct_UFunction_USteamworksFriendsSubsystem_SetPlayedWith, "SetPlayedWith" }, // 1817556985
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamworksFriendsSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Subsystems/SteamworksFriendsSubsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksFriendsSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamworksFriendsSubsystem_Statics::NewProp_m_OnGameOverlayActivated_MetaData[] = {
		{ "Category", "Steamworks|Friends|Delegates" },
		{ "Comment", "/** Posted when the Steam Overlay activates or deactivates. The game can use this to be pause or resume single player games. */" },
		{ "DisplayName", "OnGameOverlayActivated" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksFriendsSubsystem.h" },
		{ "ToolTip", "Posted when the Steam Overlay activates or deactivates. The game can use this to be pause or resume single player games." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamworksFriendsSubsystem_Statics::NewProp_m_OnGameOverlayActivated = { "m_OnGameOverlayActivated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamworksFriendsSubsystem, m_OnGameOverlayActivated), Z_Construct_UDelegateFunction_SteamworksExtension_OnGameOverlayActivatedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamworksFriendsSubsystem_Statics::NewProp_m_OnGameOverlayActivated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamworksFriendsSubsystem_Statics::NewProp_m_OnGameOverlayActivated_MetaData)) }; // 2340864309
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamworksFriendsSubsystem_Statics::NewProp_m_OnPersonaStateChange_MetaData[] = {
		{ "Category", "Steamworks|Friends|Delegates" },
		{ "Comment", "/** Called whenever a friends' status changes. */" },
		{ "DisplayName", "OnPersonaStateChange" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksFriendsSubsystem.h" },
		{ "ToolTip", "Called whenever a friends' status changes." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamworksFriendsSubsystem_Statics::NewProp_m_OnPersonaStateChange = { "m_OnPersonaStateChange", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamworksFriendsSubsystem, m_OnPersonaStateChange), Z_Construct_UDelegateFunction_SteamworksExtension_OnPersonaStateChangeDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamworksFriendsSubsystem_Statics::NewProp_m_OnPersonaStateChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamworksFriendsSubsystem_Statics::NewProp_m_OnPersonaStateChange_MetaData)) }; // 2684983722
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamworksFriendsSubsystem_Statics::NewProp_m_OnFriendRichPresenceUpdate_MetaData[] = {
		{ "Category", "Steamworks|Friends|Delegates" },
		{ "Comment", "/** Called when Rich Presence data has been updated for a user, this can happen automatically when friends in the same game update their rich presence, or after a call to RequestFriendRichPresence. */" },
		{ "DisplayName", "OnFriendRichPresenceUpdate" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksFriendsSubsystem.h" },
		{ "ToolTip", "Called when Rich Presence data has been updated for a user, this can happen automatically when friends in the same game update their rich presence, or after a call to RequestFriendRichPresence." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamworksFriendsSubsystem_Statics::NewProp_m_OnFriendRichPresenceUpdate = { "m_OnFriendRichPresenceUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamworksFriendsSubsystem, m_OnFriendRichPresenceUpdate), Z_Construct_UDelegateFunction_SteamworksExtension_OnFriendRichPresenceUpdateDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamworksFriendsSubsystem_Statics::NewProp_m_OnFriendRichPresenceUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamworksFriendsSubsystem_Statics::NewProp_m_OnFriendRichPresenceUpdate_MetaData)) }; // 2118743100
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamworksFriendsSubsystem_Statics::NewProp_m_OnGameConnectedFriendChatMsg_MetaData[] = {
		{ "Category", "Steamworks|Friends|Delegates" },
		{ "Comment", "/** Called when chat message has been received from a friend. */" },
		{ "DisplayName", "OnGameConnectedFriendChatMsg" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksFriendsSubsystem.h" },
		{ "ToolTip", "Called when chat message has been received from a friend." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamworksFriendsSubsystem_Statics::NewProp_m_OnGameConnectedFriendChatMsg = { "m_OnGameConnectedFriendChatMsg", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamworksFriendsSubsystem, m_OnGameConnectedFriendChatMsg), Z_Construct_UDelegateFunction_SteamworksExtension_OnGameConnectedFriendChatMsgDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamworksFriendsSubsystem_Statics::NewProp_m_OnGameConnectedFriendChatMsg_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamworksFriendsSubsystem_Statics::NewProp_m_OnGameConnectedFriendChatMsg_MetaData)) }; // 1186726035
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamworksFriendsSubsystem_Statics::NewProp_m_OnGameLobbyJoinRequested_MetaData[] = {
		{ "Category", "Steamworks|Friends|Delegates" },
		{ "Comment", "/**\n\x09 * Called when the user tries to join a lobby from their friends list or from an invite. The game client should attempt to connect to specified lobby when this is received.\n\x09 * If the game isn't running yet then the game will be automatically launched with the command line parameter +connect_lobby <64-bit lobby Steam ID> instead.\n\x09 * NOTE: This callback is made when joining a lobby. If the user is attempting to join a game but not a lobby, then the callback GameRichPresenceJoinRequested_t will be made.\n\x09 */" },
		{ "DisplayName", "OnGameLobbyJoinRequested" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksFriendsSubsystem.h" },
		{ "ToolTip", "Called when the user tries to join a lobby from their friends list or from an invite. The game client should attempt to connect to specified lobby when this is received.\nIf the game isn't running yet then the game will be automatically launched with the command line parameter +connect_lobby <64-bit lobby Steam ID> instead.\nNOTE: This callback is made when joining a lobby. If the user is attempting to join a game but not a lobby, then the callback GameRichPresenceJoinRequested_t will be made." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamworksFriendsSubsystem_Statics::NewProp_m_OnGameLobbyJoinRequested = { "m_OnGameLobbyJoinRequested", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamworksFriendsSubsystem, m_OnGameLobbyJoinRequested), Z_Construct_UDelegateFunction_SteamworksExtension_OnGameLobbyJoinRequestedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamworksFriendsSubsystem_Statics::NewProp_m_OnGameLobbyJoinRequested_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamworksFriendsSubsystem_Statics::NewProp_m_OnGameLobbyJoinRequested_MetaData)) }; // 3964398063
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamworksFriendsSubsystem_Statics::NewProp_m_OnGameRichPresenceJoinRequested_MetaData[] = {
		{ "Category", "Steamworks|Friends|Delegates" },
		{ "Comment", "/**\n\x09 * Called when the user tries to join a game from their friends list or after a user accepts an invite by a friend with InviteUserToGame.\n\x09 * NOTE: This callback is made when joining a game. If the user is attempting to join a lobby, then the callback GameLobbyJoinRequested_t will be made.\n\x09 */" },
		{ "DisplayName", "OnGameRichPresenceJoinRequested" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksFriendsSubsystem.h" },
		{ "ToolTip", "Called when the user tries to join a game from their friends list or after a user accepts an invite by a friend with InviteUserToGame.\nNOTE: This callback is made when joining a game. If the user is attempting to join a lobby, then the callback GameLobbyJoinRequested_t will be made." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamworksFriendsSubsystem_Statics::NewProp_m_OnGameRichPresenceJoinRequested = { "m_OnGameRichPresenceJoinRequested", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamworksFriendsSubsystem, m_OnGameRichPresenceJoinRequested), Z_Construct_UDelegateFunction_SteamworksExtension_OnGameRichPresenceJoinRequestedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamworksFriendsSubsystem_Statics::NewProp_m_OnGameRichPresenceJoinRequested_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamworksFriendsSubsystem_Statics::NewProp_m_OnGameRichPresenceJoinRequested_MetaData)) }; // 1156774222
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamworksFriendsSubsystem_Statics::NewProp_m_OnGameServerChangeRequested_MetaData[] = {
		{ "Category", "Steamworks|Friends|Delegates" },
		{ "Comment", "/** Called when the user tries to join a different game server from their friends list. The game client should attempt to connect to specified server when this is received. */" },
		{ "DisplayName", "OnGameServerChangeRequested" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksFriendsSubsystem.h" },
		{ "ToolTip", "Called when the user tries to join a different game server from their friends list. The game client should attempt to connect to specified server when this is received." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamworksFriendsSubsystem_Statics::NewProp_m_OnGameServerChangeRequested = { "m_OnGameServerChangeRequested", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamworksFriendsSubsystem, m_OnGameServerChangeRequested), Z_Construct_UDelegateFunction_SteamworksExtension_OnGameServerChangeRequestedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamworksFriendsSubsystem_Statics::NewProp_m_OnGameServerChangeRequested_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamworksFriendsSubsystem_Statics::NewProp_m_OnGameServerChangeRequested_MetaData)) }; // 517499941
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamworksFriendsSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamworksFriendsSubsystem_Statics::NewProp_m_OnGameOverlayActivated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamworksFriendsSubsystem_Statics::NewProp_m_OnPersonaStateChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamworksFriendsSubsystem_Statics::NewProp_m_OnFriendRichPresenceUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamworksFriendsSubsystem_Statics::NewProp_m_OnGameConnectedFriendChatMsg,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamworksFriendsSubsystem_Statics::NewProp_m_OnGameLobbyJoinRequested,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamworksFriendsSubsystem_Statics::NewProp_m_OnGameRichPresenceJoinRequested,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamworksFriendsSubsystem_Statics::NewProp_m_OnGameServerChangeRequested,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamworksFriendsSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamworksFriendsSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamworksFriendsSubsystem_Statics::ClassParams = {
		&USteamworksFriendsSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USteamworksFriendsSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USteamworksFriendsSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamworksFriendsSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamworksFriendsSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamworksFriendsSubsystem()
	{
		if (!Z_Registration_Info_UClass_USteamworksFriendsSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamworksFriendsSubsystem.OuterSingleton, Z_Construct_UClass_USteamworksFriendsSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamworksFriendsSubsystem.OuterSingleton;
	}
	template<> STEAMWORKSEXTENSION_API UClass* StaticClass<USteamworksFriendsSubsystem>()
	{
		return USteamworksFriendsSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamworksFriendsSubsystem);
	struct Z_CompiledInDeferFile_FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksFriendsSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksFriendsSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USteamworksFriendsSubsystem, USteamworksFriendsSubsystem::StaticClass, TEXT("USteamworksFriendsSubsystem"), &Z_Registration_Info_UClass_USteamworksFriendsSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamworksFriendsSubsystem), 2954525694U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksFriendsSubsystem_h_3716763027(TEXT("/Script/SteamworksExtension"),
		Z_CompiledInDeferFile_FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksFriendsSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksFriendsSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
