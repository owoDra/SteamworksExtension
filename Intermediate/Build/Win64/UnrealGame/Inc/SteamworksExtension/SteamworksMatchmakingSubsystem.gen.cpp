// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamworksExtension/Public/Subsystems/SteamworksMatchmakingSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamworksMatchmakingSubsystem() {}
// Cross Module References
	STEAMWORKSEXTENSION_API UFunction* Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyChatMsgDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SteamworksExtension();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	STEAMWORKSEXTENSION_API UEnum* Z_Construct_UEnum_SteamworksExtension_ESteamChatEntryType();
	STEAMWORKSEXTENSION_API UFunction* Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyChatUpdateDelegate__DelegateSignature();
	STEAMWORKSEXTENSION_API UEnum* Z_Construct_UEnum_SteamworksExtension_ESteamChatMemberStateChange();
	STEAMWORKSEXTENSION_API UFunction* Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyCreatedDelegate__DelegateSignature();
	STEAMWORKSEXTENSION_API UEnum* Z_Construct_UEnum_SteamworksExtension_ESteamResult();
	STEAMWORKSEXTENSION_API UFunction* Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyDataUpdateDelegate__DelegateSignature();
	STEAMWORKSEXTENSION_API UFunction* Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyEnterDelegate__DelegateSignature();
	STEAMWORKSEXTENSION_API UEnum* Z_Construct_UEnum_SteamworksExtension_ESteamChatRoomEnterResponse();
	STEAMWORKSEXTENSION_API UFunction* Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyGameCreatedDelegate__DelegateSignature();
	STEAMWORKSEXTENSION_API UClass* Z_Construct_UClass_USteamworksMatchmakingSubsystem_NoRegister();
	STEAMWORKSEXTENSION_API UClass* Z_Construct_UClass_USteamworksMatchmakingSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyChatMsgDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamworksExtension_eventOnLobbyChatMsgDelegate_Parms
		{
			FUniqueNetIdRepl LobbyId;
			FUniqueNetIdRepl UserId;
			ESteamChatEntryType ChatEntryType;
			int32 ChatID;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ChatEntryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ChatEntryType;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ChatID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyChatMsgDelegate__DelegateSignature_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamworksExtension_eventOnLobbyChatMsgDelegate_Parms, LobbyId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 3508419189
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyChatMsgDelegate__DelegateSignature_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamworksExtension_eventOnLobbyChatMsgDelegate_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 3508419189
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyChatMsgDelegate__DelegateSignature_Statics::NewProp_ChatEntryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyChatMsgDelegate__DelegateSignature_Statics::NewProp_ChatEntryType = { "ChatEntryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamworksExtension_eventOnLobbyChatMsgDelegate_Parms, ChatEntryType), Z_Construct_UEnum_SteamworksExtension_ESteamChatEntryType, METADATA_PARAMS(nullptr, 0) }; // 1289089358
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyChatMsgDelegate__DelegateSignature_Statics::NewProp_ChatID = { "ChatID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamworksExtension_eventOnLobbyChatMsgDelegate_Parms, ChatID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyChatMsgDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyChatMsgDelegate__DelegateSignature_Statics::NewProp_LobbyId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyChatMsgDelegate__DelegateSignature_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyChatMsgDelegate__DelegateSignature_Statics::NewProp_ChatEntryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyChatMsgDelegate__DelegateSignature_Statics::NewProp_ChatEntryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyChatMsgDelegate__DelegateSignature_Statics::NewProp_ChatID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyChatMsgDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ================================================\n//   Steamworks Matchmaking Extension Subsystem\n// ================================================\n" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksMatchmakingSubsystem.h" },
		{ "ToolTip", "Steamworks Matchmaking Extension Subsystem" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyChatMsgDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamworksExtension, nullptr, "OnLobbyChatMsgDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyChatMsgDelegate__DelegateSignature_Statics::_Script_SteamworksExtension_eventOnLobbyChatMsgDelegate_Parms), Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyChatMsgDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyChatMsgDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyChatMsgDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyChatMsgDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyChatMsgDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyChatMsgDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyChatUpdateDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamworksExtension_eventOnLobbyChatUpdateDelegate_Parms
		{
			FUniqueNetIdRepl LobbyId;
			FUniqueNetIdRepl UserIdChanged;
			FUniqueNetIdRepl UserIdMakingChange;
			TArray<ESteamChatMemberStateChange> ChatMemberStateChange;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserIdChanged;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserIdMakingChange;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ChatMemberStateChange_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ChatMemberStateChange_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ChatMemberStateChange;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyChatUpdateDelegate__DelegateSignature_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamworksExtension_eventOnLobbyChatUpdateDelegate_Parms, LobbyId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 3508419189
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyChatUpdateDelegate__DelegateSignature_Statics::NewProp_UserIdChanged = { "UserIdChanged", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamworksExtension_eventOnLobbyChatUpdateDelegate_Parms, UserIdChanged), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 3508419189
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyChatUpdateDelegate__DelegateSignature_Statics::NewProp_UserIdMakingChange = { "UserIdMakingChange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamworksExtension_eventOnLobbyChatUpdateDelegate_Parms, UserIdMakingChange), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 3508419189
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyChatUpdateDelegate__DelegateSignature_Statics::NewProp_ChatMemberStateChange_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyChatUpdateDelegate__DelegateSignature_Statics::NewProp_ChatMemberStateChange_Inner = { "ChatMemberStateChange", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_SteamworksExtension_ESteamChatMemberStateChange, METADATA_PARAMS(nullptr, 0) }; // 327951423
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyChatUpdateDelegate__DelegateSignature_Statics::NewProp_ChatMemberStateChange = { "ChatMemberStateChange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamworksExtension_eventOnLobbyChatUpdateDelegate_Parms, ChatMemberStateChange), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 327951423
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyChatUpdateDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyChatUpdateDelegate__DelegateSignature_Statics::NewProp_LobbyId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyChatUpdateDelegate__DelegateSignature_Statics::NewProp_UserIdChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyChatUpdateDelegate__DelegateSignature_Statics::NewProp_UserIdMakingChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyChatUpdateDelegate__DelegateSignature_Statics::NewProp_ChatMemberStateChange_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyChatUpdateDelegate__DelegateSignature_Statics::NewProp_ChatMemberStateChange_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyChatUpdateDelegate__DelegateSignature_Statics::NewProp_ChatMemberStateChange,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyChatUpdateDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksMatchmakingSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyChatUpdateDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamworksExtension, nullptr, "OnLobbyChatUpdateDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyChatUpdateDelegate__DelegateSignature_Statics::_Script_SteamworksExtension_eventOnLobbyChatUpdateDelegate_Parms), Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyChatUpdateDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyChatUpdateDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyChatUpdateDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyChatUpdateDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyChatUpdateDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyChatUpdateDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyCreatedDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamworksExtension_eventOnLobbyCreatedDelegate_Parms
		{
			ESteamResult Result;
			FUniqueNetIdRepl LobbyId;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyCreatedDelegate__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyCreatedDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamworksExtension_eventOnLobbyCreatedDelegate_Parms, Result), Z_Construct_UEnum_SteamworksExtension_ESteamResult, METADATA_PARAMS(nullptr, 0) }; // 2208837127
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyCreatedDelegate__DelegateSignature_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamworksExtension_eventOnLobbyCreatedDelegate_Parms, LobbyId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 3508419189
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyCreatedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyCreatedDelegate__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyCreatedDelegate__DelegateSignature_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyCreatedDelegate__DelegateSignature_Statics::NewProp_LobbyId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyCreatedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksMatchmakingSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyCreatedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamworksExtension, nullptr, "OnLobbyCreatedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyCreatedDelegate__DelegateSignature_Statics::_Script_SteamworksExtension_eventOnLobbyCreatedDelegate_Parms), Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyCreatedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyCreatedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyCreatedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyCreatedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyCreatedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyCreatedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyDataUpdateDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamworksExtension_eventOnLobbyDataUpdateDelegate_Parms
		{
			FUniqueNetIdRepl LobbyId;
			FUniqueNetIdRepl MemberId;
			bool bSuccess;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MemberId;
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyDataUpdateDelegate__DelegateSignature_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamworksExtension_eventOnLobbyDataUpdateDelegate_Parms, LobbyId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 3508419189
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyDataUpdateDelegate__DelegateSignature_Statics::NewProp_MemberId = { "MemberId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamworksExtension_eventOnLobbyDataUpdateDelegate_Parms, MemberId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 3508419189
	void Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyDataUpdateDelegate__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((_Script_SteamworksExtension_eventOnLobbyDataUpdateDelegate_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyDataUpdateDelegate__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_SteamworksExtension_eventOnLobbyDataUpdateDelegate_Parms), &Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyDataUpdateDelegate__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyDataUpdateDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyDataUpdateDelegate__DelegateSignature_Statics::NewProp_LobbyId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyDataUpdateDelegate__DelegateSignature_Statics::NewProp_MemberId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyDataUpdateDelegate__DelegateSignature_Statics::NewProp_bSuccess,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyDataUpdateDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksMatchmakingSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyDataUpdateDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamworksExtension, nullptr, "OnLobbyDataUpdateDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyDataUpdateDelegate__DelegateSignature_Statics::_Script_SteamworksExtension_eventOnLobbyDataUpdateDelegate_Parms), Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyDataUpdateDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyDataUpdateDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyDataUpdateDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyDataUpdateDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyDataUpdateDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyDataUpdateDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyEnterDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamworksExtension_eventOnLobbyEnterDelegate_Parms
		{
			FUniqueNetIdRepl LobbyId;
			bool bLocked;
			ESteamChatRoomEnterResponse ChatRoomEnterResponse;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyId;
		static void NewProp_bLocked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLocked;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ChatRoomEnterResponse_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ChatRoomEnterResponse;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyEnterDelegate__DelegateSignature_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamworksExtension_eventOnLobbyEnterDelegate_Parms, LobbyId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 3508419189
	void Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyEnterDelegate__DelegateSignature_Statics::NewProp_bLocked_SetBit(void* Obj)
	{
		((_Script_SteamworksExtension_eventOnLobbyEnterDelegate_Parms*)Obj)->bLocked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyEnterDelegate__DelegateSignature_Statics::NewProp_bLocked = { "bLocked", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_SteamworksExtension_eventOnLobbyEnterDelegate_Parms), &Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyEnterDelegate__DelegateSignature_Statics::NewProp_bLocked_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyEnterDelegate__DelegateSignature_Statics::NewProp_ChatRoomEnterResponse_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyEnterDelegate__DelegateSignature_Statics::NewProp_ChatRoomEnterResponse = { "ChatRoomEnterResponse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamworksExtension_eventOnLobbyEnterDelegate_Parms, ChatRoomEnterResponse), Z_Construct_UEnum_SteamworksExtension_ESteamChatRoomEnterResponse, METADATA_PARAMS(nullptr, 0) }; // 935669390
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyEnterDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyEnterDelegate__DelegateSignature_Statics::NewProp_LobbyId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyEnterDelegate__DelegateSignature_Statics::NewProp_bLocked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyEnterDelegate__DelegateSignature_Statics::NewProp_ChatRoomEnterResponse_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyEnterDelegate__DelegateSignature_Statics::NewProp_ChatRoomEnterResponse,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyEnterDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksMatchmakingSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyEnterDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamworksExtension, nullptr, "OnLobbyEnterDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyEnterDelegate__DelegateSignature_Statics::_Script_SteamworksExtension_eventOnLobbyEnterDelegate_Parms), Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyEnterDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyEnterDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyEnterDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyEnterDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyEnterDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyEnterDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyGameCreatedDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamworksExtension_eventOnLobbyGameCreatedDelegate_Parms
		{
			FUniqueNetIdRepl LobbyId;
			FUniqueNetIdRepl ServerId;
			FString IP;
			int32 Port;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ServerId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_IP;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Port;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyGameCreatedDelegate__DelegateSignature_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamworksExtension_eventOnLobbyGameCreatedDelegate_Parms, LobbyId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 3508419189
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyGameCreatedDelegate__DelegateSignature_Statics::NewProp_ServerId = { "ServerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamworksExtension_eventOnLobbyGameCreatedDelegate_Parms, ServerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 3508419189
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyGameCreatedDelegate__DelegateSignature_Statics::NewProp_IP = { "IP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamworksExtension_eventOnLobbyGameCreatedDelegate_Parms, IP), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyGameCreatedDelegate__DelegateSignature_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamworksExtension_eventOnLobbyGameCreatedDelegate_Parms, Port), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyGameCreatedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyGameCreatedDelegate__DelegateSignature_Statics::NewProp_LobbyId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyGameCreatedDelegate__DelegateSignature_Statics::NewProp_ServerId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyGameCreatedDelegate__DelegateSignature_Statics::NewProp_IP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyGameCreatedDelegate__DelegateSignature_Statics::NewProp_Port,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyGameCreatedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksMatchmakingSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyGameCreatedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamworksExtension, nullptr, "OnLobbyGameCreatedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyGameCreatedDelegate__DelegateSignature_Statics::_Script_SteamworksExtension_eventOnLobbyGameCreatedDelegate_Parms), Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyGameCreatedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyGameCreatedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyGameCreatedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyGameCreatedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyGameCreatedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyGameCreatedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(USteamworksMatchmakingSubsystem::execGetLobbyOwner)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_LobbyId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FUniqueNetIdRepl*)Z_Param__Result=P_THIS->GetLobbyOwner(Z_Param_LobbyId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamworksMatchmakingSubsystem::execSetLobbyOwner)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_LobbyId);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UserId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetLobbyOwner(Z_Param_LobbyId,Z_Param_UserId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamworksMatchmakingSubsystem::execGetLobbyGameServer)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_LobbyId);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_GameServerIP);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_GameServerPort);
		P_GET_STRUCT_REF(FUniqueNetIdRepl,Z_Param_Out_ServerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetLobbyGameServer(Z_Param_LobbyId,Z_Param_Out_GameServerIP,Z_Param_Out_GameServerPort,Z_Param_Out_ServerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamworksMatchmakingSubsystem::execSetLobbyGameServer)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_LobbyId);
		P_GET_PROPERTY(FStrProperty,Z_Param_GameServerIP);
		P_GET_PROPERTY(FIntProperty,Z_Param_GameServerPort);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_ServerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLobbyGameServer(Z_Param_LobbyId,Z_Param_GameServerIP,Z_Param_GameServerPort,Z_Param_ServerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamworksMatchmakingSubsystem::execSendLobbyChatMsg)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_LobbyId);
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SendLobbyChatMsg(Z_Param_LobbyId,Z_Param_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamworksMatchmakingSubsystem::execGetLobbyChatEntry)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_LobbyId);
		P_GET_PROPERTY(FIntProperty,Z_Param_ChatID);
		P_GET_STRUCT_REF(FUniqueNetIdRepl,Z_Param_Out_UserId);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Message);
		P_GET_ENUM_REF(ESteamChatEntryType,Z_Param_Out_ChatEntryType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetLobbyChatEntry(Z_Param_LobbyId,Z_Param_ChatID,Z_Param_Out_UserId,Z_Param_Out_Message,(ESteamChatEntryType&)(Z_Param_Out_ChatEntryType));
		P_NATIVE_END;
	}
	void USteamworksMatchmakingSubsystem::StaticRegisterNativesUSteamworksMatchmakingSubsystem()
	{
		UClass* Class = USteamworksMatchmakingSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLobbyChatEntry", &USteamworksMatchmakingSubsystem::execGetLobbyChatEntry },
			{ "GetLobbyGameServer", &USteamworksMatchmakingSubsystem::execGetLobbyGameServer },
			{ "GetLobbyOwner", &USteamworksMatchmakingSubsystem::execGetLobbyOwner },
			{ "SendLobbyChatMsg", &USteamworksMatchmakingSubsystem::execSendLobbyChatMsg },
			{ "SetLobbyGameServer", &USteamworksMatchmakingSubsystem::execSetLobbyGameServer },
			{ "SetLobbyOwner", &USteamworksMatchmakingSubsystem::execSetLobbyOwner },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamworksMatchmakingSubsystem_GetLobbyChatEntry_Statics
	{
		struct SteamworksMatchmakingSubsystem_eventGetLobbyChatEntry_Parms
		{
			FUniqueNetIdRepl LobbyId;
			int32 ChatID;
			FUniqueNetIdRepl UserId;
			FString Message;
			ESteamChatEntryType ChatEntryType;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ChatID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamworksMatchmakingSubsystem_GetLobbyChatEntry_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksMatchmakingSubsystem_eventGetLobbyChatEntry_Parms, LobbyId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 3508419189
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamworksMatchmakingSubsystem_GetLobbyChatEntry_Statics::NewProp_ChatID = { "ChatID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksMatchmakingSubsystem_eventGetLobbyChatEntry_Parms, ChatID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamworksMatchmakingSubsystem_GetLobbyChatEntry_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksMatchmakingSubsystem_eventGetLobbyChatEntry_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 3508419189
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamworksMatchmakingSubsystem_GetLobbyChatEntry_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksMatchmakingSubsystem_eventGetLobbyChatEntry_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamworksMatchmakingSubsystem_GetLobbyChatEntry_Statics::NewProp_ChatEntryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamworksMatchmakingSubsystem_GetLobbyChatEntry_Statics::NewProp_ChatEntryType = { "ChatEntryType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksMatchmakingSubsystem_eventGetLobbyChatEntry_Parms, ChatEntryType), Z_Construct_UEnum_SteamworksExtension_ESteamChatEntryType, METADATA_PARAMS(nullptr, 0) }; // 1289089358
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamworksMatchmakingSubsystem_GetLobbyChatEntry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksMatchmakingSubsystem_eventGetLobbyChatEntry_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamworksMatchmakingSubsystem_GetLobbyChatEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksMatchmakingSubsystem_GetLobbyChatEntry_Statics::NewProp_LobbyId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksMatchmakingSubsystem_GetLobbyChatEntry_Statics::NewProp_ChatID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksMatchmakingSubsystem_GetLobbyChatEntry_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksMatchmakingSubsystem_GetLobbyChatEntry_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksMatchmakingSubsystem_GetLobbyChatEntry_Statics::NewProp_ChatEntryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksMatchmakingSubsystem_GetLobbyChatEntry_Statics::NewProp_ChatEntryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksMatchmakingSubsystem_GetLobbyChatEntry_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamworksMatchmakingSubsystem_GetLobbyChatEntry_Statics::Function_MetaDataParams[] = {
		{ "Category", "Steamworks|Matchmaking" },
		{ "Comment", "// ===== Communicate =====\n" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksMatchmakingSubsystem.h" },
		{ "ToolTip", "===== Communicate =====" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamworksMatchmakingSubsystem_GetLobbyChatEntry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamworksMatchmakingSubsystem, nullptr, "GetLobbyChatEntry", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamworksMatchmakingSubsystem_GetLobbyChatEntry_Statics::SteamworksMatchmakingSubsystem_eventGetLobbyChatEntry_Parms), Z_Construct_UFunction_USteamworksMatchmakingSubsystem_GetLobbyChatEntry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksMatchmakingSubsystem_GetLobbyChatEntry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamworksMatchmakingSubsystem_GetLobbyChatEntry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksMatchmakingSubsystem_GetLobbyChatEntry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamworksMatchmakingSubsystem_GetLobbyChatEntry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamworksMatchmakingSubsystem_GetLobbyChatEntry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamworksMatchmakingSubsystem_GetLobbyGameServer_Statics
	{
		struct SteamworksMatchmakingSubsystem_eventGetLobbyGameServer_Parms
		{
			FUniqueNetIdRepl LobbyId;
			FString GameServerIP;
			int32 GameServerPort;
			FUniqueNetIdRepl ServerId;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_GameServerIP;
		static const UECodeGen_Private::FIntPropertyParams NewProp_GameServerPort;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ServerId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamworksMatchmakingSubsystem_GetLobbyGameServer_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksMatchmakingSubsystem_eventGetLobbyGameServer_Parms, LobbyId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 3508419189
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamworksMatchmakingSubsystem_GetLobbyGameServer_Statics::NewProp_GameServerIP = { "GameServerIP", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksMatchmakingSubsystem_eventGetLobbyGameServer_Parms, GameServerIP), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamworksMatchmakingSubsystem_GetLobbyGameServer_Statics::NewProp_GameServerPort = { "GameServerPort", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksMatchmakingSubsystem_eventGetLobbyGameServer_Parms, GameServerPort), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamworksMatchmakingSubsystem_GetLobbyGameServer_Statics::NewProp_ServerId = { "ServerId", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksMatchmakingSubsystem_eventGetLobbyGameServer_Parms, ServerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 3508419189
	void Z_Construct_UFunction_USteamworksMatchmakingSubsystem_GetLobbyGameServer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamworksMatchmakingSubsystem_eventGetLobbyGameServer_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamworksMatchmakingSubsystem_GetLobbyGameServer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamworksMatchmakingSubsystem_eventGetLobbyGameServer_Parms), &Z_Construct_UFunction_USteamworksMatchmakingSubsystem_GetLobbyGameServer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamworksMatchmakingSubsystem_GetLobbyGameServer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksMatchmakingSubsystem_GetLobbyGameServer_Statics::NewProp_LobbyId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksMatchmakingSubsystem_GetLobbyGameServer_Statics::NewProp_GameServerIP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksMatchmakingSubsystem_GetLobbyGameServer_Statics::NewProp_GameServerPort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksMatchmakingSubsystem_GetLobbyGameServer_Statics::NewProp_ServerId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksMatchmakingSubsystem_GetLobbyGameServer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamworksMatchmakingSubsystem_GetLobbyGameServer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Steamworks|Matchmaking" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksMatchmakingSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamworksMatchmakingSubsystem_GetLobbyGameServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamworksMatchmakingSubsystem, nullptr, "GetLobbyGameServer", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamworksMatchmakingSubsystem_GetLobbyGameServer_Statics::SteamworksMatchmakingSubsystem_eventGetLobbyGameServer_Parms), Z_Construct_UFunction_USteamworksMatchmakingSubsystem_GetLobbyGameServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksMatchmakingSubsystem_GetLobbyGameServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamworksMatchmakingSubsystem_GetLobbyGameServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksMatchmakingSubsystem_GetLobbyGameServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamworksMatchmakingSubsystem_GetLobbyGameServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamworksMatchmakingSubsystem_GetLobbyGameServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamworksMatchmakingSubsystem_GetLobbyOwner_Statics
	{
		struct SteamworksMatchmakingSubsystem_eventGetLobbyOwner_Parms
		{
			FUniqueNetIdRepl LobbyId;
			FUniqueNetIdRepl ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamworksMatchmakingSubsystem_GetLobbyOwner_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksMatchmakingSubsystem_eventGetLobbyOwner_Parms, LobbyId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 3508419189
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamworksMatchmakingSubsystem_GetLobbyOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksMatchmakingSubsystem_eventGetLobbyOwner_Parms, ReturnValue), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 3508419189
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamworksMatchmakingSubsystem_GetLobbyOwner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksMatchmakingSubsystem_GetLobbyOwner_Statics::NewProp_LobbyId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksMatchmakingSubsystem_GetLobbyOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamworksMatchmakingSubsystem_GetLobbyOwner_Statics::Function_MetaDataParams[] = {
		{ "Category", "Steamworks|Matchmaking" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksMatchmakingSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamworksMatchmakingSubsystem_GetLobbyOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamworksMatchmakingSubsystem, nullptr, "GetLobbyOwner", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamworksMatchmakingSubsystem_GetLobbyOwner_Statics::SteamworksMatchmakingSubsystem_eventGetLobbyOwner_Parms), Z_Construct_UFunction_USteamworksMatchmakingSubsystem_GetLobbyOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksMatchmakingSubsystem_GetLobbyOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamworksMatchmakingSubsystem_GetLobbyOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksMatchmakingSubsystem_GetLobbyOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamworksMatchmakingSubsystem_GetLobbyOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamworksMatchmakingSubsystem_GetLobbyOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamworksMatchmakingSubsystem_SendLobbyChatMsg_Statics
	{
		struct SteamworksMatchmakingSubsystem_eventSendLobbyChatMsg_Parms
		{
			FUniqueNetIdRepl LobbyId;
			FString Message;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamworksMatchmakingSubsystem_SendLobbyChatMsg_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksMatchmakingSubsystem_eventSendLobbyChatMsg_Parms, LobbyId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 3508419189
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamworksMatchmakingSubsystem_SendLobbyChatMsg_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksMatchmakingSubsystem_eventSendLobbyChatMsg_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamworksMatchmakingSubsystem_SendLobbyChatMsg_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamworksMatchmakingSubsystem_eventSendLobbyChatMsg_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamworksMatchmakingSubsystem_SendLobbyChatMsg_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamworksMatchmakingSubsystem_eventSendLobbyChatMsg_Parms), &Z_Construct_UFunction_USteamworksMatchmakingSubsystem_SendLobbyChatMsg_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamworksMatchmakingSubsystem_SendLobbyChatMsg_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksMatchmakingSubsystem_SendLobbyChatMsg_Statics::NewProp_LobbyId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksMatchmakingSubsystem_SendLobbyChatMsg_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksMatchmakingSubsystem_SendLobbyChatMsg_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamworksMatchmakingSubsystem_SendLobbyChatMsg_Statics::Function_MetaDataParams[] = {
		{ "Category", "Steamworks|Matchmaking" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksMatchmakingSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamworksMatchmakingSubsystem_SendLobbyChatMsg_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamworksMatchmakingSubsystem, nullptr, "SendLobbyChatMsg", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamworksMatchmakingSubsystem_SendLobbyChatMsg_Statics::SteamworksMatchmakingSubsystem_eventSendLobbyChatMsg_Parms), Z_Construct_UFunction_USteamworksMatchmakingSubsystem_SendLobbyChatMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksMatchmakingSubsystem_SendLobbyChatMsg_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamworksMatchmakingSubsystem_SendLobbyChatMsg_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksMatchmakingSubsystem_SendLobbyChatMsg_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamworksMatchmakingSubsystem_SendLobbyChatMsg()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamworksMatchmakingSubsystem_SendLobbyChatMsg_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamworksMatchmakingSubsystem_SetLobbyGameServer_Statics
	{
		struct SteamworksMatchmakingSubsystem_eventSetLobbyGameServer_Parms
		{
			FUniqueNetIdRepl LobbyId;
			FString GameServerIP;
			int32 GameServerPort;
			FUniqueNetIdRepl ServerId;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameServerIP_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GameServerIP;
		static const UECodeGen_Private::FIntPropertyParams NewProp_GameServerPort;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ServerId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamworksMatchmakingSubsystem_SetLobbyGameServer_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksMatchmakingSubsystem_eventSetLobbyGameServer_Parms, LobbyId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 3508419189
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamworksMatchmakingSubsystem_SetLobbyGameServer_Statics::NewProp_GameServerIP_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamworksMatchmakingSubsystem_SetLobbyGameServer_Statics::NewProp_GameServerIP = { "GameServerIP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksMatchmakingSubsystem_eventSetLobbyGameServer_Parms, GameServerIP), METADATA_PARAMS(Z_Construct_UFunction_USteamworksMatchmakingSubsystem_SetLobbyGameServer_Statics::NewProp_GameServerIP_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksMatchmakingSubsystem_SetLobbyGameServer_Statics::NewProp_GameServerIP_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamworksMatchmakingSubsystem_SetLobbyGameServer_Statics::NewProp_GameServerPort = { "GameServerPort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksMatchmakingSubsystem_eventSetLobbyGameServer_Parms, GameServerPort), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamworksMatchmakingSubsystem_SetLobbyGameServer_Statics::NewProp_ServerId = { "ServerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksMatchmakingSubsystem_eventSetLobbyGameServer_Parms, ServerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 3508419189
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamworksMatchmakingSubsystem_SetLobbyGameServer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksMatchmakingSubsystem_SetLobbyGameServer_Statics::NewProp_LobbyId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksMatchmakingSubsystem_SetLobbyGameServer_Statics::NewProp_GameServerIP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksMatchmakingSubsystem_SetLobbyGameServer_Statics::NewProp_GameServerPort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksMatchmakingSubsystem_SetLobbyGameServer_Statics::NewProp_ServerId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamworksMatchmakingSubsystem_SetLobbyGameServer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Steamworks|Matchmaking" },
		{ "Comment", "// ===== Lobby =====\n" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksMatchmakingSubsystem.h" },
		{ "ToolTip", "===== Lobby =====" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamworksMatchmakingSubsystem_SetLobbyGameServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamworksMatchmakingSubsystem, nullptr, "SetLobbyGameServer", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamworksMatchmakingSubsystem_SetLobbyGameServer_Statics::SteamworksMatchmakingSubsystem_eventSetLobbyGameServer_Parms), Z_Construct_UFunction_USteamworksMatchmakingSubsystem_SetLobbyGameServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksMatchmakingSubsystem_SetLobbyGameServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamworksMatchmakingSubsystem_SetLobbyGameServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksMatchmakingSubsystem_SetLobbyGameServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamworksMatchmakingSubsystem_SetLobbyGameServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamworksMatchmakingSubsystem_SetLobbyGameServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamworksMatchmakingSubsystem_SetLobbyOwner_Statics
	{
		struct SteamworksMatchmakingSubsystem_eventSetLobbyOwner_Parms
		{
			FUniqueNetIdRepl LobbyId;
			FUniqueNetIdRepl UserId;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamworksMatchmakingSubsystem_SetLobbyOwner_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksMatchmakingSubsystem_eventSetLobbyOwner_Parms, LobbyId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 3508419189
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamworksMatchmakingSubsystem_SetLobbyOwner_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksMatchmakingSubsystem_eventSetLobbyOwner_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 3508419189
	void Z_Construct_UFunction_USteamworksMatchmakingSubsystem_SetLobbyOwner_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamworksMatchmakingSubsystem_eventSetLobbyOwner_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamworksMatchmakingSubsystem_SetLobbyOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamworksMatchmakingSubsystem_eventSetLobbyOwner_Parms), &Z_Construct_UFunction_USteamworksMatchmakingSubsystem_SetLobbyOwner_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamworksMatchmakingSubsystem_SetLobbyOwner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksMatchmakingSubsystem_SetLobbyOwner_Statics::NewProp_LobbyId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksMatchmakingSubsystem_SetLobbyOwner_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksMatchmakingSubsystem_SetLobbyOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamworksMatchmakingSubsystem_SetLobbyOwner_Statics::Function_MetaDataParams[] = {
		{ "Category", "Steamworks|Matchmaking" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksMatchmakingSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamworksMatchmakingSubsystem_SetLobbyOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamworksMatchmakingSubsystem, nullptr, "SetLobbyOwner", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamworksMatchmakingSubsystem_SetLobbyOwner_Statics::SteamworksMatchmakingSubsystem_eventSetLobbyOwner_Parms), Z_Construct_UFunction_USteamworksMatchmakingSubsystem_SetLobbyOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksMatchmakingSubsystem_SetLobbyOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamworksMatchmakingSubsystem_SetLobbyOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksMatchmakingSubsystem_SetLobbyOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamworksMatchmakingSubsystem_SetLobbyOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamworksMatchmakingSubsystem_SetLobbyOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamworksMatchmakingSubsystem);
	UClass* Z_Construct_UClass_USteamworksMatchmakingSubsystem_NoRegister()
	{
		return USteamworksMatchmakingSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_USteamworksMatchmakingSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnLobbyChatMsg_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnLobbyChatMsg;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnLobbyChatUpdate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnLobbyChatUpdate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnLobbyCreated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnLobbyCreated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnLobbyDataUpdate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnLobbyDataUpdate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnLobbyEnter_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnLobbyEnter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnLobbyGameCreated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnLobbyGameCreated;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamworksMatchmakingSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamworksExtension,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamworksMatchmakingSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamworksMatchmakingSubsystem_GetLobbyChatEntry, "GetLobbyChatEntry" }, // 3274017070
		{ &Z_Construct_UFunction_USteamworksMatchmakingSubsystem_GetLobbyGameServer, "GetLobbyGameServer" }, // 3213608113
		{ &Z_Construct_UFunction_USteamworksMatchmakingSubsystem_GetLobbyOwner, "GetLobbyOwner" }, // 165774519
		{ &Z_Construct_UFunction_USteamworksMatchmakingSubsystem_SendLobbyChatMsg, "SendLobbyChatMsg" }, // 3714007214
		{ &Z_Construct_UFunction_USteamworksMatchmakingSubsystem_SetLobbyGameServer, "SetLobbyGameServer" }, // 3656952444
		{ &Z_Construct_UFunction_USteamworksMatchmakingSubsystem_SetLobbyOwner, "SetLobbyOwner" }, // 3724250956
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamworksMatchmakingSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Subsystems/SteamworksMatchmakingSubsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksMatchmakingSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamworksMatchmakingSubsystem_Statics::NewProp_m_OnLobbyChatMsg_MetaData[] = {
		{ "Category", "Steamworks|Matchmaking|Delegate" },
		{ "Comment", "// ===== Delegate =====\n" },
		{ "DisplayName", "OnLobbyChatMsg" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksMatchmakingSubsystem.h" },
		{ "ToolTip", "===== Delegate =====" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamworksMatchmakingSubsystem_Statics::NewProp_m_OnLobbyChatMsg = { "m_OnLobbyChatMsg", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamworksMatchmakingSubsystem, m_OnLobbyChatMsg), Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyChatMsgDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamworksMatchmakingSubsystem_Statics::NewProp_m_OnLobbyChatMsg_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamworksMatchmakingSubsystem_Statics::NewProp_m_OnLobbyChatMsg_MetaData)) }; // 3453872775
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamworksMatchmakingSubsystem_Statics::NewProp_m_OnLobbyChatUpdate_MetaData[] = {
		{ "Category", "Steamworks|Matchmaking|Delegate" },
		{ "DisplayName", "OnLobbyChatUpdate" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksMatchmakingSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamworksMatchmakingSubsystem_Statics::NewProp_m_OnLobbyChatUpdate = { "m_OnLobbyChatUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamworksMatchmakingSubsystem, m_OnLobbyChatUpdate), Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyChatUpdateDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamworksMatchmakingSubsystem_Statics::NewProp_m_OnLobbyChatUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamworksMatchmakingSubsystem_Statics::NewProp_m_OnLobbyChatUpdate_MetaData)) }; // 3622123322
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamworksMatchmakingSubsystem_Statics::NewProp_m_OnLobbyCreated_MetaData[] = {
		{ "Category", "Steamworks|Matchmaking|Delegate" },
		{ "DisplayName", "OnLobbyCreated" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksMatchmakingSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamworksMatchmakingSubsystem_Statics::NewProp_m_OnLobbyCreated = { "m_OnLobbyCreated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamworksMatchmakingSubsystem, m_OnLobbyCreated), Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyCreatedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamworksMatchmakingSubsystem_Statics::NewProp_m_OnLobbyCreated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamworksMatchmakingSubsystem_Statics::NewProp_m_OnLobbyCreated_MetaData)) }; // 2056034003
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamworksMatchmakingSubsystem_Statics::NewProp_m_OnLobbyDataUpdate_MetaData[] = {
		{ "Category", "Steamworks|Matchmaking|Delegate" },
		{ "DisplayName", "OnLobbyDataUpdate" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksMatchmakingSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamworksMatchmakingSubsystem_Statics::NewProp_m_OnLobbyDataUpdate = { "m_OnLobbyDataUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamworksMatchmakingSubsystem, m_OnLobbyDataUpdate), Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyDataUpdateDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamworksMatchmakingSubsystem_Statics::NewProp_m_OnLobbyDataUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamworksMatchmakingSubsystem_Statics::NewProp_m_OnLobbyDataUpdate_MetaData)) }; // 2090733929
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamworksMatchmakingSubsystem_Statics::NewProp_m_OnLobbyEnter_MetaData[] = {
		{ "Category", "Steamworks|Matchmaking|Delegate" },
		{ "DisplayName", "OnLobbyEnter" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksMatchmakingSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamworksMatchmakingSubsystem_Statics::NewProp_m_OnLobbyEnter = { "m_OnLobbyEnter", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamworksMatchmakingSubsystem, m_OnLobbyEnter), Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyEnterDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamworksMatchmakingSubsystem_Statics::NewProp_m_OnLobbyEnter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamworksMatchmakingSubsystem_Statics::NewProp_m_OnLobbyEnter_MetaData)) }; // 179247917
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamworksMatchmakingSubsystem_Statics::NewProp_m_OnLobbyGameCreated_MetaData[] = {
		{ "Category", "Steamworks|Matchmaking|Delegate" },
		{ "DisplayName", "OnLobbyGameCreated" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksMatchmakingSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamworksMatchmakingSubsystem_Statics::NewProp_m_OnLobbyGameCreated = { "m_OnLobbyGameCreated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamworksMatchmakingSubsystem, m_OnLobbyGameCreated), Z_Construct_UDelegateFunction_SteamworksExtension_OnLobbyGameCreatedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamworksMatchmakingSubsystem_Statics::NewProp_m_OnLobbyGameCreated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamworksMatchmakingSubsystem_Statics::NewProp_m_OnLobbyGameCreated_MetaData)) }; // 1215194380
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamworksMatchmakingSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamworksMatchmakingSubsystem_Statics::NewProp_m_OnLobbyChatMsg,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamworksMatchmakingSubsystem_Statics::NewProp_m_OnLobbyChatUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamworksMatchmakingSubsystem_Statics::NewProp_m_OnLobbyCreated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamworksMatchmakingSubsystem_Statics::NewProp_m_OnLobbyDataUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamworksMatchmakingSubsystem_Statics::NewProp_m_OnLobbyEnter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamworksMatchmakingSubsystem_Statics::NewProp_m_OnLobbyGameCreated,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamworksMatchmakingSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamworksMatchmakingSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamworksMatchmakingSubsystem_Statics::ClassParams = {
		&USteamworksMatchmakingSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USteamworksMatchmakingSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USteamworksMatchmakingSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamworksMatchmakingSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamworksMatchmakingSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamworksMatchmakingSubsystem()
	{
		if (!Z_Registration_Info_UClass_USteamworksMatchmakingSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamworksMatchmakingSubsystem.OuterSingleton, Z_Construct_UClass_USteamworksMatchmakingSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamworksMatchmakingSubsystem.OuterSingleton;
	}
	template<> STEAMWORKSEXTENSION_API UClass* StaticClass<USteamworksMatchmakingSubsystem>()
	{
		return USteamworksMatchmakingSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamworksMatchmakingSubsystem);
	struct Z_CompiledInDeferFile_FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksMatchmakingSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksMatchmakingSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USteamworksMatchmakingSubsystem, USteamworksMatchmakingSubsystem::StaticClass, TEXT("USteamworksMatchmakingSubsystem"), &Z_Registration_Info_UClass_USteamworksMatchmakingSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamworksMatchmakingSubsystem), 2856363265U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksMatchmakingSubsystem_h_1025222356(TEXT("/Script/SteamworksExtension"),
		Z_CompiledInDeferFile_FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksMatchmakingSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksMatchmakingSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
