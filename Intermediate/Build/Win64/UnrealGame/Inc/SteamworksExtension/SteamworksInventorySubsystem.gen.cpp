// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamworksExtension/Public/Subsystems/SteamworksInventorySubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamworksInventorySubsystem() {}
// Cross Module References
	STEAMWORKSEXTENSION_API UFunction* Z_Construct_UDelegateFunction_SteamworksExtension_OnSteamInventoryDefinitionUpdateDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SteamworksExtension();
	STEAMWORKSEXTENSION_API UFunction* Z_Construct_UDelegateFunction_SteamworksExtension_OnSteamInventoryFullUpdateDelegate__DelegateSignature();
	STEAMWORKSEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FSteamInventoryResult();
	STEAMWORKSEXTENSION_API UFunction* Z_Construct_UDelegateFunction_SteamworksExtension_OnSteamInventoryResultReadyDelegate__DelegateSignature();
	STEAMWORKSEXTENSION_API UEnum* Z_Construct_UEnum_SteamworksExtension_ESteamResult();
	STEAMWORKSEXTENSION_API UClass* Z_Construct_UClass_USteamworksInventorySubsystem_NoRegister();
	STEAMWORKSEXTENSION_API UClass* Z_Construct_UClass_USteamworksInventorySubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	STEAMWORKSEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FSteamItemDef();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	STEAMWORKSEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FSteamItemInstanceID();
	STEAMWORKSEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FSteamItemDetails();
	STEAMWORKSEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FSteamItemPriceData();
	STEAMWORKSEXTENSION_API UFunction* Z_Construct_UDelegateFunction_SteamworksExtension_SteamInventoryRequestPricesCallbackPin__DelegateSignature();
	STEAMWORKSEXTENSION_API UClass* Z_Construct_UClass_USteamworksInventoryRequestPrices_NoRegister();
	STEAMWORKSEXTENSION_API UClass* Z_Construct_UClass_USteamworksInventoryRequestPrices();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	STEAMWORKSEXTENSION_API UFunction* Z_Construct_UDelegateFunction_SteamworksExtension_SteamInventoryEligiblePromoItemDefIDsCallbackPin__DelegateSignature();
	STEAMWORKSEXTENSION_API UClass* Z_Construct_UClass_USteamworksInventoryEligiblePromoItemDefIDs_NoRegister();
	STEAMWORKSEXTENSION_API UClass* Z_Construct_UClass_USteamworksInventoryEligiblePromoItemDefIDs();
	STEAMWORKSEXTENSION_API UFunction* Z_Construct_UDelegateFunction_SteamworksExtension_SteamInventoryStartPurchaseCallbackPin__DelegateSignature();
	STEAMWORKSEXTENSION_API UClass* Z_Construct_UClass_USteamworksInventoryStartPurchase_NoRegister();
	STEAMWORKSEXTENSION_API UClass* Z_Construct_UClass_USteamworksInventoryStartPurchase();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SteamworksExtension_OnSteamInventoryDefinitionUpdateDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamworksExtension_OnSteamInventoryDefinitionUpdateDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ================================================\n//   Steamworks Inventory Extension Subsystem\n// ================================================\n" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksInventorySubsystem.h" },
		{ "ToolTip", "Steamworks Inventory Extension Subsystem" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamworksExtension_OnSteamInventoryDefinitionUpdateDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamworksExtension, nullptr, "OnSteamInventoryDefinitionUpdateDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamworksExtension_OnSteamInventoryDefinitionUpdateDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamworksExtension_OnSteamInventoryDefinitionUpdateDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamworksExtension_OnSteamInventoryDefinitionUpdateDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamworksExtension_OnSteamInventoryDefinitionUpdateDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamworksExtension_OnSteamInventoryFullUpdateDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamworksExtension_eventOnSteamInventoryFullUpdateDelegate_Parms
		{
			FSteamInventoryResult ResultHandle;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ResultHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamworksExtension_OnSteamInventoryFullUpdateDelegate__DelegateSignature_Statics::NewProp_ResultHandle = { "ResultHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamworksExtension_eventOnSteamInventoryFullUpdateDelegate_Parms, ResultHandle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(nullptr, 0) }; // 631756268
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamworksExtension_OnSteamInventoryFullUpdateDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamworksExtension_OnSteamInventoryFullUpdateDelegate__DelegateSignature_Statics::NewProp_ResultHandle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamworksExtension_OnSteamInventoryFullUpdateDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksInventorySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamworksExtension_OnSteamInventoryFullUpdateDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamworksExtension, nullptr, "OnSteamInventoryFullUpdateDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamworksExtension_OnSteamInventoryFullUpdateDelegate__DelegateSignature_Statics::_Script_SteamworksExtension_eventOnSteamInventoryFullUpdateDelegate_Parms), Z_Construct_UDelegateFunction_SteamworksExtension_OnSteamInventoryFullUpdateDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamworksExtension_OnSteamInventoryFullUpdateDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamworksExtension_OnSteamInventoryFullUpdateDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamworksExtension_OnSteamInventoryFullUpdateDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamworksExtension_OnSteamInventoryFullUpdateDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamworksExtension_OnSteamInventoryFullUpdateDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamworksExtension_OnSteamInventoryResultReadyDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamworksExtension_eventOnSteamInventoryResultReadyDelegate_Parms
		{
			FSteamInventoryResult ResultHandle;
			ESteamResult Result;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ResultHandle;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamworksExtension_OnSteamInventoryResultReadyDelegate__DelegateSignature_Statics::NewProp_ResultHandle = { "ResultHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamworksExtension_eventOnSteamInventoryResultReadyDelegate_Parms, ResultHandle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(nullptr, 0) }; // 631756268
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamworksExtension_OnSteamInventoryResultReadyDelegate__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SteamworksExtension_OnSteamInventoryResultReadyDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamworksExtension_eventOnSteamInventoryResultReadyDelegate_Parms, Result), Z_Construct_UEnum_SteamworksExtension_ESteamResult, METADATA_PARAMS(nullptr, 0) }; // 2208837127
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamworksExtension_OnSteamInventoryResultReadyDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamworksExtension_OnSteamInventoryResultReadyDelegate__DelegateSignature_Statics::NewProp_ResultHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamworksExtension_OnSteamInventoryResultReadyDelegate__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamworksExtension_OnSteamInventoryResultReadyDelegate__DelegateSignature_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamworksExtension_OnSteamInventoryResultReadyDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksInventorySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamworksExtension_OnSteamInventoryResultReadyDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamworksExtension, nullptr, "OnSteamInventoryResultReadyDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamworksExtension_OnSteamInventoryResultReadyDelegate__DelegateSignature_Statics::_Script_SteamworksExtension_eventOnSteamInventoryResultReadyDelegate_Parms), Z_Construct_UDelegateFunction_SteamworksExtension_OnSteamInventoryResultReadyDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamworksExtension_OnSteamInventoryResultReadyDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamworksExtension_OnSteamInventoryResultReadyDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamworksExtension_OnSteamInventoryResultReadyDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamworksExtension_OnSteamInventoryResultReadyDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamworksExtension_OnSteamInventoryResultReadyDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(USteamworksInventorySubsystem::execCacheInventoryValues)
	{
		P_GET_STRUCT(FSteamInventoryResult,Z_Param_ResultHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CacheInventoryValues(Z_Param_ResultHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamworksInventorySubsystem::execCheckHasOwnedViaCache)
	{
		P_GET_STRUCT(FSteamItemDef,Z_Param_ItemDef);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckHasOwnedViaCache(Z_Param_ItemDef);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamworksInventorySubsystem::execGetCachedOwningItems)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSet<FSteamItemDef>*)Z_Param__Result=P_THIS->GetCachedOwningItems();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamworksInventorySubsystem::execGetCachedItem)
	{
		P_GET_STRUCT(FSteamItemDef,Z_Param_ItemDef);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamItemDetails*)Z_Param__Result=P_THIS->GetCachedItem(Z_Param_ItemDef);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamworksInventorySubsystem::execGetCachedItems)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FSteamItemDetails>*)Z_Param__Result=P_THIS->GetCachedItems();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamworksInventorySubsystem::execGetCachedBET)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamItemDetails*)Z_Param__Result=P_THIS->GetCachedBET();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamworksInventorySubsystem::execGetCachedISC)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamItemDetails*)Z_Param__Result=P_THIS->GetCachedISC();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamworksInventorySubsystem::execGetResultTimestamp)
	{
		P_GET_STRUCT(FSteamInventoryResult,Z_Param_ResultHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetResultTimestamp(Z_Param_ResultHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamworksInventorySubsystem::execGetResultStatus)
	{
		P_GET_STRUCT(FSteamInventoryResult,Z_Param_ResultHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamResult*)Z_Param__Result=P_THIS->GetResultStatus(Z_Param_ResultHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamworksInventorySubsystem::execDestroyResult)
	{
		P_GET_STRUCT(FSteamInventoryResult,Z_Param_ResultHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestroyResult(Z_Param_ResultHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamworksInventorySubsystem::execDeserializeResult)
	{
		P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_ResultHandle);
		P_GET_TARRAY(uint8,Z_Param_Buffer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DeserializeResult(Z_Param_Out_ResultHandle,Z_Param_Buffer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamworksInventorySubsystem::execSerializeResult)
	{
		P_GET_STRUCT(FSteamInventoryResult,Z_Param_ResultHandle);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Buffer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SerializeResult(Z_Param_ResultHandle,Z_Param_Out_Buffer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamworksInventorySubsystem::execCheckResultSteamID)
	{
		P_GET_STRUCT(FSteamInventoryResult,Z_Param_ResultHandle);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UserId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckResultSteamID(Z_Param_ResultHandle,Z_Param_UserId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamworksInventorySubsystem::execGetResultItems)
	{
		P_GET_STRUCT(FSteamInventoryResult,Z_Param_ResultHandle);
		P_GET_TARRAY_REF(FSteamItemDetails,Z_Param_Out_ItemsArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetResultItems(Z_Param_ResultHandle,Z_Param_Out_ItemsArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamworksInventorySubsystem::execGetResultItemProperty)
	{
		P_GET_STRUCT(FSteamInventoryResult,Z_Param_ResultHandle);
		P_GET_PROPERTY(FIntProperty,Z_Param_ItemIndex);
		P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetResultItemProperty(Z_Param_ResultHandle,Z_Param_ItemIndex,Z_Param_PropertyName,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamworksInventorySubsystem::execGetNumItemsWithPrices)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumItemsWithPrices();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamworksInventorySubsystem::execGetItemsWithPrices)
	{
		P_GET_TARRAY_REF(FSteamItemPriceData,Z_Param_Out_ItemData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetItemsWithPrices(Z_Param_Out_ItemData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamworksInventorySubsystem::execGetItemPrice)
	{
		P_GET_STRUCT(FSteamItemDef,Z_Param_ItemDef);
		P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_CurrentPrice);
		P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_BasePrice);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetItemPrice(Z_Param_ItemDef,Z_Param_Out_CurrentPrice,Z_Param_Out_BasePrice);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamworksInventorySubsystem::execGetItemsByID)
	{
		P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_ResultHandle);
		P_GET_TARRAY_REF(FSteamItemInstanceID,Z_Param_Out_InstanceIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetItemsByID(Z_Param_Out_ResultHandle,Z_Param_Out_InstanceIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamworksInventorySubsystem::execGetItemDefinitionProperty)
	{
		P_GET_STRUCT(FSteamItemDef,Z_Param_Definition);
		P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetItemDefinitionProperty(Z_Param_Definition,Z_Param_PropertyName,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamworksInventorySubsystem::execGetItemDefinitionIDs)
	{
		P_GET_TARRAY_REF(FSteamItemDef,Z_Param_Out_Items);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetItemDefinitionIDs(Z_Param_Out_Items);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamworksInventorySubsystem::execGetEligiblePromoItemDefinitionIDs)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UserId);
		P_GET_TARRAY_REF(FSteamItemDef,Z_Param_Out_Items);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetEligiblePromoItemDefinitionIDs(Z_Param_UserId,Z_Param_Out_Items);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamworksInventorySubsystem::execGetAllItems)
	{
		P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_ResultHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetAllItems(Z_Param_Out_ResultHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamworksInventorySubsystem::execLoadItemDefinitions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->LoadItemDefinitions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamworksInventorySubsystem::execTriggerItemDrop)
	{
		P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_ResultHandle);
		P_GET_STRUCT(FSteamItemDef,Z_Param_DropListDefinition);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TriggerItemDrop(Z_Param_Out_ResultHandle,Z_Param_DropListDefinition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamworksInventorySubsystem::execTransferItemQuantity)
	{
		P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_ResultHandle);
		P_GET_STRUCT(FSteamItemInstanceID,Z_Param_ItemIdSource);
		P_GET_PROPERTY(FIntProperty,Z_Param_Quantity);
		P_GET_STRUCT(FSteamItemInstanceID,Z_Param_ItemIdDest);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TransferItemQuantity(Z_Param_Out_ResultHandle,Z_Param_ItemIdSource,Z_Param_Quantity,Z_Param_ItemIdDest);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamworksInventorySubsystem::execGrantPromoItems)
	{
		P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_ResultHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GrantPromoItems(Z_Param_Out_ResultHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamworksInventorySubsystem::execGenerateItems)
	{
		P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_ResultHandle);
		P_GET_TMAP_REF(FSteamItemDef,int32,Z_Param_Out_Items);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GenerateItems(Z_Param_Out_ResultHandle,Z_Param_Out_Items);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamworksInventorySubsystem::execExchangeItems)
	{
		P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_ResultHandle);
		P_GET_TMAP_REF(FSteamItemDef,int32,Z_Param_Out_ItemsGenerated);
		P_GET_TMAP_REF(FSteamItemInstanceID,int32,Z_Param_Out_ItemsDestroyed);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ExchangeItems(Z_Param_Out_ResultHandle,Z_Param_Out_ItemsGenerated,Z_Param_Out_ItemsDestroyed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamworksInventorySubsystem::execConsumeItem)
	{
		P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_ResultHandle);
		P_GET_STRUCT(FSteamItemInstanceID,Z_Param_ItemID);
		P_GET_PROPERTY(FIntProperty,Z_Param_Quantity);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ConsumeItem(Z_Param_Out_ResultHandle,Z_Param_ItemID,Z_Param_Quantity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamworksInventorySubsystem::execAddPromoItems)
	{
		P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_ResultHandle);
		P_GET_TARRAY_REF(FSteamItemDef,Z_Param_Out_ItemDefs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddPromoItems(Z_Param_Out_ResultHandle,Z_Param_Out_ItemDefs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamworksInventorySubsystem::execAddPromoItem)
	{
		P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_ResultHandle);
		P_GET_STRUCT(FSteamItemDef,Z_Param_ItemDef);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddPromoItem(Z_Param_Out_ResultHandle,Z_Param_ItemDef);
		P_NATIVE_END;
	}
	void USteamworksInventorySubsystem::StaticRegisterNativesUSteamworksInventorySubsystem()
	{
		UClass* Class = USteamworksInventorySubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddPromoItem", &USteamworksInventorySubsystem::execAddPromoItem },
			{ "AddPromoItems", &USteamworksInventorySubsystem::execAddPromoItems },
			{ "CacheInventoryValues", &USteamworksInventorySubsystem::execCacheInventoryValues },
			{ "CheckHasOwnedViaCache", &USteamworksInventorySubsystem::execCheckHasOwnedViaCache },
			{ "CheckResultSteamID", &USteamworksInventorySubsystem::execCheckResultSteamID },
			{ "ConsumeItem", &USteamworksInventorySubsystem::execConsumeItem },
			{ "DeserializeResult", &USteamworksInventorySubsystem::execDeserializeResult },
			{ "DestroyResult", &USteamworksInventorySubsystem::execDestroyResult },
			{ "ExchangeItems", &USteamworksInventorySubsystem::execExchangeItems },
			{ "GenerateItems", &USteamworksInventorySubsystem::execGenerateItems },
			{ "GetAllItems", &USteamworksInventorySubsystem::execGetAllItems },
			{ "GetCachedBET", &USteamworksInventorySubsystem::execGetCachedBET },
			{ "GetCachedISC", &USteamworksInventorySubsystem::execGetCachedISC },
			{ "GetCachedItem", &USteamworksInventorySubsystem::execGetCachedItem },
			{ "GetCachedItems", &USteamworksInventorySubsystem::execGetCachedItems },
			{ "GetCachedOwningItems", &USteamworksInventorySubsystem::execGetCachedOwningItems },
			{ "GetEligiblePromoItemDefinitionIDs", &USteamworksInventorySubsystem::execGetEligiblePromoItemDefinitionIDs },
			{ "GetItemDefinitionIDs", &USteamworksInventorySubsystem::execGetItemDefinitionIDs },
			{ "GetItemDefinitionProperty", &USteamworksInventorySubsystem::execGetItemDefinitionProperty },
			{ "GetItemPrice", &USteamworksInventorySubsystem::execGetItemPrice },
			{ "GetItemsByID", &USteamworksInventorySubsystem::execGetItemsByID },
			{ "GetItemsWithPrices", &USteamworksInventorySubsystem::execGetItemsWithPrices },
			{ "GetNumItemsWithPrices", &USteamworksInventorySubsystem::execGetNumItemsWithPrices },
			{ "GetResultItemProperty", &USteamworksInventorySubsystem::execGetResultItemProperty },
			{ "GetResultItems", &USteamworksInventorySubsystem::execGetResultItems },
			{ "GetResultStatus", &USteamworksInventorySubsystem::execGetResultStatus },
			{ "GetResultTimestamp", &USteamworksInventorySubsystem::execGetResultTimestamp },
			{ "GrantPromoItems", &USteamworksInventorySubsystem::execGrantPromoItems },
			{ "LoadItemDefinitions", &USteamworksInventorySubsystem::execLoadItemDefinitions },
			{ "SerializeResult", &USteamworksInventorySubsystem::execSerializeResult },
			{ "TransferItemQuantity", &USteamworksInventorySubsystem::execTransferItemQuantity },
			{ "TriggerItemDrop", &USteamworksInventorySubsystem::execTriggerItemDrop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamworksInventorySubsystem_AddPromoItem_Statics
	{
		struct SteamworksInventorySubsystem_eventAddPromoItem_Parms
		{
			FSteamInventoryResult ResultHandle;
			FSteamItemDef ItemDef;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ResultHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemDef;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_AddPromoItem_Statics::NewProp_ResultHandle = { "ResultHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksInventorySubsystem_eventAddPromoItem_Parms, ResultHandle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(nullptr, 0) }; // 631756268
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_AddPromoItem_Statics::NewProp_ItemDef = { "ItemDef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksInventorySubsystem_eventAddPromoItem_Parms, ItemDef), Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(nullptr, 0) }; // 4093002629
	void Z_Construct_UFunction_USteamworksInventorySubsystem_AddPromoItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamworksInventorySubsystem_eventAddPromoItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_AddPromoItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamworksInventorySubsystem_eventAddPromoItem_Parms), &Z_Construct_UFunction_USteamworksInventorySubsystem_AddPromoItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamworksInventorySubsystem_AddPromoItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_AddPromoItem_Statics::NewProp_ResultHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_AddPromoItem_Statics::NewProp_ItemDef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_AddPromoItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamworksInventorySubsystem_AddPromoItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Steamworks|Inventory" },
		{ "Comment", "/**\n\x09 * Grant a specific one-time promotional item to the current user.\n\x09 * This can be safely called from the client because the items it can grant can be locked down via policies in the itemdefs. One of the primary scenarios for this call is to grant an item to users who also own -\n\x09 * a specific other game. This can be useful if your game has custom UI for showing a specific promo item to the user otherwise if you want to grant multiple promotional items then use AddPromoItems or GrantPromoItems.\n\x09 * Any items that can be granted MUST have a \"promo\" attribute in their itemdef. That promo item list a set of APPIDs that the user must own to be granted this given item. This version will grant all items that -\n\x09 * have promo attributes specified for them in the configured item definitions. This allows adding additional promotional items without having to update the game client. For example the following will allow the -\n\x09 * item to be granted if the user owns either TF2 or SpaceWar.\n\x09 * NOTE: You must call DestroyResult on the provided inventory result when you are done with it.\n\x09 *\n\x09 * @param FSteamInventoryResult & ResultHandle - Returns a new inventory result handle.\n\x09 * @param FSteamItemDef ItemDef - The ItemDef to grant the player.\n\x09 * @return bool - This function always returns true when called by a regular user, and always returns false when called from SteamGameServer.\n\x09 * On success, the inventory result will include items which were granted, if any. If no items were granted because the user isn't eligible for any promotions, this is still considered a success.\n\x09 * Returns a new result handle via pResultHandle.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksInventorySubsystem.h" },
		{ "ToolTip", "Grant a specific one-time promotional item to the current user.\nThis can be safely called from the client because the items it can grant can be locked down via policies in the itemdefs. One of the primary scenarios for this call is to grant an item to users who also own -\na specific other game. This can be useful if your game has custom UI for showing a specific promo item to the user otherwise if you want to grant multiple promotional items then use AddPromoItems or GrantPromoItems.\nAny items that can be granted MUST have a \"promo\" attribute in their itemdef. That promo item list a set of APPIDs that the user must own to be granted this given item. This version will grant all items that -\nhave promo attributes specified for them in the configured item definitions. This allows adding additional promotional items without having to update the game client. For example the following will allow the -\nitem to be granted if the user owns either TF2 or SpaceWar.\nNOTE: You must call DestroyResult on the provided inventory result when you are done with it.\n\n@param FSteamInventoryResult & ResultHandle - Returns a new inventory result handle.\n@param FSteamItemDef ItemDef - The ItemDef to grant the player.\n@return bool - This function always returns true when called by a regular user, and always returns false when called from SteamGameServer.\nOn success, the inventory result will include items which were granted, if any. If no items were granted because the user isn't eligible for any promotions, this is still considered a success.\nReturns a new result handle via pResultHandle." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamworksInventorySubsystem_AddPromoItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamworksInventorySubsystem, nullptr, "AddPromoItem", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamworksInventorySubsystem_AddPromoItem_Statics::SteamworksInventorySubsystem_eventAddPromoItem_Parms), Z_Construct_UFunction_USteamworksInventorySubsystem_AddPromoItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksInventorySubsystem_AddPromoItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamworksInventorySubsystem_AddPromoItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksInventorySubsystem_AddPromoItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamworksInventorySubsystem_AddPromoItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamworksInventorySubsystem_AddPromoItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamworksInventorySubsystem_AddPromoItems_Statics
	{
		struct SteamworksInventorySubsystem_eventAddPromoItems_Parms
		{
			FSteamInventoryResult ResultHandle;
			TArray<FSteamItemDef> ItemDefs;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ResultHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemDefs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemDefs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemDefs;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_AddPromoItems_Statics::NewProp_ResultHandle = { "ResultHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksInventorySubsystem_eventAddPromoItems_Parms, ResultHandle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(nullptr, 0) }; // 631756268
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_AddPromoItems_Statics::NewProp_ItemDefs_Inner = { "ItemDefs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(nullptr, 0) }; // 4093002629
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamworksInventorySubsystem_AddPromoItems_Statics::NewProp_ItemDefs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_AddPromoItems_Statics::NewProp_ItemDefs = { "ItemDefs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksInventorySubsystem_eventAddPromoItems_Parms, ItemDefs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USteamworksInventorySubsystem_AddPromoItems_Statics::NewProp_ItemDefs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksInventorySubsystem_AddPromoItems_Statics::NewProp_ItemDefs_MetaData)) }; // 4093002629
	void Z_Construct_UFunction_USteamworksInventorySubsystem_AddPromoItems_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamworksInventorySubsystem_eventAddPromoItems_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_AddPromoItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamworksInventorySubsystem_eventAddPromoItems_Parms), &Z_Construct_UFunction_USteamworksInventorySubsystem_AddPromoItems_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamworksInventorySubsystem_AddPromoItems_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_AddPromoItems_Statics::NewProp_ResultHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_AddPromoItems_Statics::NewProp_ItemDefs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_AddPromoItems_Statics::NewProp_ItemDefs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_AddPromoItems_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamworksInventorySubsystem_AddPromoItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "Steamworks|Inventory" },
		{ "Comment", "/**\n\x09 * Grant a specific one-time promotional items to the current user.\n\x09 * This can be safely called from the client because the items it can grant can be locked down via policies in the itemdefs. One of the primary scenarios for this call is to grant an item to users who also own a -\n\x09 * specific other game. If you want to grant a single promotional item then use AddPromoItem. If you want to grant all possible promo items then use GrantPromoItems.\n\x09 * Any items that can be granted MUST have a \"promo\" attribute in their itemdef. That promo item list a set of APPIDs that the user must own to be granted this given item. This version will grant all items that -\n\x09 * have promo attributes specified for them in the configured item definitions. This allows adding additional promotional items without having to update the game client. For example the following will allow the item -\n\x09 * to be granted if the user owns either TF2 or SpaceWar.\n\x09 * NOTE: You must call DestroyResult on the provided inventory result when you are done with it.\n\x09 *\n\x09 * @param FSteamInventoryResult & ResultHandle - Returns a new inventory result handle.\n\x09 * @param const TArray<FSteamItemDef> & ItemDefs - The list of items to grant the user.\n\x09 * @return bool - This function always returns true when called by a regular user, and always returns false when called from SteamGameServer.\n\x09 * On success, the inventory result will include items which were granted, if any. If no items were granted because the user isn't eligible for any promotions, this is still considered a success.\n\x09 * Returns a new result handle via pResultHandle.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksInventorySubsystem.h" },
		{ "ToolTip", "Grant a specific one-time promotional items to the current user.\nThis can be safely called from the client because the items it can grant can be locked down via policies in the itemdefs. One of the primary scenarios for this call is to grant an item to users who also own a -\nspecific other game. If you want to grant a single promotional item then use AddPromoItem. If you want to grant all possible promo items then use GrantPromoItems.\nAny items that can be granted MUST have a \"promo\" attribute in their itemdef. That promo item list a set of APPIDs that the user must own to be granted this given item. This version will grant all items that -\nhave promo attributes specified for them in the configured item definitions. This allows adding additional promotional items without having to update the game client. For example the following will allow the item -\nto be granted if the user owns either TF2 or SpaceWar.\nNOTE: You must call DestroyResult on the provided inventory result when you are done with it.\n\n@param FSteamInventoryResult & ResultHandle - Returns a new inventory result handle.\n@param const TArray<FSteamItemDef> & ItemDefs - The list of items to grant the user.\n@return bool - This function always returns true when called by a regular user, and always returns false when called from SteamGameServer.\nOn success, the inventory result will include items which were granted, if any. If no items were granted because the user isn't eligible for any promotions, this is still considered a success.\nReturns a new result handle via pResultHandle." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamworksInventorySubsystem_AddPromoItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamworksInventorySubsystem, nullptr, "AddPromoItems", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamworksInventorySubsystem_AddPromoItems_Statics::SteamworksInventorySubsystem_eventAddPromoItems_Parms), Z_Construct_UFunction_USteamworksInventorySubsystem_AddPromoItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksInventorySubsystem_AddPromoItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamworksInventorySubsystem_AddPromoItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksInventorySubsystem_AddPromoItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamworksInventorySubsystem_AddPromoItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamworksInventorySubsystem_AddPromoItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamworksInventorySubsystem_CacheInventoryValues_Statics
	{
		struct SteamworksInventorySubsystem_eventCacheInventoryValues_Parms
		{
			FSteamInventoryResult ResultHandle;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ResultHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_CacheInventoryValues_Statics::NewProp_ResultHandle = { "ResultHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksInventorySubsystem_eventCacheInventoryValues_Parms, ResultHandle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(nullptr, 0) }; // 631756268
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamworksInventorySubsystem_CacheInventoryValues_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_CacheInventoryValues_Statics::NewProp_ResultHandle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamworksInventorySubsystem_CacheInventoryValues_Statics::Function_MetaDataParams[] = {
		{ "Category", "Steamworks|Inventory|Cache" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksInventorySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamworksInventorySubsystem_CacheInventoryValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamworksInventorySubsystem, nullptr, "CacheInventoryValues", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamworksInventorySubsystem_CacheInventoryValues_Statics::SteamworksInventorySubsystem_eventCacheInventoryValues_Parms), Z_Construct_UFunction_USteamworksInventorySubsystem_CacheInventoryValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksInventorySubsystem_CacheInventoryValues_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamworksInventorySubsystem_CacheInventoryValues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksInventorySubsystem_CacheInventoryValues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamworksInventorySubsystem_CacheInventoryValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamworksInventorySubsystem_CacheInventoryValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamworksInventorySubsystem_CheckHasOwnedViaCache_Statics
	{
		struct SteamworksInventorySubsystem_eventCheckHasOwnedViaCache_Parms
		{
			FSteamItemDef ItemDef;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemDef;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_CheckHasOwnedViaCache_Statics::NewProp_ItemDef = { "ItemDef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksInventorySubsystem_eventCheckHasOwnedViaCache_Parms, ItemDef), Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(nullptr, 0) }; // 4093002629
	void Z_Construct_UFunction_USteamworksInventorySubsystem_CheckHasOwnedViaCache_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamworksInventorySubsystem_eventCheckHasOwnedViaCache_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_CheckHasOwnedViaCache_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamworksInventorySubsystem_eventCheckHasOwnedViaCache_Parms), &Z_Construct_UFunction_USteamworksInventorySubsystem_CheckHasOwnedViaCache_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamworksInventorySubsystem_CheckHasOwnedViaCache_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_CheckHasOwnedViaCache_Statics::NewProp_ItemDef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_CheckHasOwnedViaCache_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamworksInventorySubsystem_CheckHasOwnedViaCache_Statics::Function_MetaDataParams[] = {
		{ "Category", "Steamworks|Inventory|Cache" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksInventorySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamworksInventorySubsystem_CheckHasOwnedViaCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamworksInventorySubsystem, nullptr, "CheckHasOwnedViaCache", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamworksInventorySubsystem_CheckHasOwnedViaCache_Statics::SteamworksInventorySubsystem_eventCheckHasOwnedViaCache_Parms), Z_Construct_UFunction_USteamworksInventorySubsystem_CheckHasOwnedViaCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksInventorySubsystem_CheckHasOwnedViaCache_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamworksInventorySubsystem_CheckHasOwnedViaCache_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksInventorySubsystem_CheckHasOwnedViaCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamworksInventorySubsystem_CheckHasOwnedViaCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamworksInventorySubsystem_CheckHasOwnedViaCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamworksInventorySubsystem_CheckResultSteamID_Statics
	{
		struct SteamworksInventorySubsystem_eventCheckResultSteamID_Parms
		{
			FSteamInventoryResult ResultHandle;
			FUniqueNetIdRepl UserId;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ResultHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_CheckResultSteamID_Statics::NewProp_ResultHandle = { "ResultHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksInventorySubsystem_eventCheckResultSteamID_Parms, ResultHandle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(nullptr, 0) }; // 631756268
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_CheckResultSteamID_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksInventorySubsystem_eventCheckResultSteamID_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 3508419189
	void Z_Construct_UFunction_USteamworksInventorySubsystem_CheckResultSteamID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamworksInventorySubsystem_eventCheckResultSteamID_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_CheckResultSteamID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamworksInventorySubsystem_eventCheckResultSteamID_Parms), &Z_Construct_UFunction_USteamworksInventorySubsystem_CheckResultSteamID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamworksInventorySubsystem_CheckResultSteamID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_CheckResultSteamID_Statics::NewProp_ResultHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_CheckResultSteamID_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_CheckResultSteamID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamworksInventorySubsystem_CheckResultSteamID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Steamworks|Inventory" },
		{ "Comment", "/**\n\x09 * Checks whether an inventory result handle belongs to the specified Steam ID.\n\x09 * This is important when using DeserializeResult, to verify that a remote player is not pretending to have a different user's inventory.\n\x09 *\n\x09 * @param FSteamInventoryResult ResultHandle - \x09The inventory result handle to check the Steam ID on.\n\x09 * @param FSteamID SteamIDExpected - The Steam ID to verify.\n\x09 * @return bool - true if the result belongs to the target steam ID; otherwise, false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksInventorySubsystem.h" },
		{ "ToolTip", "Checks whether an inventory result handle belongs to the specified Steam ID.\nThis is important when using DeserializeResult, to verify that a remote player is not pretending to have a different user's inventory.\n\n@param FSteamInventoryResult ResultHandle -  The inventory result handle to check the Steam ID on.\n@param FSteamID SteamIDExpected - The Steam ID to verify.\n@return bool - true if the result belongs to the target steam ID; otherwise, false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamworksInventorySubsystem_CheckResultSteamID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamworksInventorySubsystem, nullptr, "CheckResultSteamID", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamworksInventorySubsystem_CheckResultSteamID_Statics::SteamworksInventorySubsystem_eventCheckResultSteamID_Parms), Z_Construct_UFunction_USteamworksInventorySubsystem_CheckResultSteamID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksInventorySubsystem_CheckResultSteamID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamworksInventorySubsystem_CheckResultSteamID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksInventorySubsystem_CheckResultSteamID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamworksInventorySubsystem_CheckResultSteamID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamworksInventorySubsystem_CheckResultSteamID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamworksInventorySubsystem_ConsumeItem_Statics
	{
		struct SteamworksInventorySubsystem_eventConsumeItem_Parms
		{
			FSteamInventoryResult ResultHandle;
			FSteamItemInstanceID ItemID;
			int32 Quantity;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ResultHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_ConsumeItem_Statics::NewProp_ResultHandle = { "ResultHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksInventorySubsystem_eventConsumeItem_Parms, ResultHandle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(nullptr, 0) }; // 631756268
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_ConsumeItem_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksInventorySubsystem_eventConsumeItem_Parms, ItemID), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(nullptr, 0) }; // 1105309507
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_ConsumeItem_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksInventorySubsystem_eventConsumeItem_Parms, Quantity), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamworksInventorySubsystem_ConsumeItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamworksInventorySubsystem_eventConsumeItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_ConsumeItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamworksInventorySubsystem_eventConsumeItem_Parms), &Z_Construct_UFunction_USteamworksInventorySubsystem_ConsumeItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamworksInventorySubsystem_ConsumeItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_ConsumeItem_Statics::NewProp_ResultHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_ConsumeItem_Statics::NewProp_ItemID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_ConsumeItem_Statics::NewProp_Quantity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_ConsumeItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamworksInventorySubsystem_ConsumeItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Steamworks|Inventory" },
		{ "Comment", "/**\n\x09 * Consumes items from a user's inventory. If the quantity of the given item goes to zero, it is permanently removed.\n\x09 * Once an item is removed it cannot be recovered. This is not for the faint of heart - if your game implements item removal at all, a high-friction UI confirmation process is highly recommended.\n\x09 * ConsumeItem can be restricted to certain item definitions or fully blocked via the Steamworks website to minimize support/abuse issues such as the classic \"my brother borrowed my laptop and deleted all of my rare items\".\n\x09 * NOTE: You must call DestroyResult on the provided inventory result when you are done with it.\n\x09 *\n\x09 * @param FSteamInventoryResult & ResultHandle - Returns a new inventory result handle.\n\x09 * @param FSteamItemInstanceID ItemID - The item instance id to consume.\n\x09 * @param int32 Quantity - The number of items in that stack to consume.\n\x09 * @return bool - This function always returns true when called by a regular user, and always returns false when called from SteamGameServer. Returns a new result handle via pResultHandle.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksInventorySubsystem.h" },
		{ "ToolTip", "Consumes items from a user's inventory. If the quantity of the given item goes to zero, it is permanently removed.\nOnce an item is removed it cannot be recovered. This is not for the faint of heart - if your game implements item removal at all, a high-friction UI confirmation process is highly recommended.\nConsumeItem can be restricted to certain item definitions or fully blocked via the Steamworks website to minimize support/abuse issues such as the classic \"my brother borrowed my laptop and deleted all of my rare items\".\nNOTE: You must call DestroyResult on the provided inventory result when you are done with it.\n\n@param FSteamInventoryResult & ResultHandle - Returns a new inventory result handle.\n@param FSteamItemInstanceID ItemID - The item instance id to consume.\n@param int32 Quantity - The number of items in that stack to consume.\n@return bool - This function always returns true when called by a regular user, and always returns false when called from SteamGameServer. Returns a new result handle via pResultHandle." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamworksInventorySubsystem_ConsumeItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamworksInventorySubsystem, nullptr, "ConsumeItem", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamworksInventorySubsystem_ConsumeItem_Statics::SteamworksInventorySubsystem_eventConsumeItem_Parms), Z_Construct_UFunction_USteamworksInventorySubsystem_ConsumeItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksInventorySubsystem_ConsumeItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamworksInventorySubsystem_ConsumeItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksInventorySubsystem_ConsumeItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamworksInventorySubsystem_ConsumeItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamworksInventorySubsystem_ConsumeItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamworksInventorySubsystem_DeserializeResult_Statics
	{
		struct SteamworksInventorySubsystem_eventDeserializeResult_Parms
		{
			FSteamInventoryResult ResultHandle;
			TArray<uint8> Buffer;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ResultHandle;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Buffer_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Buffer;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_DeserializeResult_Statics::NewProp_ResultHandle = { "ResultHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksInventorySubsystem_eventDeserializeResult_Parms, ResultHandle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(nullptr, 0) }; // 631756268
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_DeserializeResult_Statics::NewProp_Buffer_Inner = { "Buffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_DeserializeResult_Statics::NewProp_Buffer = { "Buffer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksInventorySubsystem_eventDeserializeResult_Parms, Buffer), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamworksInventorySubsystem_DeserializeResult_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamworksInventorySubsystem_eventDeserializeResult_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_DeserializeResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamworksInventorySubsystem_eventDeserializeResult_Parms), &Z_Construct_UFunction_USteamworksInventorySubsystem_DeserializeResult_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamworksInventorySubsystem_DeserializeResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_DeserializeResult_Statics::NewProp_ResultHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_DeserializeResult_Statics::NewProp_Buffer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_DeserializeResult_Statics::NewProp_Buffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_DeserializeResult_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamworksInventorySubsystem_DeserializeResult_Statics::Function_MetaDataParams[] = {
		{ "Category", "Steamworks|Inventory" },
		{ "Comment", "/**\n\x09 * Deserializes a result set and verifies the signature bytes.\n\x09 * This call has a potential soft-failure mode where the handle status is set to k_EResultExpired. GetResultItems will still succeed in this mode. The \"expired\" result could indicate that the data may be out of date\n\x09 * not just due to timed expiration (one hour), but also because one of the items in the result set may have been traded or consumed since the result set was generated. You could compare the timestamp from -\n\x09 * GetResultTimestamp to ISteamUtils::GetServerRealTime to determine how old the data is. You could simply ignore the \"expired\" result code and continue as normal, or you could request the player with expired data to send an updated result set.\n\x09 * You should call CheckResultSteamID on the result handle when it completes to verify that a remote player is not pretending to have a different user's inventory.\n\x09 * NOTE: The bRESERVED_MUST_BE_FALSE parameter is reserved for future use and should never be set to true.\n\x09 * NOTE: You must call DestroyResult on the provided inventory result when you are done with it.\n\x09 *\n\x09 * @param FSteamInventoryResult & ResultHandle - Returns a new inventory result handle.\n\x09 * @param TArray<uint8> Buffer - The buffer to deserialize.\n\x09 * @return bool - Always returns true and then delivers error codes via GetResultStatus.\n\x09 * Returns a new result handle via pResultHandle.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksInventorySubsystem.h" },
		{ "ToolTip", "Deserializes a result set and verifies the signature bytes.\nThis call has a potential soft-failure mode where the handle status is set to k_EResultExpired. GetResultItems will still succeed in this mode. The \"expired\" result could indicate that the data may be out of date\nnot just due to timed expiration (one hour), but also because one of the items in the result set may have been traded or consumed since the result set was generated. You could compare the timestamp from -\nGetResultTimestamp to ISteamUtils::GetServerRealTime to determine how old the data is. You could simply ignore the \"expired\" result code and continue as normal, or you could request the player with expired data to send an updated result set.\nYou should call CheckResultSteamID on the result handle when it completes to verify that a remote player is not pretending to have a different user's inventory.\nNOTE: The bRESERVED_MUST_BE_FALSE parameter is reserved for future use and should never be set to true.\nNOTE: You must call DestroyResult on the provided inventory result when you are done with it.\n\n@param FSteamInventoryResult & ResultHandle - Returns a new inventory result handle.\n@param TArray<uint8> Buffer - The buffer to deserialize.\n@return bool - Always returns true and then delivers error codes via GetResultStatus.\nReturns a new result handle via pResultHandle." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamworksInventorySubsystem_DeserializeResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamworksInventorySubsystem, nullptr, "DeserializeResult", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamworksInventorySubsystem_DeserializeResult_Statics::SteamworksInventorySubsystem_eventDeserializeResult_Parms), Z_Construct_UFunction_USteamworksInventorySubsystem_DeserializeResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksInventorySubsystem_DeserializeResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamworksInventorySubsystem_DeserializeResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksInventorySubsystem_DeserializeResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamworksInventorySubsystem_DeserializeResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamworksInventorySubsystem_DeserializeResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamworksInventorySubsystem_DestroyResult_Statics
	{
		struct SteamworksInventorySubsystem_eventDestroyResult_Parms
		{
			FSteamInventoryResult ResultHandle;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ResultHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_DestroyResult_Statics::NewProp_ResultHandle = { "ResultHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksInventorySubsystem_eventDestroyResult_Parms, ResultHandle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(nullptr, 0) }; // 631756268
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamworksInventorySubsystem_DestroyResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_DestroyResult_Statics::NewProp_ResultHandle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamworksInventorySubsystem_DestroyResult_Statics::Function_MetaDataParams[] = {
		{ "Category", "Steamworks|Inventory" },
		{ "Comment", "/**\n\x09 * Destroys a result handle and frees all associated memory.\n\x09 *\n\x09 * @param FSteamInventoryResult ResultHandle - The inventory result handle to destroy.\n\x09 * @return void\n\x09 */" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksInventorySubsystem.h" },
		{ "ToolTip", "Destroys a result handle and frees all associated memory.\n\n@param FSteamInventoryResult ResultHandle - The inventory result handle to destroy.\n@return void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamworksInventorySubsystem_DestroyResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamworksInventorySubsystem, nullptr, "DestroyResult", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamworksInventorySubsystem_DestroyResult_Statics::SteamworksInventorySubsystem_eventDestroyResult_Parms), Z_Construct_UFunction_USteamworksInventorySubsystem_DestroyResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksInventorySubsystem_DestroyResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamworksInventorySubsystem_DestroyResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksInventorySubsystem_DestroyResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamworksInventorySubsystem_DestroyResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamworksInventorySubsystem_DestroyResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamworksInventorySubsystem_ExchangeItems_Statics
	{
		struct SteamworksInventorySubsystem_eventExchangeItems_Parms
		{
			FSteamInventoryResult ResultHandle;
			TMap<FSteamItemDef,int32> ItemsGenerated;
			TMap<FSteamItemInstanceID,int32> ItemsDestroyed;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ResultHandle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ItemsGenerated_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemsGenerated_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemsGenerated_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ItemsGenerated;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ItemsDestroyed_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemsDestroyed_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemsDestroyed_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ItemsDestroyed;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_ExchangeItems_Statics::NewProp_ResultHandle = { "ResultHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksInventorySubsystem_eventExchangeItems_Parms, ResultHandle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(nullptr, 0) }; // 631756268
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_ExchangeItems_Statics::NewProp_ItemsGenerated_ValueProp = { "ItemsGenerated", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_ExchangeItems_Statics::NewProp_ItemsGenerated_Key_KeyProp = { "ItemsGenerated_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(nullptr, 0) }; // 4093002629
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamworksInventorySubsystem_ExchangeItems_Statics::NewProp_ItemsGenerated_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_ExchangeItems_Statics::NewProp_ItemsGenerated = { "ItemsGenerated", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksInventorySubsystem_eventExchangeItems_Parms, ItemsGenerated), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USteamworksInventorySubsystem_ExchangeItems_Statics::NewProp_ItemsGenerated_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksInventorySubsystem_ExchangeItems_Statics::NewProp_ItemsGenerated_MetaData)) }; // 4093002629
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_ExchangeItems_Statics::NewProp_ItemsDestroyed_ValueProp = { "ItemsDestroyed", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_ExchangeItems_Statics::NewProp_ItemsDestroyed_Key_KeyProp = { "ItemsDestroyed_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(nullptr, 0) }; // 1105309507
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamworksInventorySubsystem_ExchangeItems_Statics::NewProp_ItemsDestroyed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_ExchangeItems_Statics::NewProp_ItemsDestroyed = { "ItemsDestroyed", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksInventorySubsystem_eventExchangeItems_Parms, ItemsDestroyed), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USteamworksInventorySubsystem_ExchangeItems_Statics::NewProp_ItemsDestroyed_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksInventorySubsystem_ExchangeItems_Statics::NewProp_ItemsDestroyed_MetaData)) }; // 1105309507
	void Z_Construct_UFunction_USteamworksInventorySubsystem_ExchangeItems_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamworksInventorySubsystem_eventExchangeItems_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_ExchangeItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamworksInventorySubsystem_eventExchangeItems_Parms), &Z_Construct_UFunction_USteamworksInventorySubsystem_ExchangeItems_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamworksInventorySubsystem_ExchangeItems_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_ExchangeItems_Statics::NewProp_ResultHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_ExchangeItems_Statics::NewProp_ItemsGenerated_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_ExchangeItems_Statics::NewProp_ItemsGenerated_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_ExchangeItems_Statics::NewProp_ItemsGenerated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_ExchangeItems_Statics::NewProp_ItemsDestroyed_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_ExchangeItems_Statics::NewProp_ItemsDestroyed_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_ExchangeItems_Statics::NewProp_ItemsDestroyed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_ExchangeItems_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamworksInventorySubsystem_ExchangeItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "Steamworks|Inventory" },
		{ "Comment", "/**\n\x09 * Grant one item in exchange for a set of other items.\n\x09 * This can be used to implement crafting recipes or transmutations, or items which unpack themselves into other items (e.g., a chest).\n\x09 * The caller of this API passes in the requested item and an array of existing items and quantities to exchange for it. The API currently takes an array of items to generate but at this time the size of that array -\n\x09 * must be 1 and the quantity of the new item must be 1.\n\x09 * Any items that can be granted MUST have an exchange attribute in their itemdef. The exchange attribute specifies a set of recipes that are valid exchanges for this item. Exchange recipes are evaluated atomically -\n\x09 * by the Inventory Service; if the supplied components do not match the recipe, or do not contain sufficient quantity, the exchange will fail.\n\x09 * For example: exchange: 101x1,102x1;103x5;104x3,105x3\n\x09 * Will allow the item to be exchanged for either one 101 and one 102, five 103s or three 104s and three 105s. See the Steam Inventory Schema documentation for more details.\n\x09 * NOTE: You must call DestroyResult on the provided inventory result when you are done with it.\n\x09 *\n\x09 * @param FSteamInventoryResult & ResultHandle - Returns a new inventory result handle.\n\x09 * @param const TMap<FSteamItemDef, int32> & ItemsGenerated - The list of items that will be created by this call. Currently can only be 1 item!\n\x09 * @param const TMap<FSteamItemInstanceID, int32> & ItemsDestroyed  - The list of items that will be destroyed by this call.\n\x09 * @return bool - This function returns true indicating success, and returns false when called from SteamGameServer or when unArrayGenerateLength or punArrayGenerateQuantity is not set to 1.\n\x09 * Exchanges that do not match a recipe, or do not provide the required amounts, will fail.\n\x09 * Returns a new result handle via pResultHandle.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksInventorySubsystem.h" },
		{ "ToolTip", "Grant one item in exchange for a set of other items.\nThis can be used to implement crafting recipes or transmutations, or items which unpack themselves into other items (e.g., a chest).\nThe caller of this API passes in the requested item and an array of existing items and quantities to exchange for it. The API currently takes an array of items to generate but at this time the size of that array -\nmust be 1 and the quantity of the new item must be 1.\nAny items that can be granted MUST have an exchange attribute in their itemdef. The exchange attribute specifies a set of recipes that are valid exchanges for this item. Exchange recipes are evaluated atomically -\nby the Inventory Service; if the supplied components do not match the recipe, or do not contain sufficient quantity, the exchange will fail.\nFor example: exchange: 101x1,102x1;103x5;104x3,105x3\nWill allow the item to be exchanged for either one 101 and one 102, five 103s or three 104s and three 105s. See the Steam Inventory Schema documentation for more details.\nNOTE: You must call DestroyResult on the provided inventory result when you are done with it.\n\n@param FSteamInventoryResult & ResultHandle - Returns a new inventory result handle.\n@param const TMap<FSteamItemDef, int32> & ItemsGenerated - The list of items that will be created by this call. Currently can only be 1 item!\n@param const TMap<FSteamItemInstanceID, int32> & ItemsDestroyed  - The list of items that will be destroyed by this call.\n@return bool - This function returns true indicating success, and returns false when called from SteamGameServer or when unArrayGenerateLength or punArrayGenerateQuantity is not set to 1.\nExchanges that do not match a recipe, or do not provide the required amounts, will fail.\nReturns a new result handle via pResultHandle." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamworksInventorySubsystem_ExchangeItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamworksInventorySubsystem, nullptr, "ExchangeItems", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamworksInventorySubsystem_ExchangeItems_Statics::SteamworksInventorySubsystem_eventExchangeItems_Parms), Z_Construct_UFunction_USteamworksInventorySubsystem_ExchangeItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksInventorySubsystem_ExchangeItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamworksInventorySubsystem_ExchangeItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksInventorySubsystem_ExchangeItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamworksInventorySubsystem_ExchangeItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamworksInventorySubsystem_ExchangeItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamworksInventorySubsystem_GenerateItems_Statics
	{
		struct SteamworksInventorySubsystem_eventGenerateItems_Parms
		{
			FSteamInventoryResult ResultHandle;
			TMap<FSteamItemDef,int32> Items;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ResultHandle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Items_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Items;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_GenerateItems_Statics::NewProp_ResultHandle = { "ResultHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksInventorySubsystem_eventGenerateItems_Parms, ResultHandle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(nullptr, 0) }; // 631756268
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_GenerateItems_Statics::NewProp_Items_ValueProp = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_GenerateItems_Statics::NewProp_Items_Key_KeyProp = { "Items_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(nullptr, 0) }; // 4093002629
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamworksInventorySubsystem_GenerateItems_Statics::NewProp_Items_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_GenerateItems_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksInventorySubsystem_eventGenerateItems_Parms, Items), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USteamworksInventorySubsystem_GenerateItems_Statics::NewProp_Items_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksInventorySubsystem_GenerateItems_Statics::NewProp_Items_MetaData)) }; // 4093002629
	void Z_Construct_UFunction_USteamworksInventorySubsystem_GenerateItems_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamworksInventorySubsystem_eventGenerateItems_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_GenerateItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamworksInventorySubsystem_eventGenerateItems_Parms), &Z_Construct_UFunction_USteamworksInventorySubsystem_GenerateItems_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamworksInventorySubsystem_GenerateItems_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_GenerateItems_Statics::NewProp_ResultHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_GenerateItems_Statics::NewProp_Items_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_GenerateItems_Statics::NewProp_Items_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_GenerateItems_Statics::NewProp_Items,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_GenerateItems_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamworksInventorySubsystem_GenerateItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "Steamworks|Inventory" },
		{ "Comment", "/**\n\x09 * Grants specific items to the current user, for developers only.\n\x09 * This API is only intended for prototyping - it is only usable by Steam accounts that belong to the publisher group for your game.\n\x09 * You can pass in an array of items, identified by their SteamItemDef_t and optionally a second array of corresponding quantities for each item. The length of these arrays MUST match!\n\x09 * NOTE: You must call DestroyResult on the provided inventory result when you are done with it.\n\x09 *\n\x09 * @param FSteamInventoryResult & ResultHandle - Returns a new inventory result handle.\n\x09 * @param const TMap<FSteamItemDef, int32> & Items - The list of items to grant the user.\n\x09 * @return bool - This function always returns true when called by a regular user, and always returns false when called from SteamGameServer.\n\x09 * Returns a new result handle via pResultHandle.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksInventorySubsystem.h" },
		{ "ToolTip", "Grants specific items to the current user, for developers only.\nThis API is only intended for prototyping - it is only usable by Steam accounts that belong to the publisher group for your game.\nYou can pass in an array of items, identified by their SteamItemDef_t and optionally a second array of corresponding quantities for each item. The length of these arrays MUST match!\nNOTE: You must call DestroyResult on the provided inventory result when you are done with it.\n\n@param FSteamInventoryResult & ResultHandle - Returns a new inventory result handle.\n@param const TMap<FSteamItemDef, int32> & Items - The list of items to grant the user.\n@return bool - This function always returns true when called by a regular user, and always returns false when called from SteamGameServer.\nReturns a new result handle via pResultHandle." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamworksInventorySubsystem_GenerateItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamworksInventorySubsystem, nullptr, "GenerateItems", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamworksInventorySubsystem_GenerateItems_Statics::SteamworksInventorySubsystem_eventGenerateItems_Parms), Z_Construct_UFunction_USteamworksInventorySubsystem_GenerateItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksInventorySubsystem_GenerateItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamworksInventorySubsystem_GenerateItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksInventorySubsystem_GenerateItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamworksInventorySubsystem_GenerateItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamworksInventorySubsystem_GenerateItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamworksInventorySubsystem_GetAllItems_Statics
	{
		struct SteamworksInventorySubsystem_eventGetAllItems_Parms
		{
			FSteamInventoryResult ResultHandle;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ResultHandle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_GetAllItems_Statics::NewProp_ResultHandle = { "ResultHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksInventorySubsystem_eventGetAllItems_Parms, ResultHandle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(nullptr, 0) }; // 631756268
	void Z_Construct_UFunction_USteamworksInventorySubsystem_GetAllItems_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamworksInventorySubsystem_eventGetAllItems_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_GetAllItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamworksInventorySubsystem_eventGetAllItems_Parms), &Z_Construct_UFunction_USteamworksInventorySubsystem_GetAllItems_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamworksInventorySubsystem_GetAllItems_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_GetAllItems_Statics::NewProp_ResultHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_GetAllItems_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamworksInventorySubsystem_GetAllItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "Steamworks|Inventory" },
		{ "Comment", "/**\n\x09 * Start retrieving all items in the current users inventory.\n\x09 *\n\x09 * NOTE: Calls to this function are subject to rate limits and may return cached results if called too frequently. It is suggested that you call this function only when you are about to display the user's full inventory, -\n\x09 * or if you expect that the inventory may have changed.\n\x09 * NOTE: You must call DestroyResult on the provided inventory result when you are done with it.\n\x09 *\n\x09 * @param FSteamInventoryResult & ResultHandle - Returns a new inventory result handle.\n\x09 * @return bool - This function always returns true when called by a regular user, and always returns false when called from SteamGameServer.\n\x09 * Returns a new result handle via pResultHandle.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksInventorySubsystem.h" },
		{ "ToolTip", "Start retrieving all items in the current users inventory.\n\nNOTE: Calls to this function are subject to rate limits and may return cached results if called too frequently. It is suggested that you call this function only when you are about to display the user's full inventory, -\nor if you expect that the inventory may have changed.\nNOTE: You must call DestroyResult on the provided inventory result when you are done with it.\n\n@param FSteamInventoryResult & ResultHandle - Returns a new inventory result handle.\n@return bool - This function always returns true when called by a regular user, and always returns false when called from SteamGameServer.\nReturns a new result handle via pResultHandle." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamworksInventorySubsystem_GetAllItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamworksInventorySubsystem, nullptr, "GetAllItems", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamworksInventorySubsystem_GetAllItems_Statics::SteamworksInventorySubsystem_eventGetAllItems_Parms), Z_Construct_UFunction_USteamworksInventorySubsystem_GetAllItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksInventorySubsystem_GetAllItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamworksInventorySubsystem_GetAllItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksInventorySubsystem_GetAllItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamworksInventorySubsystem_GetAllItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamworksInventorySubsystem_GetAllItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamworksInventorySubsystem_GetCachedBET_Statics
	{
		struct SteamworksInventorySubsystem_eventGetCachedBET_Parms
		{
			FSteamItemDetails ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_GetCachedBET_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksInventorySubsystem_eventGetCachedBET_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamItemDetails, METADATA_PARAMS(nullptr, 0) }; // 826059081
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamworksInventorySubsystem_GetCachedBET_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_GetCachedBET_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamworksInventorySubsystem_GetCachedBET_Statics::Function_MetaDataParams[] = {
		{ "Category", "Steamworks|Inventory|Cache" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksInventorySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamworksInventorySubsystem_GetCachedBET_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamworksInventorySubsystem, nullptr, "GetCachedBET", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamworksInventorySubsystem_GetCachedBET_Statics::SteamworksInventorySubsystem_eventGetCachedBET_Parms), Z_Construct_UFunction_USteamworksInventorySubsystem_GetCachedBET_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksInventorySubsystem_GetCachedBET_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamworksInventorySubsystem_GetCachedBET_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksInventorySubsystem_GetCachedBET_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamworksInventorySubsystem_GetCachedBET()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamworksInventorySubsystem_GetCachedBET_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamworksInventorySubsystem_GetCachedISC_Statics
	{
		struct SteamworksInventorySubsystem_eventGetCachedISC_Parms
		{
			FSteamItemDetails ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_GetCachedISC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksInventorySubsystem_eventGetCachedISC_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamItemDetails, METADATA_PARAMS(nullptr, 0) }; // 826059081
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamworksInventorySubsystem_GetCachedISC_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_GetCachedISC_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamworksInventorySubsystem_GetCachedISC_Statics::Function_MetaDataParams[] = {
		{ "Category", "Steamworks|Inventory|Cache" },
		{ "Comment", "// ===== Cached Values =====\n" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksInventorySubsystem.h" },
		{ "ToolTip", "===== Cached Values =====" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamworksInventorySubsystem_GetCachedISC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamworksInventorySubsystem, nullptr, "GetCachedISC", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamworksInventorySubsystem_GetCachedISC_Statics::SteamworksInventorySubsystem_eventGetCachedISC_Parms), Z_Construct_UFunction_USteamworksInventorySubsystem_GetCachedISC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksInventorySubsystem_GetCachedISC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamworksInventorySubsystem_GetCachedISC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksInventorySubsystem_GetCachedISC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamworksInventorySubsystem_GetCachedISC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamworksInventorySubsystem_GetCachedISC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamworksInventorySubsystem_GetCachedItem_Statics
	{
		struct SteamworksInventorySubsystem_eventGetCachedItem_Parms
		{
			FSteamItemDef ItemDef;
			FSteamItemDetails ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemDef;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_GetCachedItem_Statics::NewProp_ItemDef = { "ItemDef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksInventorySubsystem_eventGetCachedItem_Parms, ItemDef), Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(nullptr, 0) }; // 4093002629
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_GetCachedItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksInventorySubsystem_eventGetCachedItem_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamItemDetails, METADATA_PARAMS(nullptr, 0) }; // 826059081
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamworksInventorySubsystem_GetCachedItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_GetCachedItem_Statics::NewProp_ItemDef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_GetCachedItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamworksInventorySubsystem_GetCachedItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Steamworks|Inventory|Cache" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksInventorySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamworksInventorySubsystem_GetCachedItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamworksInventorySubsystem, nullptr, "GetCachedItem", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamworksInventorySubsystem_GetCachedItem_Statics::SteamworksInventorySubsystem_eventGetCachedItem_Parms), Z_Construct_UFunction_USteamworksInventorySubsystem_GetCachedItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksInventorySubsystem_GetCachedItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamworksInventorySubsystem_GetCachedItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksInventorySubsystem_GetCachedItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamworksInventorySubsystem_GetCachedItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamworksInventorySubsystem_GetCachedItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamworksInventorySubsystem_GetCachedItems_Statics
	{
		struct SteamworksInventorySubsystem_eventGetCachedItems_Parms
		{
			TArray<FSteamItemDetails> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_GetCachedItems_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSteamItemDetails, METADATA_PARAMS(nullptr, 0) }; // 826059081
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_GetCachedItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksInventorySubsystem_eventGetCachedItems_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 826059081
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamworksInventorySubsystem_GetCachedItems_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_GetCachedItems_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_GetCachedItems_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamworksInventorySubsystem_GetCachedItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "Steamworks|Inventory|Cache" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksInventorySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamworksInventorySubsystem_GetCachedItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamworksInventorySubsystem, nullptr, "GetCachedItems", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamworksInventorySubsystem_GetCachedItems_Statics::SteamworksInventorySubsystem_eventGetCachedItems_Parms), Z_Construct_UFunction_USteamworksInventorySubsystem_GetCachedItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksInventorySubsystem_GetCachedItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamworksInventorySubsystem_GetCachedItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksInventorySubsystem_GetCachedItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamworksInventorySubsystem_GetCachedItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamworksInventorySubsystem_GetCachedItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamworksInventorySubsystem_GetCachedOwningItems_Statics
	{
		struct SteamworksInventorySubsystem_eventGetCachedOwningItems_Parms
		{
			TSet<FSteamItemDef> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_ElementProp;
		static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_GetCachedOwningItems_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(nullptr, 0) }; // 4093002629
	static_assert(TModels<CGetTypeHashable, FSteamItemDef>::Value, "The structure 'FSteamItemDef' is used in a TSet but does not have a GetValueTypeHash defined");
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_GetCachedOwningItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksInventorySubsystem_eventGetCachedOwningItems_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) }; // 4093002629
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamworksInventorySubsystem_GetCachedOwningItems_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_GetCachedOwningItems_Statics::NewProp_ReturnValue_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_GetCachedOwningItems_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamworksInventorySubsystem_GetCachedOwningItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "Steamworks|Inventory|Cache" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksInventorySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamworksInventorySubsystem_GetCachedOwningItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamworksInventorySubsystem, nullptr, "GetCachedOwningItems", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamworksInventorySubsystem_GetCachedOwningItems_Statics::SteamworksInventorySubsystem_eventGetCachedOwningItems_Parms), Z_Construct_UFunction_USteamworksInventorySubsystem_GetCachedOwningItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksInventorySubsystem_GetCachedOwningItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamworksInventorySubsystem_GetCachedOwningItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksInventorySubsystem_GetCachedOwningItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamworksInventorySubsystem_GetCachedOwningItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamworksInventorySubsystem_GetCachedOwningItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamworksInventorySubsystem_GetEligiblePromoItemDefinitionIDs_Statics
	{
		struct SteamworksInventorySubsystem_eventGetEligiblePromoItemDefinitionIDs_Parms
		{
			FUniqueNetIdRepl UserId;
			TArray<FSteamItemDef> Items;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksInventorySubsystem_eventGetEligiblePromoItemDefinitionIDs_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 3508419189
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(nullptr, 0) }; // 4093002629
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksInventorySubsystem_eventGetEligiblePromoItemDefinitionIDs_Parms, Items), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 4093002629
	void Z_Construct_UFunction_USteamworksInventorySubsystem_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamworksInventorySubsystem_eventGetEligiblePromoItemDefinitionIDs_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamworksInventorySubsystem_eventGetEligiblePromoItemDefinitionIDs_Parms), &Z_Construct_UFunction_USteamworksInventorySubsystem_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamworksInventorySubsystem_GetEligiblePromoItemDefinitionIDs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_Items_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_Items,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamworksInventorySubsystem_GetEligiblePromoItemDefinitionIDs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Steamworks|Inventory" },
		{ "Comment", "/**\n\x09 * Get the list of item definition ids that a user can be granted.\n\x09 * You should call this while handling a SteamInventoryEligiblePromoItemDefIDs_t call result to pull out the item definition ids.\n\x09 *\n\x09 * @param FUniqueNetIdRepl UserId - The Steam ID of the user who these items are for. This should be the same as SteamInventoryEligiblePromoItemDefIDs_t.m_steamID.\n\x09 * @param TArray<FSteamItemDef> & Items - \x09Returns the item definition ids by copying them into this array.\n\x09 * @return bool\n\x09 */" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksInventorySubsystem.h" },
		{ "ToolTip", "Get the list of item definition ids that a user can be granted.\nYou should call this while handling a SteamInventoryEligiblePromoItemDefIDs_t call result to pull out the item definition ids.\n\n@param FUniqueNetIdRepl UserId - The Steam ID of the user who these items are for. This should be the same as SteamInventoryEligiblePromoItemDefIDs_t.m_steamID.\n@param TArray<FSteamItemDef> & Items -       Returns the item definition ids by copying them into this array.\n@return bool" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamworksInventorySubsystem_GetEligiblePromoItemDefinitionIDs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamworksInventorySubsystem, nullptr, "GetEligiblePromoItemDefinitionIDs", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamworksInventorySubsystem_GetEligiblePromoItemDefinitionIDs_Statics::SteamworksInventorySubsystem_eventGetEligiblePromoItemDefinitionIDs_Parms), Z_Construct_UFunction_USteamworksInventorySubsystem_GetEligiblePromoItemDefinitionIDs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksInventorySubsystem_GetEligiblePromoItemDefinitionIDs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamworksInventorySubsystem_GetEligiblePromoItemDefinitionIDs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksInventorySubsystem_GetEligiblePromoItemDefinitionIDs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamworksInventorySubsystem_GetEligiblePromoItemDefinitionIDs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamworksInventorySubsystem_GetEligiblePromoItemDefinitionIDs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemDefinitionIDs_Statics
	{
		struct SteamworksInventorySubsystem_eventGetItemDefinitionIDs_Parms
		{
			TArray<FSteamItemDef> Items;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemDefinitionIDs_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(nullptr, 0) }; // 4093002629
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemDefinitionIDs_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksInventorySubsystem_eventGetItemDefinitionIDs_Parms, Items), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 4093002629
	void Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemDefinitionIDs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamworksInventorySubsystem_eventGetItemDefinitionIDs_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemDefinitionIDs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamworksInventorySubsystem_eventGetItemDefinitionIDs_Parms), &Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemDefinitionIDs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemDefinitionIDs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemDefinitionIDs_Statics::NewProp_Items_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemDefinitionIDs_Statics::NewProp_Items,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemDefinitionIDs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemDefinitionIDs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Steamworks|Inventory" },
		{ "Comment", "/**\n\x09 * Returns the set of all item definition IDs which are defined in the App Admin panel of the Steamworks website.\n\x09 * These item definitions may not necessarily be contiguous integers.\n\x09 * This should be called in response to a SteamInventoryDefinitionUpdate_t callback. There is no reason to call this function if your game hardcodes the numeric definition IDs (eg, purple face mask = 20, blue weapon mod = 55)\n\x09 * and does not allow for adding new item types without a client patch.\n\x09 *\n\x09 * @param TArray<FSteamItemDef> & Items - Returns the item definitions by copying them into this array.\n\x09 * @return bool - This call returns true upon success. It only returns false if item definitions have not been loaded from the server, or no item defintions exist for the current application.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksInventorySubsystem.h" },
		{ "ToolTip", "Returns the set of all item definition IDs which are defined in the App Admin panel of the Steamworks website.\nThese item definitions may not necessarily be contiguous integers.\nThis should be called in response to a SteamInventoryDefinitionUpdate_t callback. There is no reason to call this function if your game hardcodes the numeric definition IDs (eg, purple face mask = 20, blue weapon mod = 55)\nand does not allow for adding new item types without a client patch.\n\n@param TArray<FSteamItemDef> & Items - Returns the item definitions by copying them into this array.\n@return bool - This call returns true upon success. It only returns false if item definitions have not been loaded from the server, or no item defintions exist for the current application." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemDefinitionIDs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamworksInventorySubsystem, nullptr, "GetItemDefinitionIDs", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemDefinitionIDs_Statics::SteamworksInventorySubsystem_eventGetItemDefinitionIDs_Parms), Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemDefinitionIDs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemDefinitionIDs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemDefinitionIDs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemDefinitionIDs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemDefinitionIDs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemDefinitionIDs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemDefinitionProperty_Statics
	{
		struct SteamworksInventorySubsystem_eventGetItemDefinitionProperty_Parms
		{
			FSteamItemDef Definition;
			FString PropertyName;
			FString Value;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Definition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemDefinitionProperty_Statics::NewProp_Definition = { "Definition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksInventorySubsystem_eventGetItemDefinitionProperty_Parms, Definition), Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(nullptr, 0) }; // 4093002629
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemDefinitionProperty_Statics::NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemDefinitionProperty_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksInventorySubsystem_eventGetItemDefinitionProperty_Parms, PropertyName), METADATA_PARAMS(Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemDefinitionProperty_Statics::NewProp_PropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemDefinitionProperty_Statics::NewProp_PropertyName_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemDefinitionProperty_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksInventorySubsystem_eventGetItemDefinitionProperty_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemDefinitionProperty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamworksInventorySubsystem_eventGetItemDefinitionProperty_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemDefinitionProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamworksInventorySubsystem_eventGetItemDefinitionProperty_Parms), &Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemDefinitionProperty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemDefinitionProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemDefinitionProperty_Statics::NewProp_Definition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemDefinitionProperty_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemDefinitionProperty_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemDefinitionProperty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemDefinitionProperty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Steamworks|Inventory" },
		{ "Comment", "/**\n\x09 * Gets a string property from the specified item definition.\n\x09 * Gets a property value for a specific item definition.\n\x09 * Note that some properties (for example, \"name\") may be localized and will depend on the current Steam language settings (see ISteamApps::GetCurrentGameLanguage). Property names are always ASCII alphanumeric and underscores.\n\x09 * Pass in NULL for pchPropertyName to get a comma-separated list of available property names. In this mode, punValueBufferSizeOut will contain the suggested buffer size. Otherwise it will be the number of bytes actually copied to pchValueBuffer.\n\x09 *\n\x09 * @param FSteamItemDef Definition - The item definition to get the properties for.\n\x09 * @param const FString & PropertyName - The property name to get the value for. If you pass in NULL then pchValueBuffer will contain a comma-separated list of all the available names.\n\x09 * @param FString & Value - Returns the value associated with pchPropertyName.\n\x09 * @return bool - This returns true upon success; otherwise, false indicating that the item definitions have not been loaded from the server, or no item definitions exist for the current application, or the property name was not found in the item definition.\n\x09 * The associated value is returned via pchValueBuffer, and the total number of bytes required to hold the value is available from punValueBufferSizeOut. It's recommended to call this function twice, the first time with pchValueBuffer\n\x09 * set to NULL and punValueBufferSizeOut set to zero to get the size required for the buffer for the subsequent call.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksInventorySubsystem.h" },
		{ "ToolTip", "Gets a string property from the specified item definition.\nGets a property value for a specific item definition.\nNote that some properties (for example, \"name\") may be localized and will depend on the current Steam language settings (see ISteamApps::GetCurrentGameLanguage). Property names are always ASCII alphanumeric and underscores.\nPass in NULL for pchPropertyName to get a comma-separated list of available property names. In this mode, punValueBufferSizeOut will contain the suggested buffer size. Otherwise it will be the number of bytes actually copied to pchValueBuffer.\n\n@param FSteamItemDef Definition - The item definition to get the properties for.\n@param const FString & PropertyName - The property name to get the value for. If you pass in NULL then pchValueBuffer will contain a comma-separated list of all the available names.\n@param FString & Value - Returns the value associated with pchPropertyName.\n@return bool - This returns true upon success; otherwise, false indicating that the item definitions have not been loaded from the server, or no item definitions exist for the current application, or the property name was not found in the item definition.\nThe associated value is returned via pchValueBuffer, and the total number of bytes required to hold the value is available from punValueBufferSizeOut. It's recommended to call this function twice, the first time with pchValueBuffer\nset to NULL and punValueBufferSizeOut set to zero to get the size required for the buffer for the subsequent call." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemDefinitionProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamworksInventorySubsystem, nullptr, "GetItemDefinitionProperty", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemDefinitionProperty_Statics::SteamworksInventorySubsystem_eventGetItemDefinitionProperty_Parms), Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemDefinitionProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemDefinitionProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemDefinitionProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemDefinitionProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemDefinitionProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemDefinitionProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemPrice_Statics
	{
		struct SteamworksInventorySubsystem_eventGetItemPrice_Parms
		{
			FSteamItemDef ItemDef;
			int64 CurrentPrice;
			int64 BasePrice;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemDef;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_CurrentPrice;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_BasePrice;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemPrice_Statics::NewProp_ItemDef = { "ItemDef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksInventorySubsystem_eventGetItemPrice_Parms, ItemDef), Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(nullptr, 0) }; // 4093002629
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemPrice_Statics::NewProp_CurrentPrice = { "CurrentPrice", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksInventorySubsystem_eventGetItemPrice_Parms, CurrentPrice), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemPrice_Statics::NewProp_BasePrice = { "BasePrice", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksInventorySubsystem_eventGetItemPrice_Parms, BasePrice), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemPrice_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamworksInventorySubsystem_eventGetItemPrice_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemPrice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamworksInventorySubsystem_eventGetItemPrice_Parms), &Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemPrice_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemPrice_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemPrice_Statics::NewProp_ItemDef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemPrice_Statics::NewProp_CurrentPrice,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemPrice_Statics::NewProp_BasePrice,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemPrice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemPrice_Statics::Function_MetaDataParams[] = {
		{ "Category", "Steamworks|Inventory" },
		{ "Comment", "/**\n\x09 * After a successful call to RequestPrices, you can call this method to get the pricing for a specific item definition.\n\x09 *\n\x09 * @param FSteamItemDef ItemDef - The item definition id to retrieve the price for\n\x09 * @param int64 & CurrentPrice - The price pointer to populate. Prices are rendered in the user's local currency.\n\x09 * @param int64 & BasePrice\n\x09 * @return bool - true upon success, indicating that pPrice has been successfully filled with the price for the given item definition id.\n\x09 * false if the parameters are invalid or if there is no price for the given item definition id.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksInventorySubsystem.h" },
		{ "ToolTip", "After a successful call to RequestPrices, you can call this method to get the pricing for a specific item definition.\n\n@param FSteamItemDef ItemDef - The item definition id to retrieve the price for\n@param int64 & CurrentPrice - The price pointer to populate. Prices are rendered in the user's local currency.\n@param int64 & BasePrice\n@return bool - true upon success, indicating that pPrice has been successfully filled with the price for the given item definition id.\nfalse if the parameters are invalid or if there is no price for the given item definition id." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemPrice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamworksInventorySubsystem, nullptr, "GetItemPrice", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemPrice_Statics::SteamworksInventorySubsystem_eventGetItemPrice_Parms), Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemPrice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemPrice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemPrice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemPrice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemPrice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemPrice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemsByID_Statics
	{
		struct SteamworksInventorySubsystem_eventGetItemsByID_Parms
		{
			FSteamInventoryResult ResultHandle;
			TArray<FSteamItemInstanceID> InstanceIDs;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ResultHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceIDs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceIDs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InstanceIDs;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemsByID_Statics::NewProp_ResultHandle = { "ResultHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksInventorySubsystem_eventGetItemsByID_Parms, ResultHandle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(nullptr, 0) }; // 631756268
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemsByID_Statics::NewProp_InstanceIDs_Inner = { "InstanceIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(nullptr, 0) }; // 1105309507
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemsByID_Statics::NewProp_InstanceIDs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemsByID_Statics::NewProp_InstanceIDs = { "InstanceIDs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksInventorySubsystem_eventGetItemsByID_Parms, InstanceIDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemsByID_Statics::NewProp_InstanceIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemsByID_Statics::NewProp_InstanceIDs_MetaData)) }; // 1105309507
	void Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemsByID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamworksInventorySubsystem_eventGetItemsByID_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemsByID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamworksInventorySubsystem_eventGetItemsByID_Parms), &Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemsByID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemsByID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemsByID_Statics::NewProp_ResultHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemsByID_Statics::NewProp_InstanceIDs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemsByID_Statics::NewProp_InstanceIDs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemsByID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemsByID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Steamworks|Inventory" },
		{ "Comment", "/**\n\x09 * Gets the state of a subset of the current user's inventory.\n\x09 * The subset is specified by an array of item instance IDs.\n\x09 * The results from this call can be serialized using SerializeResult and passed to other players to \"prove\" that the current user owns specific items, without exposing the user's entire inventory.\n\x09 * For example, you could call this with the IDs of the user's currently equipped items and serialize this to a buffer, and then transmit this buffer to other players upon joining a game.\n\x09 * NOTE: You must call DestroyResult on the provided inventory result when you are done with it.\n\x09 *\n\x09 * @param FSteamInventoryResult & ResultHandle - Returns a new inventory result handle.\n\x09 * @param const TArray<FSteamItemInstanceID> & InstanceIDs - A list of the item instance ids to update the state of.\n\x09 * @return bool - This function always returns true when called by a regular user, and always returns false when called from SteamGameServer. Returns a new result handle via pResultHandle.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksInventorySubsystem.h" },
		{ "ToolTip", "Gets the state of a subset of the current user's inventory.\nThe subset is specified by an array of item instance IDs.\nThe results from this call can be serialized using SerializeResult and passed to other players to \"prove\" that the current user owns specific items, without exposing the user's entire inventory.\nFor example, you could call this with the IDs of the user's currently equipped items and serialize this to a buffer, and then transmit this buffer to other players upon joining a game.\nNOTE: You must call DestroyResult on the provided inventory result when you are done with it.\n\n@param FSteamInventoryResult & ResultHandle - Returns a new inventory result handle.\n@param const TArray<FSteamItemInstanceID> & InstanceIDs - A list of the item instance ids to update the state of.\n@return bool - This function always returns true when called by a regular user, and always returns false when called from SteamGameServer. Returns a new result handle via pResultHandle." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemsByID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamworksInventorySubsystem, nullptr, "GetItemsByID", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemsByID_Statics::SteamworksInventorySubsystem_eventGetItemsByID_Parms), Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemsByID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemsByID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemsByID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemsByID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemsByID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemsByID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemsWithPrices_Statics
	{
		struct SteamworksInventorySubsystem_eventGetItemsWithPrices_Parms
		{
			TArray<FSteamItemPriceData> ItemData;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemData_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemsWithPrices_Statics::NewProp_ItemData_Inner = { "ItemData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSteamItemPriceData, METADATA_PARAMS(nullptr, 0) }; // 1342339049
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemsWithPrices_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksInventorySubsystem_eventGetItemsWithPrices_Parms, ItemData), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1342339049
	void Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemsWithPrices_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamworksInventorySubsystem_eventGetItemsWithPrices_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemsWithPrices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamworksInventorySubsystem_eventGetItemsWithPrices_Parms), &Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemsWithPrices_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemsWithPrices_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemsWithPrices_Statics::NewProp_ItemData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemsWithPrices_Statics::NewProp_ItemData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemsWithPrices_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemsWithPrices_Statics::Function_MetaDataParams[] = {
		{ "Category", "Steamworks|Inventory" },
		{ "Comment", "/**\n\x09 * After a successful call to RequestPrices, you can call this method to get all the pricing for applicable item definitions. Use the result of GetNumItemsWithPrices as the the size of the arrays that you pass in.\n\x09 *\n\x09 * @param TArray<FSteamItemPriceData> & ItemData - The array of item definition ids to populate\n\x09 * @return bool - true upon success, indicating that pArrayItemDefs and pPrices have been successfully filled with the item definition ids and prices of items that are for sale. false if the parameters are invalid\n\x09 */" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksInventorySubsystem.h" },
		{ "ToolTip", "After a successful call to RequestPrices, you can call this method to get all the pricing for applicable item definitions. Use the result of GetNumItemsWithPrices as the the size of the arrays that you pass in.\n\n@param TArray<FSteamItemPriceData> & ItemData - The array of item definition ids to populate\n@return bool - true upon success, indicating that pArrayItemDefs and pPrices have been successfully filled with the item definition ids and prices of items that are for sale. false if the parameters are invalid" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemsWithPrices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamworksInventorySubsystem, nullptr, "GetItemsWithPrices", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemsWithPrices_Statics::SteamworksInventorySubsystem_eventGetItemsWithPrices_Parms), Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemsWithPrices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemsWithPrices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemsWithPrices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemsWithPrices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemsWithPrices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemsWithPrices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamworksInventorySubsystem_GetNumItemsWithPrices_Statics
	{
		struct SteamworksInventorySubsystem_eventGetNumItemsWithPrices_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_GetNumItemsWithPrices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksInventorySubsystem_eventGetNumItemsWithPrices_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamworksInventorySubsystem_GetNumItemsWithPrices_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_GetNumItemsWithPrices_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamworksInventorySubsystem_GetNumItemsWithPrices_Statics::Function_MetaDataParams[] = {
		{ "Category", "Steamworks|Inventory" },
		{ "Comment", "/**\n\x09 * After a successful call to RequestPrices, this will return the number of item definitions with valid pricing.\n\x09 *\n\x09 * @return int32\n\x09 */" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksInventorySubsystem.h" },
		{ "ToolTip", "After a successful call to RequestPrices, this will return the number of item definitions with valid pricing.\n\n@return int32" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamworksInventorySubsystem_GetNumItemsWithPrices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamworksInventorySubsystem, nullptr, "GetNumItemsWithPrices", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamworksInventorySubsystem_GetNumItemsWithPrices_Statics::SteamworksInventorySubsystem_eventGetNumItemsWithPrices_Parms), Z_Construct_UFunction_USteamworksInventorySubsystem_GetNumItemsWithPrices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksInventorySubsystem_GetNumItemsWithPrices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamworksInventorySubsystem_GetNumItemsWithPrices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksInventorySubsystem_GetNumItemsWithPrices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamworksInventorySubsystem_GetNumItemsWithPrices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamworksInventorySubsystem_GetNumItemsWithPrices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultItemProperty_Statics
	{
		struct SteamworksInventorySubsystem_eventGetResultItemProperty_Parms
		{
			FSteamInventoryResult ResultHandle;
			int32 ItemIndex;
			FString PropertyName;
			FString Value;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ResultHandle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ItemIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultItemProperty_Statics::NewProp_ResultHandle = { "ResultHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksInventorySubsystem_eventGetResultItemProperty_Parms, ResultHandle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(nullptr, 0) }; // 631756268
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultItemProperty_Statics::NewProp_ItemIndex = { "ItemIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksInventorySubsystem_eventGetResultItemProperty_Parms, ItemIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultItemProperty_Statics::NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultItemProperty_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksInventorySubsystem_eventGetResultItemProperty_Parms, PropertyName), METADATA_PARAMS(Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultItemProperty_Statics::NewProp_PropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultItemProperty_Statics::NewProp_PropertyName_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultItemProperty_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksInventorySubsystem_eventGetResultItemProperty_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultItemProperty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamworksInventorySubsystem_eventGetResultItemProperty_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultItemProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamworksInventorySubsystem_eventGetResultItemProperty_Parms), &Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultItemProperty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultItemProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultItemProperty_Statics::NewProp_ResultHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultItemProperty_Statics::NewProp_ItemIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultItemProperty_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultItemProperty_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultItemProperty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultItemProperty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Steamworks|Inventory" },
		{ "Comment", "/**\n\x09 * Gets the dynamic properties from an item in an inventory result set.\n\x09 * Property names are always composed of ASCII letters, numbers, and/or underscores.\n\x09 * If the results do not fit in the given buffer, partial results may be copied.\n\x09 *\n\x09 * @param FSteamInventoryResult ResultHandle - The result handle containing the item to get the properties of.\n\x09 * @param int32 ItemIndex\n\x09 * @param const FString & PropertyName - The property name to get the value for. If you pass in NULL then pchValueBuffer will contain a comma-separated list of all the available names.\n\x09 * @param FString & Value - Returns the value associated with pchPropertyName.\n\x09 * @return bool - This returns true upon success; otherwise, false indicating that the inventory result handle was invalid or the provided index does not contain an item.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksInventorySubsystem.h" },
		{ "ToolTip", "Gets the dynamic properties from an item in an inventory result set.\nProperty names are always composed of ASCII letters, numbers, and/or underscores.\nIf the results do not fit in the given buffer, partial results may be copied.\n\n@param FSteamInventoryResult ResultHandle - The result handle containing the item to get the properties of.\n@param int32 ItemIndex\n@param const FString & PropertyName - The property name to get the value for. If you pass in NULL then pchValueBuffer will contain a comma-separated list of all the available names.\n@param FString & Value - Returns the value associated with pchPropertyName.\n@return bool - This returns true upon success; otherwise, false indicating that the inventory result handle was invalid or the provided index does not contain an item." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultItemProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamworksInventorySubsystem, nullptr, "GetResultItemProperty", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultItemProperty_Statics::SteamworksInventorySubsystem_eventGetResultItemProperty_Parms), Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultItemProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultItemProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultItemProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultItemProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultItemProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultItemProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultItems_Statics
	{
		struct SteamworksInventorySubsystem_eventGetResultItems_Parms
		{
			FSteamInventoryResult ResultHandle;
			TArray<FSteamItemDetails> ItemsArray;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ResultHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemsArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemsArray;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultItems_Statics::NewProp_ResultHandle = { "ResultHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksInventorySubsystem_eventGetResultItems_Parms, ResultHandle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(nullptr, 0) }; // 631756268
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultItems_Statics::NewProp_ItemsArray_Inner = { "ItemsArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSteamItemDetails, METADATA_PARAMS(nullptr, 0) }; // 826059081
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultItems_Statics::NewProp_ItemsArray = { "ItemsArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksInventorySubsystem_eventGetResultItems_Parms, ItemsArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 826059081
	void Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultItems_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamworksInventorySubsystem_eventGetResultItems_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamworksInventorySubsystem_eventGetResultItems_Parms), &Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultItems_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultItems_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultItems_Statics::NewProp_ResultHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultItems_Statics::NewProp_ItemsArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultItems_Statics::NewProp_ItemsArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultItems_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "Steamworks|Inventory" },
		{ "Comment", "/**\n\x09 * Get the items associated with an inventory result handle.\n\x09 *\n\x09 * @param FSteamInventoryResult ResultHandle - The inventory result handle to get the items for.\n\x09 * @param TArray<FSteamItemDetails> & ItemsArray - The details are returned by copying them into this array.\n\x09 * @return bool - true if the call was successful, otherwise false.\n\x09 * Potential failure reasons include:\n\x09 * resultHandle is invalid or the inventory result handle is not ready.\n\x09 * pOutItemsArray is not large enough to hold the array.\n\x09 * The user has no items.\n\x09 * If the call is successful then punItemDefIDsArraySize will contain the number of item definitions available.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksInventorySubsystem.h" },
		{ "ToolTip", "Get the items associated with an inventory result handle.\n\n@param FSteamInventoryResult ResultHandle - The inventory result handle to get the items for.\n@param TArray<FSteamItemDetails> & ItemsArray - The details are returned by copying them into this array.\n@return bool - true if the call was successful, otherwise false.\nPotential failure reasons include:\nresultHandle is invalid or the inventory result handle is not ready.\npOutItemsArray is not large enough to hold the array.\nThe user has no items.\nIf the call is successful then punItemDefIDsArraySize will contain the number of item definitions available." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamworksInventorySubsystem, nullptr, "GetResultItems", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultItems_Statics::SteamworksInventorySubsystem_eventGetResultItems_Parms), Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultStatus_Statics
	{
		struct SteamworksInventorySubsystem_eventGetResultStatus_Parms
		{
			FSteamInventoryResult ResultHandle;
			ESteamResult ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ResultHandle;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultStatus_Statics::NewProp_ResultHandle = { "ResultHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksInventorySubsystem_eventGetResultStatus_Parms, ResultHandle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(nullptr, 0) }; // 631756268
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksInventorySubsystem_eventGetResultStatus_Parms, ReturnValue), Z_Construct_UEnum_SteamworksExtension_ESteamResult, METADATA_PARAMS(nullptr, 0) }; // 2208837127
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultStatus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultStatus_Statics::NewProp_ResultHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultStatus_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Steamworks|Inventory" },
		{ "Comment", "/**\n\x09 * Find out the status of an asynchronous inventory result handle.\n\x09 * This is a polling equivalent to registering a callback function for SteamInventoryResultReady_t.\n\x09 *\n\x09 * @param FSteamInventoryResult ResultHandle - \x09The inventory result handle to get the status for.\n\x09 * @return ESteamResult - Whether the call was successful or not.\n\x09 * Possible values:\n\x09 *  k_EResultPending - Still in progress.\n\x09 *  k_EResultOK - Done, the request has completed successfully and the result is ready.\n\x09 *  k_EResultExpired - Done, result ready, maybe out of date (see DeserializeResult)\n\x09 *  k_EResultInvalidParam - ERROR: Invalid API call parameters.\n\x09 *  k_EResultServiceUnavailable - ERROR: Service temporarily down, you may retry later.\n\x09 *  k_EResultLimitExceeded - ERROR: Operation would exceed per-user inventory limits.\n\x09 *  k_EResultFail - ERROR: Generic error.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksInventorySubsystem.h" },
		{ "ToolTip", "Find out the status of an asynchronous inventory result handle.\nThis is a polling equivalent to registering a callback function for SteamInventoryResultReady_t.\n\n@param FSteamInventoryResult ResultHandle -  The inventory result handle to get the status for.\n@return ESteamResult - Whether the call was successful or not.\nPossible values:\n k_EResultPending - Still in progress.\n k_EResultOK - Done, the request has completed successfully and the result is ready.\n k_EResultExpired - Done, result ready, maybe out of date (see DeserializeResult)\n k_EResultInvalidParam - ERROR: Invalid API call parameters.\n k_EResultServiceUnavailable - ERROR: Service temporarily down, you may retry later.\n k_EResultLimitExceeded - ERROR: Operation would exceed per-user inventory limits.\n k_EResultFail - ERROR: Generic error." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamworksInventorySubsystem, nullptr, "GetResultStatus", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultStatus_Statics::SteamworksInventorySubsystem_eventGetResultStatus_Parms), Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultTimestamp_Statics
	{
		struct SteamworksInventorySubsystem_eventGetResultTimestamp_Parms
		{
			FSteamInventoryResult ResultHandle;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ResultHandle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultTimestamp_Statics::NewProp_ResultHandle = { "ResultHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksInventorySubsystem_eventGetResultTimestamp_Parms, ResultHandle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(nullptr, 0) }; // 631756268
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultTimestamp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksInventorySubsystem_eventGetResultTimestamp_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultTimestamp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultTimestamp_Statics::NewProp_ResultHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultTimestamp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultTimestamp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Steamworks|Inventory" },
		{ "Comment", "/**\n\x09 * Gets the server time at which the result was generated.\n\x09 *\n\x09 * @param FSteamInventoryResult ResultHandle - \x09The inventory result handle to get the timestamp for.\n\x09 * @return int32 - The timestamp is provided as Unix epoch time (Time since Jan 1st, 1970)\n\x09 * You can compare this value against ISteamUtils::GetServerRealTime to determine the age of the result.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksInventorySubsystem.h" },
		{ "ToolTip", "Gets the server time at which the result was generated.\n\n@param FSteamInventoryResult ResultHandle -  The inventory result handle to get the timestamp for.\n@return int32 - The timestamp is provided as Unix epoch time (Time since Jan 1st, 1970)\nYou can compare this value against ISteamUtils::GetServerRealTime to determine the age of the result." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultTimestamp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamworksInventorySubsystem, nullptr, "GetResultTimestamp", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultTimestamp_Statics::SteamworksInventorySubsystem_eventGetResultTimestamp_Parms), Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultTimestamp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultTimestamp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultTimestamp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultTimestamp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultTimestamp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultTimestamp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamworksInventorySubsystem_GrantPromoItems_Statics
	{
		struct SteamworksInventorySubsystem_eventGrantPromoItems_Parms
		{
			FSteamInventoryResult ResultHandle;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ResultHandle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_GrantPromoItems_Statics::NewProp_ResultHandle = { "ResultHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksInventorySubsystem_eventGrantPromoItems_Parms, ResultHandle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(nullptr, 0) }; // 631756268
	void Z_Construct_UFunction_USteamworksInventorySubsystem_GrantPromoItems_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamworksInventorySubsystem_eventGrantPromoItems_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_GrantPromoItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamworksInventorySubsystem_eventGrantPromoItems_Parms), &Z_Construct_UFunction_USteamworksInventorySubsystem_GrantPromoItems_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamworksInventorySubsystem_GrantPromoItems_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_GrantPromoItems_Statics::NewProp_ResultHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_GrantPromoItems_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamworksInventorySubsystem_GrantPromoItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "Steamworks|Inventory" },
		{ "Comment", "/**\n\x09 * Grant all potential one-time promotional items to the current user.\n\x09 * This can be safely called from the client because the items it can grant can be locked down via policies in the itemdefs. One of the primary scenarios for this call is to grant an item to users who also own a -\n\x09 * specific other game. If you want to grant specific promotional items rather than all of them see: AddPromoItem and AddPromoItems.\n\x09 * Any items that can be granted MUST have a \"promo\" attribute in their itemdef. That promo item list a set of APPIDs that the user must own to be granted this given item. This version will grant all items that have -\n\x09 * promo attributes specified for them in the configured item definitions. This allows adding additional promotional items without having to update the game client. For example the following will allow the item -\n\x09 * to be granted if the user owns either TF2 or SpaceWar.\n\x09 * promo: owns:440;owns:480\n\x09 * NOTE: You must call DestroyResult on the provided inventory result when you are done with it.\n\x09 *\n\x09 * @param FSteamInventoryResult & ResultHandle - Returns a new inventory result handle.\n\x09 * @return bool - This function always returns true when called by a regular user, and always returns false when called from SteamGameServer.\n\x09 * On success, the inventory result will include items which were granted, if any. If no items were granted because the user isn't eligible for any promotions, this is still considered a success.\n\x09 * Returns a new result handle via pResultHandle.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksInventorySubsystem.h" },
		{ "ToolTip", "Grant all potential one-time promotional items to the current user.\nThis can be safely called from the client because the items it can grant can be locked down via policies in the itemdefs. One of the primary scenarios for this call is to grant an item to users who also own a -\nspecific other game. If you want to grant specific promotional items rather than all of them see: AddPromoItem and AddPromoItems.\nAny items that can be granted MUST have a \"promo\" attribute in their itemdef. That promo item list a set of APPIDs that the user must own to be granted this given item. This version will grant all items that have -\npromo attributes specified for them in the configured item definitions. This allows adding additional promotional items without having to update the game client. For example the following will allow the item -\nto be granted if the user owns either TF2 or SpaceWar.\npromo: owns:440;owns:480\nNOTE: You must call DestroyResult on the provided inventory result when you are done with it.\n\n@param FSteamInventoryResult & ResultHandle - Returns a new inventory result handle.\n@return bool - This function always returns true when called by a regular user, and always returns false when called from SteamGameServer.\nOn success, the inventory result will include items which were granted, if any. If no items were granted because the user isn't eligible for any promotions, this is still considered a success.\nReturns a new result handle via pResultHandle." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamworksInventorySubsystem_GrantPromoItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamworksInventorySubsystem, nullptr, "GrantPromoItems", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamworksInventorySubsystem_GrantPromoItems_Statics::SteamworksInventorySubsystem_eventGrantPromoItems_Parms), Z_Construct_UFunction_USteamworksInventorySubsystem_GrantPromoItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksInventorySubsystem_GrantPromoItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamworksInventorySubsystem_GrantPromoItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksInventorySubsystem_GrantPromoItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamworksInventorySubsystem_GrantPromoItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamworksInventorySubsystem_GrantPromoItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamworksInventorySubsystem_LoadItemDefinitions_Statics
	{
		struct SteamworksInventorySubsystem_eventLoadItemDefinitions_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USteamworksInventorySubsystem_LoadItemDefinitions_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamworksInventorySubsystem_eventLoadItemDefinitions_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_LoadItemDefinitions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamworksInventorySubsystem_eventLoadItemDefinitions_Parms), &Z_Construct_UFunction_USteamworksInventorySubsystem_LoadItemDefinitions_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamworksInventorySubsystem_LoadItemDefinitions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_LoadItemDefinitions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamworksInventorySubsystem_LoadItemDefinitions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Steamworks|Inventory" },
		{ "Comment", "/**\n\x09 * Triggers an asynchronous load and refresh of item definitions.\n\x09 * Item definitions are a mapping of \"definition IDs\" (integers between 1 and 999999999) to a set of string properties. Some of these properties are required to display items on the Steam community web site.\n\x09 * Other properties can be defined by applications. There is no reason to call this function if your game hardcoded the numeric definition IDs (e.g. purple face mask = 20, blue weapon mod = 55) and does not allow for -\n\x09 * adding new item types without a client patch.\n\x09 * Triggers a SteamInventoryDefinitionUpdate_t callback.\n\x09 *\n\x09 * @return bool - This call will always return true.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksInventorySubsystem.h" },
		{ "ToolTip", "Triggers an asynchronous load and refresh of item definitions.\nItem definitions are a mapping of \"definition IDs\" (integers between 1 and 999999999) to a set of string properties. Some of these properties are required to display items on the Steam community web site.\nOther properties can be defined by applications. There is no reason to call this function if your game hardcoded the numeric definition IDs (e.g. purple face mask = 20, blue weapon mod = 55) and does not allow for -\nadding new item types without a client patch.\nTriggers a SteamInventoryDefinitionUpdate_t callback.\n\n@return bool - This call will always return true." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamworksInventorySubsystem_LoadItemDefinitions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamworksInventorySubsystem, nullptr, "LoadItemDefinitions", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamworksInventorySubsystem_LoadItemDefinitions_Statics::SteamworksInventorySubsystem_eventLoadItemDefinitions_Parms), Z_Construct_UFunction_USteamworksInventorySubsystem_LoadItemDefinitions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksInventorySubsystem_LoadItemDefinitions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamworksInventorySubsystem_LoadItemDefinitions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksInventorySubsystem_LoadItemDefinitions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamworksInventorySubsystem_LoadItemDefinitions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamworksInventorySubsystem_LoadItemDefinitions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamworksInventorySubsystem_SerializeResult_Statics
	{
		struct SteamworksInventorySubsystem_eventSerializeResult_Parms
		{
			FSteamInventoryResult ResultHandle;
			TArray<uint8> Buffer;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ResultHandle;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Buffer_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Buffer;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_SerializeResult_Statics::NewProp_ResultHandle = { "ResultHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksInventorySubsystem_eventSerializeResult_Parms, ResultHandle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(nullptr, 0) }; // 631756268
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_SerializeResult_Statics::NewProp_Buffer_Inner = { "Buffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_SerializeResult_Statics::NewProp_Buffer = { "Buffer", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksInventorySubsystem_eventSerializeResult_Parms, Buffer), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamworksInventorySubsystem_SerializeResult_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamworksInventorySubsystem_eventSerializeResult_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_SerializeResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamworksInventorySubsystem_eventSerializeResult_Parms), &Z_Construct_UFunction_USteamworksInventorySubsystem_SerializeResult_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamworksInventorySubsystem_SerializeResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_SerializeResult_Statics::NewProp_ResultHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_SerializeResult_Statics::NewProp_Buffer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_SerializeResult_Statics::NewProp_Buffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_SerializeResult_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamworksInventorySubsystem_SerializeResult_Statics::Function_MetaDataParams[] = {
		{ "Category", "Steamworks|Inventory" },
		{ "Comment", "/**\n\x09 * Serialized result sets contain a short signature which can't be forged or replayed across different game sessions.\n\x09 * A result set can be serialized on the local client, transmitted to other players via your game networking, and deserialized by the remote players. This is a secure way of preventing hackers from lying about -\n\x09 * posessing rare/high-value items. Serializes a result set with signature bytes to an output buffer. The size of a serialized result depends on the number items which are being serialized. When securely -\n\x09 * transmitting items to other players, it is recommended to use GetItemsByID first to create a minimal result set.\n\x09 * Results have a built-in timestamp which will be considered \"expired\" after an hour has elapsed. See DeserializeResult for expiration handling.\n\x09 * If this is set pOutBuffer to NULL then punOutBufferSize will be set to the buffer size required. So you can make the buffer and then call this again to fill it with the data.\n\x09 *\n\x09 * @param FSteamInventoryResult ResultHandle - The inventory result handle to serialize.\n\x09 * @param TArray<uint8> & Buffer - The buffer that the serialized result will be copied into.\n\x09 * @return bool - true upon success, indicating that punOutBufferSize has been successfully filled with the size of the buffer, and if pOutBuffer points to a buffer of sufficient size then it is filled out as well.\n\x09 * false under the following conditions:\n\x09 * The function was not called by a regular user. This call is not supported on GameServers.\n\x09 * resultHandle is invalid or the inventory result handle is not ready.\n\x09 * The value passed into punOutBufferSize was smaller then expected and pOutBuffer was not NULL.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksInventorySubsystem.h" },
		{ "ToolTip", "Serialized result sets contain a short signature which can't be forged or replayed across different game sessions.\nA result set can be serialized on the local client, transmitted to other players via your game networking, and deserialized by the remote players. This is a secure way of preventing hackers from lying about -\nposessing rare/high-value items. Serializes a result set with signature bytes to an output buffer. The size of a serialized result depends on the number items which are being serialized. When securely -\ntransmitting items to other players, it is recommended to use GetItemsByID first to create a minimal result set.\nResults have a built-in timestamp which will be considered \"expired\" after an hour has elapsed. See DeserializeResult for expiration handling.\nIf this is set pOutBuffer to NULL then punOutBufferSize will be set to the buffer size required. So you can make the buffer and then call this again to fill it with the data.\n\n@param FSteamInventoryResult ResultHandle - The inventory result handle to serialize.\n@param TArray<uint8> & Buffer - The buffer that the serialized result will be copied into.\n@return bool - true upon success, indicating that punOutBufferSize has been successfully filled with the size of the buffer, and if pOutBuffer points to a buffer of sufficient size then it is filled out as well.\nfalse under the following conditions:\nThe function was not called by a regular user. This call is not supported on GameServers.\nresultHandle is invalid or the inventory result handle is not ready.\nThe value passed into punOutBufferSize was smaller then expected and pOutBuffer was not NULL." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamworksInventorySubsystem_SerializeResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamworksInventorySubsystem, nullptr, "SerializeResult", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamworksInventorySubsystem_SerializeResult_Statics::SteamworksInventorySubsystem_eventSerializeResult_Parms), Z_Construct_UFunction_USteamworksInventorySubsystem_SerializeResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksInventorySubsystem_SerializeResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamworksInventorySubsystem_SerializeResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksInventorySubsystem_SerializeResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamworksInventorySubsystem_SerializeResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamworksInventorySubsystem_SerializeResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamworksInventorySubsystem_TransferItemQuantity_Statics
	{
		struct SteamworksInventorySubsystem_eventTransferItemQuantity_Parms
		{
			FSteamInventoryResult ResultHandle;
			FSteamItemInstanceID ItemIdSource;
			int32 Quantity;
			FSteamItemInstanceID ItemIdDest;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ResultHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemIdSource;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemIdDest;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_TransferItemQuantity_Statics::NewProp_ResultHandle = { "ResultHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksInventorySubsystem_eventTransferItemQuantity_Parms, ResultHandle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(nullptr, 0) }; // 631756268
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_TransferItemQuantity_Statics::NewProp_ItemIdSource = { "ItemIdSource", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksInventorySubsystem_eventTransferItemQuantity_Parms, ItemIdSource), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(nullptr, 0) }; // 1105309507
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_TransferItemQuantity_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksInventorySubsystem_eventTransferItemQuantity_Parms, Quantity), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_TransferItemQuantity_Statics::NewProp_ItemIdDest = { "ItemIdDest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksInventorySubsystem_eventTransferItemQuantity_Parms, ItemIdDest), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(nullptr, 0) }; // 1105309507
	void Z_Construct_UFunction_USteamworksInventorySubsystem_TransferItemQuantity_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamworksInventorySubsystem_eventTransferItemQuantity_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_TransferItemQuantity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamworksInventorySubsystem_eventTransferItemQuantity_Parms), &Z_Construct_UFunction_USteamworksInventorySubsystem_TransferItemQuantity_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamworksInventorySubsystem_TransferItemQuantity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_TransferItemQuantity_Statics::NewProp_ResultHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_TransferItemQuantity_Statics::NewProp_ItemIdSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_TransferItemQuantity_Statics::NewProp_Quantity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_TransferItemQuantity_Statics::NewProp_ItemIdDest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_TransferItemQuantity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamworksInventorySubsystem_TransferItemQuantity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Steamworks|Inventory" },
		{ "Comment", "/**\n\x09 * Transfer items between stacks within a user's inventory.\n\x09 * This can be used to stack, split, and moving items. The source and destination items must have the same itemdef id. To move items onto a destination stack specify the source, the quantity to move, and the -\n\x09 * destination item id. To split an existing stack, pass k_SteamItemInstanceIDInvalid into itemIdDest. A new item stack will be generated with the requested quantity.\n\x09 * NOTE: Tradability/marketability restrictions are copied along with transferred items. The destination stack receives the latest tradability/marketability date of any item in its composition.\n\x09 * NOTE: You must call DestroyResult on the provided inventory result when you are done with it.\n\x09 *\n\x09 * @param FSteamInventoryResult & ResultHandle - Returns a new inventory result handle.\n\x09 * @param FSteamItemInstanceID ItemIdSource - \x09The source item to transfer.\n\x09 * @param int32 Quantity - The quantity of the item that will be transfered from itemIdSource to itemIdDest.\n\x09 * @param FSteamItemInstanceID ItemIdDest - The destination item. You can pass k_SteamItemInstanceIDInvalid to split the source stack into a new item stack with the requested quantity.\n\x09 * @return bool - This function always returns true when called by a regular user, and always returns false when called from SteamGameServer.\n\x09 * Returns a new result handle via pResultHandle.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksInventorySubsystem.h" },
		{ "ToolTip", "Transfer items between stacks within a user's inventory.\nThis can be used to stack, split, and moving items. The source and destination items must have the same itemdef id. To move items onto a destination stack specify the source, the quantity to move, and the -\ndestination item id. To split an existing stack, pass k_SteamItemInstanceIDInvalid into itemIdDest. A new item stack will be generated with the requested quantity.\nNOTE: Tradability/marketability restrictions are copied along with transferred items. The destination stack receives the latest tradability/marketability date of any item in its composition.\nNOTE: You must call DestroyResult on the provided inventory result when you are done with it.\n\n@param FSteamInventoryResult & ResultHandle - Returns a new inventory result handle.\n@param FSteamItemInstanceID ItemIdSource -   The source item to transfer.\n@param int32 Quantity - The quantity of the item that will be transfered from itemIdSource to itemIdDest.\n@param FSteamItemInstanceID ItemIdDest - The destination item. You can pass k_SteamItemInstanceIDInvalid to split the source stack into a new item stack with the requested quantity.\n@return bool - This function always returns true when called by a regular user, and always returns false when called from SteamGameServer.\nReturns a new result handle via pResultHandle." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamworksInventorySubsystem_TransferItemQuantity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamworksInventorySubsystem, nullptr, "TransferItemQuantity", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamworksInventorySubsystem_TransferItemQuantity_Statics::SteamworksInventorySubsystem_eventTransferItemQuantity_Parms), Z_Construct_UFunction_USteamworksInventorySubsystem_TransferItemQuantity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksInventorySubsystem_TransferItemQuantity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamworksInventorySubsystem_TransferItemQuantity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksInventorySubsystem_TransferItemQuantity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamworksInventorySubsystem_TransferItemQuantity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamworksInventorySubsystem_TransferItemQuantity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamworksInventorySubsystem_TriggerItemDrop_Statics
	{
		struct SteamworksInventorySubsystem_eventTriggerItemDrop_Parms
		{
			FSteamInventoryResult ResultHandle;
			FSteamItemDef DropListDefinition;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ResultHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DropListDefinition;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_TriggerItemDrop_Statics::NewProp_ResultHandle = { "ResultHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksInventorySubsystem_eventTriggerItemDrop_Parms, ResultHandle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(nullptr, 0) }; // 631756268
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_TriggerItemDrop_Statics::NewProp_DropListDefinition = { "DropListDefinition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksInventorySubsystem_eventTriggerItemDrop_Parms, DropListDefinition), Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(nullptr, 0) }; // 4093002629
	void Z_Construct_UFunction_USteamworksInventorySubsystem_TriggerItemDrop_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamworksInventorySubsystem_eventTriggerItemDrop_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamworksInventorySubsystem_TriggerItemDrop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamworksInventorySubsystem_eventTriggerItemDrop_Parms), &Z_Construct_UFunction_USteamworksInventorySubsystem_TriggerItemDrop_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamworksInventorySubsystem_TriggerItemDrop_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_TriggerItemDrop_Statics::NewProp_ResultHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_TriggerItemDrop_Statics::NewProp_DropListDefinition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventorySubsystem_TriggerItemDrop_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamworksInventorySubsystem_TriggerItemDrop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Steamworks|Inventory" },
		{ "Comment", "/**\n\x09 * Trigger an item drop if the user has played a long enough period of time.\n\x09 * This period can be customized in two places:\n\x09 * At the application level within Inventory Service: Playtime Item Grants. This will automatically apply to all \"playtimegenerator\" items that do not specify any overrides.\n\x09 * In an individual \"playtimegenerator\" item definition. The settings would take precedence over any application-level settings.\n\x09 * Only item definitions which are marked as \"playtime item generators\" can be spawned.\n\x09 * Typically this function should be called at the end of a game or level or match or any point of significance in the game in which an item drop could occur. The granularity of the playtime generator settings is -\n\x09 * in minutes, so calling it more frequently than minutes is not useful and will be rate limited in the Steam client. The Steam servers will perform playtime accounting to prevent too-frequent drops. The servers -\n\x09 * will also manage adding the item to the players inventory.\n\x09 *\n\x09 * NOTE: You must call DestroyResult on the provided inventory result when you are done with it.\n\x09 *\n\x09 * @param FSteamInventoryResult & ResultHandle - Returns a new inventory result handle.\n\x09 * @param FSteamItemDef DropListDefinition - This must refer to an itemdefid of the type \"playtimegenerator\". See the inventory schema for more details.\n\x09 * @return bool - This function always returns true when called by a regular user, and always returns false when called from SteamGameServer.\n\x09 * Returns a new result handle via pResultHandle.\n\x09 * The inventory result returned by this function will be the new item granted if the player is eligible. If the user is not eligible then it will return an empty result ('[]').\n\x09 */" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksInventorySubsystem.h" },
		{ "ToolTip", "Trigger an item drop if the user has played a long enough period of time.\nThis period can be customized in two places:\nAt the application level within Inventory Service: Playtime Item Grants. This will automatically apply to all \"playtimegenerator\" items that do not specify any overrides.\nIn an individual \"playtimegenerator\" item definition. The settings would take precedence over any application-level settings.\nOnly item definitions which are marked as \"playtime item generators\" can be spawned.\nTypically this function should be called at the end of a game or level or match or any point of significance in the game in which an item drop could occur. The granularity of the playtime generator settings is -\nin minutes, so calling it more frequently than minutes is not useful and will be rate limited in the Steam client. The Steam servers will perform playtime accounting to prevent too-frequent drops. The servers -\nwill also manage adding the item to the players inventory.\n\nNOTE: You must call DestroyResult on the provided inventory result when you are done with it.\n\n@param FSteamInventoryResult & ResultHandle - Returns a new inventory result handle.\n@param FSteamItemDef DropListDefinition - This must refer to an itemdefid of the type \"playtimegenerator\". See the inventory schema for more details.\n@return bool - This function always returns true when called by a regular user, and always returns false when called from SteamGameServer.\nReturns a new result handle via pResultHandle.\nThe inventory result returned by this function will be the new item granted if the player is eligible. If the user is not eligible then it will return an empty result ('[]')." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamworksInventorySubsystem_TriggerItemDrop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamworksInventorySubsystem, nullptr, "TriggerItemDrop", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamworksInventorySubsystem_TriggerItemDrop_Statics::SteamworksInventorySubsystem_eventTriggerItemDrop_Parms), Z_Construct_UFunction_USteamworksInventorySubsystem_TriggerItemDrop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksInventorySubsystem_TriggerItemDrop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamworksInventorySubsystem_TriggerItemDrop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksInventorySubsystem_TriggerItemDrop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamworksInventorySubsystem_TriggerItemDrop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamworksInventorySubsystem_TriggerItemDrop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamworksInventorySubsystem);
	UClass* Z_Construct_UClass_USteamworksInventorySubsystem_NoRegister()
	{
		return USteamworksInventorySubsystem::StaticClass();
	}
	struct Z_Construct_UClass_USteamworksInventorySubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnSteamInventoryDefinitionUpdate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnSteamInventoryDefinitionUpdate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnSteamInventoryFullUpdate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnSteamInventoryFullUpdate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnSteamInventoryResultReady_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnSteamInventoryResultReady;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamworksInventorySubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamworksExtension,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamworksInventorySubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamworksInventorySubsystem_AddPromoItem, "AddPromoItem" }, // 4095740178
		{ &Z_Construct_UFunction_USteamworksInventorySubsystem_AddPromoItems, "AddPromoItems" }, // 3492694426
		{ &Z_Construct_UFunction_USteamworksInventorySubsystem_CacheInventoryValues, "CacheInventoryValues" }, // 1838128473
		{ &Z_Construct_UFunction_USteamworksInventorySubsystem_CheckHasOwnedViaCache, "CheckHasOwnedViaCache" }, // 4129194948
		{ &Z_Construct_UFunction_USteamworksInventorySubsystem_CheckResultSteamID, "CheckResultSteamID" }, // 4244452257
		{ &Z_Construct_UFunction_USteamworksInventorySubsystem_ConsumeItem, "ConsumeItem" }, // 1135515899
		{ &Z_Construct_UFunction_USteamworksInventorySubsystem_DeserializeResult, "DeserializeResult" }, // 2699014788
		{ &Z_Construct_UFunction_USteamworksInventorySubsystem_DestroyResult, "DestroyResult" }, // 2281232972
		{ &Z_Construct_UFunction_USteamworksInventorySubsystem_ExchangeItems, "ExchangeItems" }, // 300005814
		{ &Z_Construct_UFunction_USteamworksInventorySubsystem_GenerateItems, "GenerateItems" }, // 975517399
		{ &Z_Construct_UFunction_USteamworksInventorySubsystem_GetAllItems, "GetAllItems" }, // 3260770834
		{ &Z_Construct_UFunction_USteamworksInventorySubsystem_GetCachedBET, "GetCachedBET" }, // 3832772526
		{ &Z_Construct_UFunction_USteamworksInventorySubsystem_GetCachedISC, "GetCachedISC" }, // 360245775
		{ &Z_Construct_UFunction_USteamworksInventorySubsystem_GetCachedItem, "GetCachedItem" }, // 4265813538
		{ &Z_Construct_UFunction_USteamworksInventorySubsystem_GetCachedItems, "GetCachedItems" }, // 1553414776
		{ &Z_Construct_UFunction_USteamworksInventorySubsystem_GetCachedOwningItems, "GetCachedOwningItems" }, // 1840547598
		{ &Z_Construct_UFunction_USteamworksInventorySubsystem_GetEligiblePromoItemDefinitionIDs, "GetEligiblePromoItemDefinitionIDs" }, // 774890693
		{ &Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemDefinitionIDs, "GetItemDefinitionIDs" }, // 2301380244
		{ &Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemDefinitionProperty, "GetItemDefinitionProperty" }, // 4004261938
		{ &Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemPrice, "GetItemPrice" }, // 1745902770
		{ &Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemsByID, "GetItemsByID" }, // 700374613
		{ &Z_Construct_UFunction_USteamworksInventorySubsystem_GetItemsWithPrices, "GetItemsWithPrices" }, // 4282557088
		{ &Z_Construct_UFunction_USteamworksInventorySubsystem_GetNumItemsWithPrices, "GetNumItemsWithPrices" }, // 3604862
		{ &Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultItemProperty, "GetResultItemProperty" }, // 682668962
		{ &Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultItems, "GetResultItems" }, // 1383104657
		{ &Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultStatus, "GetResultStatus" }, // 3427762235
		{ &Z_Construct_UFunction_USteamworksInventorySubsystem_GetResultTimestamp, "GetResultTimestamp" }, // 3124870151
		{ &Z_Construct_UFunction_USteamworksInventorySubsystem_GrantPromoItems, "GrantPromoItems" }, // 2216130673
		{ &Z_Construct_UFunction_USteamworksInventorySubsystem_LoadItemDefinitions, "LoadItemDefinitions" }, // 2799808393
		{ &Z_Construct_UFunction_USteamworksInventorySubsystem_SerializeResult, "SerializeResult" }, // 2480895899
		{ &Z_Construct_UFunction_USteamworksInventorySubsystem_TransferItemQuantity, "TransferItemQuantity" }, // 667019268
		{ &Z_Construct_UFunction_USteamworksInventorySubsystem_TriggerItemDrop, "TriggerItemDrop" }, // 1268604838
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamworksInventorySubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Subsystems/SteamworksInventorySubsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksInventorySubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamworksInventorySubsystem_Statics::NewProp_m_OnSteamInventoryDefinitionUpdate_MetaData[] = {
		{ "Category", "Steamworks|Inventory|Delegates" },
		{ "Comment", "//\n// This callback is triggered whenever item definitions have been updated, \n// which could be in response to LoadItemDefinitions or any time new item definitions are available\n// (eg, from the dynamic addition of new item types while players are still in-game).\n//\n" },
		{ "DisplayName", "OnSteamInventoryDefinitionUpdate" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksInventorySubsystem.h" },
		{ "ToolTip", "This callback is triggered whenever item definitions have been updated,\nwhich could be in response to LoadItemDefinitions or any time new item definitions are available\n(eg, from the dynamic addition of new item types while players are still in-game)." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamworksInventorySubsystem_Statics::NewProp_m_OnSteamInventoryDefinitionUpdate = { "m_OnSteamInventoryDefinitionUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamworksInventorySubsystem, m_OnSteamInventoryDefinitionUpdate), Z_Construct_UDelegateFunction_SteamworksExtension_OnSteamInventoryDefinitionUpdateDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamworksInventorySubsystem_Statics::NewProp_m_OnSteamInventoryDefinitionUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamworksInventorySubsystem_Statics::NewProp_m_OnSteamInventoryDefinitionUpdate_MetaData)) }; // 2673544816
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamworksInventorySubsystem_Statics::NewProp_m_OnSteamInventoryFullUpdate_MetaData[] = {
		{ "Category", "Steamworks|Inventory|Delegates" },
		{ "Comment", "//\n// Triggered when GetAllItems successfully returns a result which is newer / fresher than the last known result.\n// It will not trigger if the inventory hasn't changed, or if results from two overlapping calls are\n// reversed in flight and the earlier result is already known to be stale/out-of-date.\n// The regular SteamInventoryResultReady_t callback will still be triggered immediately afterwards; this is an additional notification for your convenience.\n//\n" },
		{ "DisplayName", "OnSteamInventoryFullUpdate" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksInventorySubsystem.h" },
		{ "ToolTip", "Triggered when GetAllItems successfully returns a result which is newer / fresher than the last known result.\nIt will not trigger if the inventory hasn't changed, or if results from two overlapping calls are\nreversed in flight and the earlier result is already known to be stale/out-of-date.\nThe regular SteamInventoryResultReady_t callback will still be triggered immediately afterwards; this is an additional notification for your convenience." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamworksInventorySubsystem_Statics::NewProp_m_OnSteamInventoryFullUpdate = { "m_OnSteamInventoryFullUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamworksInventorySubsystem, m_OnSteamInventoryFullUpdate), Z_Construct_UDelegateFunction_SteamworksExtension_OnSteamInventoryFullUpdateDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamworksInventorySubsystem_Statics::NewProp_m_OnSteamInventoryFullUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamworksInventorySubsystem_Statics::NewProp_m_OnSteamInventoryFullUpdate_MetaData)) }; // 2357471856
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamworksInventorySubsystem_Statics::NewProp_m_OnSteamInventoryResultReady_MetaData[] = {
		{ "Category", "Steamworks|Inventory|Delegates" },
		{ "Comment", "//\n// This is fired whenever an inventory result transitions from k_EResultPending to any other completed state,\n// see GetResultStatus for the complete list of states. There will always be exactly one callback per handle.\n//\n" },
		{ "DisplayName", "OnSteamInventoryResultReady" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksInventorySubsystem.h" },
		{ "ToolTip", "This is fired whenever an inventory result transitions from k_EResultPending to any other completed state,\nsee GetResultStatus for the complete list of states. There will always be exactly one callback per handle." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamworksInventorySubsystem_Statics::NewProp_m_OnSteamInventoryResultReady = { "m_OnSteamInventoryResultReady", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamworksInventorySubsystem, m_OnSteamInventoryResultReady), Z_Construct_UDelegateFunction_SteamworksExtension_OnSteamInventoryResultReadyDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamworksInventorySubsystem_Statics::NewProp_m_OnSteamInventoryResultReady_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamworksInventorySubsystem_Statics::NewProp_m_OnSteamInventoryResultReady_MetaData)) }; // 2638588429
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamworksInventorySubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamworksInventorySubsystem_Statics::NewProp_m_OnSteamInventoryDefinitionUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamworksInventorySubsystem_Statics::NewProp_m_OnSteamInventoryFullUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamworksInventorySubsystem_Statics::NewProp_m_OnSteamInventoryResultReady,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamworksInventorySubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamworksInventorySubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamworksInventorySubsystem_Statics::ClassParams = {
		&USteamworksInventorySubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USteamworksInventorySubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USteamworksInventorySubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamworksInventorySubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamworksInventorySubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamworksInventorySubsystem()
	{
		if (!Z_Registration_Info_UClass_USteamworksInventorySubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamworksInventorySubsystem.OuterSingleton, Z_Construct_UClass_USteamworksInventorySubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamworksInventorySubsystem.OuterSingleton;
	}
	template<> STEAMWORKSEXTENSION_API UClass* StaticClass<USteamworksInventorySubsystem>()
	{
		return USteamworksInventorySubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamworksInventorySubsystem);
	struct Z_Construct_UDelegateFunction_SteamworksExtension_SteamInventoryRequestPricesCallbackPin__DelegateSignature_Statics
	{
		struct _Script_SteamworksExtension_eventSteamInventoryRequestPricesCallbackPin_Parms
		{
			ESteamResult Result;
			FString Currency;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Currency;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamworksExtension_SteamInventoryRequestPricesCallbackPin__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SteamworksExtension_SteamInventoryRequestPricesCallbackPin__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamworksExtension_eventSteamInventoryRequestPricesCallbackPin_Parms, Result), Z_Construct_UEnum_SteamworksExtension_ESteamResult, METADATA_PARAMS(nullptr, 0) }; // 2208837127
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SteamworksExtension_SteamInventoryRequestPricesCallbackPin__DelegateSignature_Statics::NewProp_Currency = { "Currency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamworksExtension_eventSteamInventoryRequestPricesCallbackPin_Parms, Currency), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamworksExtension_SteamInventoryRequestPricesCallbackPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamworksExtension_SteamInventoryRequestPricesCallbackPin__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamworksExtension_SteamInventoryRequestPricesCallbackPin__DelegateSignature_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamworksExtension_SteamInventoryRequestPricesCallbackPin__DelegateSignature_Statics::NewProp_Currency,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamworksExtension_SteamInventoryRequestPricesCallbackPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ================================================\n//   Steamworks Inventory Async Request Prices\n// ================================================\n" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksInventorySubsystem.h" },
		{ "ToolTip", "Steamworks Inventory Async Request Prices" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamworksExtension_SteamInventoryRequestPricesCallbackPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamworksExtension, nullptr, "SteamInventoryRequestPricesCallbackPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamworksExtension_SteamInventoryRequestPricesCallbackPin__DelegateSignature_Statics::_Script_SteamworksExtension_eventSteamInventoryRequestPricesCallbackPin_Parms), Z_Construct_UDelegateFunction_SteamworksExtension_SteamInventoryRequestPricesCallbackPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamworksExtension_SteamInventoryRequestPricesCallbackPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamworksExtension_SteamInventoryRequestPricesCallbackPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamworksExtension_SteamInventoryRequestPricesCallbackPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamworksExtension_SteamInventoryRequestPricesCallbackPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamworksExtension_SteamInventoryRequestPricesCallbackPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(USteamworksInventoryRequestPrices::execRequestItemsWithPrices)
	{
		P_GET_OBJECT(USteamworksInventorySubsystem,Z_Param_Subsystem);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamworksInventoryRequestPrices**)Z_Param__Result=USteamworksInventoryRequestPrices::RequestItemsWithPrices(Z_Param_Subsystem);
		P_NATIVE_END;
	}
	void USteamworksInventoryRequestPrices::StaticRegisterNativesUSteamworksInventoryRequestPrices()
	{
		UClass* Class = USteamworksInventoryRequestPrices::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RequestItemsWithPrices", &USteamworksInventoryRequestPrices::execRequestItemsWithPrices },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamworksInventoryRequestPrices_RequestItemsWithPrices_Statics
	{
		struct SteamworksInventoryRequestPrices_eventRequestItemsWithPrices_Parms
		{
			USteamworksInventorySubsystem* Subsystem;
			USteamworksInventoryRequestPrices* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Subsystem;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamworksInventoryRequestPrices_RequestItemsWithPrices_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksInventoryRequestPrices_eventRequestItemsWithPrices_Parms, Subsystem), Z_Construct_UClass_USteamworksInventorySubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamworksInventoryRequestPrices_RequestItemsWithPrices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksInventoryRequestPrices_eventRequestItemsWithPrices_Parms, ReturnValue), Z_Construct_UClass_USteamworksInventoryRequestPrices_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamworksInventoryRequestPrices_RequestItemsWithPrices_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventoryRequestPrices_RequestItemsWithPrices_Statics::NewProp_Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventoryRequestPrices_RequestItemsWithPrices_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamworksInventoryRequestPrices_RequestItemsWithPrices_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steamworks|Inventory" },
		{ "Comment", "//\n// Request prices for all item definitions that can be purchased in the user's local currency. \n// A SteamInventoryRequestPricesResult_t call result will be returned with the user's local currency code. After that,\n// you can call GetNumItemsWithPrices and GetItemsWithPrices to get prices for all the known item definitions, or GetItemPrice for a specific item definition.\n//\n" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksInventorySubsystem.h" },
		{ "ToolTip", "Request prices for all item definitions that can be purchased in the user's local currency.\nA SteamInventoryRequestPricesResult_t call result will be returned with the user's local currency code. After that,\nyou can call GetNumItemsWithPrices and GetItemsWithPrices to get prices for all the known item definitions, or GetItemPrice for a specific item definition." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamworksInventoryRequestPrices_RequestItemsWithPrices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamworksInventoryRequestPrices, nullptr, "RequestItemsWithPrices", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamworksInventoryRequestPrices_RequestItemsWithPrices_Statics::SteamworksInventoryRequestPrices_eventRequestItemsWithPrices_Parms), Z_Construct_UFunction_USteamworksInventoryRequestPrices_RequestItemsWithPrices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksInventoryRequestPrices_RequestItemsWithPrices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamworksInventoryRequestPrices_RequestItemsWithPrices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksInventoryRequestPrices_RequestItemsWithPrices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamworksInventoryRequestPrices_RequestItemsWithPrices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamworksInventoryRequestPrices_RequestItemsWithPrices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamworksInventoryRequestPrices);
	UClass* Z_Construct_UClass_USteamworksInventoryRequestPrices_NoRegister()
	{
		return USteamworksInventoryRequestPrices::StaticClass();
	}
	struct Z_Construct_UClass_USteamworksInventoryRequestPrices_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCallFailed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallFailed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnRequestComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRequestComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningSubsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OwningSubsystem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamworksInventoryRequestPrices_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamworksExtension,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamworksInventoryRequestPrices_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamworksInventoryRequestPrices_RequestItemsWithPrices, "RequestItemsWithPrices" }, // 3935231353
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamworksInventoryRequestPrices_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Subsystems/SteamworksInventorySubsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksInventorySubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamworksInventoryRequestPrices_Statics::NewProp_OnCallFailed_MetaData[] = {
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksInventorySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamworksInventoryRequestPrices_Statics::NewProp_OnCallFailed = { "OnCallFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamworksInventoryRequestPrices, OnCallFailed), Z_Construct_UDelegateFunction_SteamworksExtension_SteamInventoryRequestPricesCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamworksInventoryRequestPrices_Statics::NewProp_OnCallFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamworksInventoryRequestPrices_Statics::NewProp_OnCallFailed_MetaData)) }; // 2906827478
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamworksInventoryRequestPrices_Statics::NewProp_OnRequestComplete_MetaData[] = {
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksInventorySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamworksInventoryRequestPrices_Statics::NewProp_OnRequestComplete = { "OnRequestComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamworksInventoryRequestPrices, OnRequestComplete), Z_Construct_UDelegateFunction_SteamworksExtension_SteamInventoryRequestPricesCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamworksInventoryRequestPrices_Statics::NewProp_OnRequestComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamworksInventoryRequestPrices_Statics::NewProp_OnRequestComplete_MetaData)) }; // 2906827478
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamworksInventoryRequestPrices_Statics::NewProp_OwningSubsystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksInventorySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USteamworksInventoryRequestPrices_Statics::NewProp_OwningSubsystem = { "OwningSubsystem", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamworksInventoryRequestPrices, OwningSubsystem), Z_Construct_UClass_USteamworksInventorySubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USteamworksInventoryRequestPrices_Statics::NewProp_OwningSubsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamworksInventoryRequestPrices_Statics::NewProp_OwningSubsystem_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamworksInventoryRequestPrices_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamworksInventoryRequestPrices_Statics::NewProp_OnCallFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamworksInventoryRequestPrices_Statics::NewProp_OnRequestComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamworksInventoryRequestPrices_Statics::NewProp_OwningSubsystem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamworksInventoryRequestPrices_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamworksInventoryRequestPrices>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamworksInventoryRequestPrices_Statics::ClassParams = {
		&USteamworksInventoryRequestPrices::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USteamworksInventoryRequestPrices_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USteamworksInventoryRequestPrices_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamworksInventoryRequestPrices_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamworksInventoryRequestPrices_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamworksInventoryRequestPrices()
	{
		if (!Z_Registration_Info_UClass_USteamworksInventoryRequestPrices.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamworksInventoryRequestPrices.OuterSingleton, Z_Construct_UClass_USteamworksInventoryRequestPrices_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamworksInventoryRequestPrices.OuterSingleton;
	}
	template<> STEAMWORKSEXTENSION_API UClass* StaticClass<USteamworksInventoryRequestPrices>()
	{
		return USteamworksInventoryRequestPrices::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamworksInventoryRequestPrices);
	struct Z_Construct_UDelegateFunction_SteamworksExtension_SteamInventoryEligiblePromoItemDefIDsCallbackPin__DelegateSignature_Statics
	{
		struct _Script_SteamworksExtension_eventSteamInventoryEligiblePromoItemDefIDsCallbackPin_Parms
		{
			ESteamResult Result;
			TArray<FSteamItemDef> Items;
			int32 NumEligiblePromoItemDefs;
			bool bCachedData;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumEligiblePromoItemDefs;
		static void NewProp_bCachedData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCachedData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamworksExtension_SteamInventoryEligiblePromoItemDefIDsCallbackPin__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SteamworksExtension_SteamInventoryEligiblePromoItemDefIDsCallbackPin__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamworksExtension_eventSteamInventoryEligiblePromoItemDefIDsCallbackPin_Parms, Result), Z_Construct_UEnum_SteamworksExtension_ESteamResult, METADATA_PARAMS(nullptr, 0) }; // 2208837127
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamworksExtension_SteamInventoryEligiblePromoItemDefIDsCallbackPin__DelegateSignature_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(nullptr, 0) }; // 4093002629
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamworksExtension_SteamInventoryEligiblePromoItemDefIDsCallbackPin__DelegateSignature_Statics::NewProp_Items_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_SteamworksExtension_SteamInventoryEligiblePromoItemDefIDsCallbackPin__DelegateSignature_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamworksExtension_eventSteamInventoryEligiblePromoItemDefIDsCallbackPin_Parms, Items), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamworksExtension_SteamInventoryEligiblePromoItemDefIDsCallbackPin__DelegateSignature_Statics::NewProp_Items_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamworksExtension_SteamInventoryEligiblePromoItemDefIDsCallbackPin__DelegateSignature_Statics::NewProp_Items_MetaData)) }; // 4093002629
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamworksExtension_SteamInventoryEligiblePromoItemDefIDsCallbackPin__DelegateSignature_Statics::NewProp_NumEligiblePromoItemDefs = { "NumEligiblePromoItemDefs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamworksExtension_eventSteamInventoryEligiblePromoItemDefIDsCallbackPin_Parms, NumEligiblePromoItemDefs), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_SteamworksExtension_SteamInventoryEligiblePromoItemDefIDsCallbackPin__DelegateSignature_Statics::NewProp_bCachedData_SetBit(void* Obj)
	{
		((_Script_SteamworksExtension_eventSteamInventoryEligiblePromoItemDefIDsCallbackPin_Parms*)Obj)->bCachedData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamworksExtension_SteamInventoryEligiblePromoItemDefIDsCallbackPin__DelegateSignature_Statics::NewProp_bCachedData = { "bCachedData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_SteamworksExtension_eventSteamInventoryEligiblePromoItemDefIDsCallbackPin_Parms), &Z_Construct_UDelegateFunction_SteamworksExtension_SteamInventoryEligiblePromoItemDefIDsCallbackPin__DelegateSignature_Statics::NewProp_bCachedData_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamworksExtension_SteamInventoryEligiblePromoItemDefIDsCallbackPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamworksExtension_SteamInventoryEligiblePromoItemDefIDsCallbackPin__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamworksExtension_SteamInventoryEligiblePromoItemDefIDsCallbackPin__DelegateSignature_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamworksExtension_SteamInventoryEligiblePromoItemDefIDsCallbackPin__DelegateSignature_Statics::NewProp_Items_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamworksExtension_SteamInventoryEligiblePromoItemDefIDsCallbackPin__DelegateSignature_Statics::NewProp_Items,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamworksExtension_SteamInventoryEligiblePromoItemDefIDsCallbackPin__DelegateSignature_Statics::NewProp_NumEligiblePromoItemDefs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamworksExtension_SteamInventoryEligiblePromoItemDefIDsCallbackPin__DelegateSignature_Statics::NewProp_bCachedData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamworksExtension_SteamInventoryEligiblePromoItemDefIDsCallbackPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ================================================\n//   Steamworks Inventory Async Request Promo\n// ================================================\n" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksInventorySubsystem.h" },
		{ "ToolTip", "Steamworks Inventory Async Request Promo" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamworksExtension_SteamInventoryEligiblePromoItemDefIDsCallbackPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamworksExtension, nullptr, "SteamInventoryEligiblePromoItemDefIDsCallbackPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamworksExtension_SteamInventoryEligiblePromoItemDefIDsCallbackPin__DelegateSignature_Statics::_Script_SteamworksExtension_eventSteamInventoryEligiblePromoItemDefIDsCallbackPin_Parms), Z_Construct_UDelegateFunction_SteamworksExtension_SteamInventoryEligiblePromoItemDefIDsCallbackPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamworksExtension_SteamInventoryEligiblePromoItemDefIDsCallbackPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamworksExtension_SteamInventoryEligiblePromoItemDefIDsCallbackPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamworksExtension_SteamInventoryEligiblePromoItemDefIDsCallbackPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamworksExtension_SteamInventoryEligiblePromoItemDefIDsCallbackPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamworksExtension_SteamInventoryEligiblePromoItemDefIDsCallbackPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(USteamworksInventoryEligiblePromoItemDefIDs::execRequestEligiblePromoItemDefinitionsIDs)
	{
		P_GET_OBJECT(USteamworksInventorySubsystem,Z_Param_Subsystem);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UserId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamworksInventoryEligiblePromoItemDefIDs**)Z_Param__Result=USteamworksInventoryEligiblePromoItemDefIDs::RequestEligiblePromoItemDefinitionsIDs(Z_Param_Subsystem,Z_Param_UserId);
		P_NATIVE_END;
	}
	void USteamworksInventoryEligiblePromoItemDefIDs::StaticRegisterNativesUSteamworksInventoryEligiblePromoItemDefIDs()
	{
		UClass* Class = USteamworksInventoryEligiblePromoItemDefIDs::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RequestEligiblePromoItemDefinitionsIDs", &USteamworksInventoryEligiblePromoItemDefIDs::execRequestEligiblePromoItemDefinitionsIDs },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamworksInventoryEligiblePromoItemDefIDs_RequestEligiblePromoItemDefinitionsIDs_Statics
	{
		struct SteamworksInventoryEligiblePromoItemDefIDs_eventRequestEligiblePromoItemDefinitionsIDs_Parms
		{
			USteamworksInventorySubsystem* Subsystem;
			FUniqueNetIdRepl UserId;
			USteamworksInventoryEligiblePromoItemDefIDs* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Subsystem;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamworksInventoryEligiblePromoItemDefIDs_RequestEligiblePromoItemDefinitionsIDs_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksInventoryEligiblePromoItemDefIDs_eventRequestEligiblePromoItemDefinitionsIDs_Parms, Subsystem), Z_Construct_UClass_USteamworksInventorySubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamworksInventoryEligiblePromoItemDefIDs_RequestEligiblePromoItemDefinitionsIDs_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksInventoryEligiblePromoItemDefIDs_eventRequestEligiblePromoItemDefinitionsIDs_Parms, UserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 3508419189
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamworksInventoryEligiblePromoItemDefIDs_RequestEligiblePromoItemDefinitionsIDs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksInventoryEligiblePromoItemDefIDs_eventRequestEligiblePromoItemDefinitionsIDs_Parms, ReturnValue), Z_Construct_UClass_USteamworksInventoryEligiblePromoItemDefIDs_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamworksInventoryEligiblePromoItemDefIDs_RequestEligiblePromoItemDefinitionsIDs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventoryEligiblePromoItemDefIDs_RequestEligiblePromoItemDefinitionsIDs_Statics::NewProp_Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventoryEligiblePromoItemDefIDs_RequestEligiblePromoItemDefinitionsIDs_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventoryEligiblePromoItemDefIDs_RequestEligiblePromoItemDefinitionsIDs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamworksInventoryEligiblePromoItemDefIDs_RequestEligiblePromoItemDefinitionsIDs_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steamworks|Inventory" },
		{ "Comment", "//\n// Request the list of \"eligible\" promo items that can be manually granted to the given user.\n// These are promo items of type \"manual\" that won't be granted automatically. An example usage of this is an item that becomes available every week.\n// After calling this function you need to call GetEligiblePromoItemDefinitionIDs to get the actual item definition ids.\n//\n" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksInventorySubsystem.h" },
		{ "ToolTip", "Request the list of \"eligible\" promo items that can be manually granted to the given user.\nThese are promo items of type \"manual\" that won't be granted automatically. An example usage of this is an item that becomes available every week.\nAfter calling this function you need to call GetEligiblePromoItemDefinitionIDs to get the actual item definition ids." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamworksInventoryEligiblePromoItemDefIDs_RequestEligiblePromoItemDefinitionsIDs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamworksInventoryEligiblePromoItemDefIDs, nullptr, "RequestEligiblePromoItemDefinitionsIDs", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamworksInventoryEligiblePromoItemDefIDs_RequestEligiblePromoItemDefinitionsIDs_Statics::SteamworksInventoryEligiblePromoItemDefIDs_eventRequestEligiblePromoItemDefinitionsIDs_Parms), Z_Construct_UFunction_USteamworksInventoryEligiblePromoItemDefIDs_RequestEligiblePromoItemDefinitionsIDs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksInventoryEligiblePromoItemDefIDs_RequestEligiblePromoItemDefinitionsIDs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamworksInventoryEligiblePromoItemDefIDs_RequestEligiblePromoItemDefinitionsIDs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksInventoryEligiblePromoItemDefIDs_RequestEligiblePromoItemDefinitionsIDs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamworksInventoryEligiblePromoItemDefIDs_RequestEligiblePromoItemDefinitionsIDs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamworksInventoryEligiblePromoItemDefIDs_RequestEligiblePromoItemDefinitionsIDs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamworksInventoryEligiblePromoItemDefIDs);
	UClass* Z_Construct_UClass_USteamworksInventoryEligiblePromoItemDefIDs_NoRegister()
	{
		return USteamworksInventoryEligiblePromoItemDefIDs::StaticClass();
	}
	struct Z_Construct_UClass_USteamworksInventoryEligiblePromoItemDefIDs_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCallFailed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallFailed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnRequestComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRequestComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningSubsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OwningSubsystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserUniqueNetId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserUniqueNetId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamworksInventoryEligiblePromoItemDefIDs_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamworksExtension,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamworksInventoryEligiblePromoItemDefIDs_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamworksInventoryEligiblePromoItemDefIDs_RequestEligiblePromoItemDefinitionsIDs, "RequestEligiblePromoItemDefinitionsIDs" }, // 4195756948
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamworksInventoryEligiblePromoItemDefIDs_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Subsystems/SteamworksInventorySubsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksInventorySubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamworksInventoryEligiblePromoItemDefIDs_Statics::NewProp_OnCallFailed_MetaData[] = {
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksInventorySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamworksInventoryEligiblePromoItemDefIDs_Statics::NewProp_OnCallFailed = { "OnCallFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamworksInventoryEligiblePromoItemDefIDs, OnCallFailed), Z_Construct_UDelegateFunction_SteamworksExtension_SteamInventoryEligiblePromoItemDefIDsCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamworksInventoryEligiblePromoItemDefIDs_Statics::NewProp_OnCallFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamworksInventoryEligiblePromoItemDefIDs_Statics::NewProp_OnCallFailed_MetaData)) }; // 3395916124
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamworksInventoryEligiblePromoItemDefIDs_Statics::NewProp_OnRequestComplete_MetaData[] = {
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksInventorySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamworksInventoryEligiblePromoItemDefIDs_Statics::NewProp_OnRequestComplete = { "OnRequestComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamworksInventoryEligiblePromoItemDefIDs, OnRequestComplete), Z_Construct_UDelegateFunction_SteamworksExtension_SteamInventoryEligiblePromoItemDefIDsCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamworksInventoryEligiblePromoItemDefIDs_Statics::NewProp_OnRequestComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamworksInventoryEligiblePromoItemDefIDs_Statics::NewProp_OnRequestComplete_MetaData)) }; // 3395916124
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamworksInventoryEligiblePromoItemDefIDs_Statics::NewProp_OwningSubsystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksInventorySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USteamworksInventoryEligiblePromoItemDefIDs_Statics::NewProp_OwningSubsystem = { "OwningSubsystem", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamworksInventoryEligiblePromoItemDefIDs, OwningSubsystem), Z_Construct_UClass_USteamworksInventorySubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USteamworksInventoryEligiblePromoItemDefIDs_Statics::NewProp_OwningSubsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamworksInventoryEligiblePromoItemDefIDs_Statics::NewProp_OwningSubsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamworksInventoryEligiblePromoItemDefIDs_Statics::NewProp_UserUniqueNetId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksInventorySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USteamworksInventoryEligiblePromoItemDefIDs_Statics::NewProp_UserUniqueNetId = { "UserUniqueNetId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamworksInventoryEligiblePromoItemDefIDs, UserUniqueNetId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UClass_USteamworksInventoryEligiblePromoItemDefIDs_Statics::NewProp_UserUniqueNetId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamworksInventoryEligiblePromoItemDefIDs_Statics::NewProp_UserUniqueNetId_MetaData)) }; // 3508419189
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamworksInventoryEligiblePromoItemDefIDs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamworksInventoryEligiblePromoItemDefIDs_Statics::NewProp_OnCallFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamworksInventoryEligiblePromoItemDefIDs_Statics::NewProp_OnRequestComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamworksInventoryEligiblePromoItemDefIDs_Statics::NewProp_OwningSubsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamworksInventoryEligiblePromoItemDefIDs_Statics::NewProp_UserUniqueNetId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamworksInventoryEligiblePromoItemDefIDs_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamworksInventoryEligiblePromoItemDefIDs>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamworksInventoryEligiblePromoItemDefIDs_Statics::ClassParams = {
		&USteamworksInventoryEligiblePromoItemDefIDs::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USteamworksInventoryEligiblePromoItemDefIDs_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USteamworksInventoryEligiblePromoItemDefIDs_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamworksInventoryEligiblePromoItemDefIDs_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamworksInventoryEligiblePromoItemDefIDs_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamworksInventoryEligiblePromoItemDefIDs()
	{
		if (!Z_Registration_Info_UClass_USteamworksInventoryEligiblePromoItemDefIDs.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamworksInventoryEligiblePromoItemDefIDs.OuterSingleton, Z_Construct_UClass_USteamworksInventoryEligiblePromoItemDefIDs_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamworksInventoryEligiblePromoItemDefIDs.OuterSingleton;
	}
	template<> STEAMWORKSEXTENSION_API UClass* StaticClass<USteamworksInventoryEligiblePromoItemDefIDs>()
	{
		return USteamworksInventoryEligiblePromoItemDefIDs::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamworksInventoryEligiblePromoItemDefIDs);
	struct Z_Construct_UDelegateFunction_SteamworksExtension_SteamInventoryStartPurchaseCallbackPin__DelegateSignature_Statics
	{
		struct _Script_SteamworksExtension_eventSteamInventoryStartPurchaseCallbackPin_Parms
		{
			ESteamResult Result;
			int64 OrderID;
			int64 TransID;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_OrderID;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_TransID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamworksExtension_SteamInventoryStartPurchaseCallbackPin__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SteamworksExtension_SteamInventoryStartPurchaseCallbackPin__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamworksExtension_eventSteamInventoryStartPurchaseCallbackPin_Parms, Result), Z_Construct_UEnum_SteamworksExtension_ESteamResult, METADATA_PARAMS(nullptr, 0) }; // 2208837127
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_SteamworksExtension_SteamInventoryStartPurchaseCallbackPin__DelegateSignature_Statics::NewProp_OrderID = { "OrderID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamworksExtension_eventSteamInventoryStartPurchaseCallbackPin_Parms, OrderID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_SteamworksExtension_SteamInventoryStartPurchaseCallbackPin__DelegateSignature_Statics::NewProp_TransID = { "TransID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamworksExtension_eventSteamInventoryStartPurchaseCallbackPin_Parms, TransID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamworksExtension_SteamInventoryStartPurchaseCallbackPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamworksExtension_SteamInventoryStartPurchaseCallbackPin__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamworksExtension_SteamInventoryStartPurchaseCallbackPin__DelegateSignature_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamworksExtension_SteamInventoryStartPurchaseCallbackPin__DelegateSignature_Statics::NewProp_OrderID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamworksExtension_SteamInventoryStartPurchaseCallbackPin__DelegateSignature_Statics::NewProp_TransID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamworksExtension_SteamInventoryStartPurchaseCallbackPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ================================================\n//   Steamworks Inventory Async Start Purchase\n// ================================================\n" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksInventorySubsystem.h" },
		{ "ToolTip", "Steamworks Inventory Async Start Purchase" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamworksExtension_SteamInventoryStartPurchaseCallbackPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamworksExtension, nullptr, "SteamInventoryStartPurchaseCallbackPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamworksExtension_SteamInventoryStartPurchaseCallbackPin__DelegateSignature_Statics::_Script_SteamworksExtension_eventSteamInventoryStartPurchaseCallbackPin_Parms), Z_Construct_UDelegateFunction_SteamworksExtension_SteamInventoryStartPurchaseCallbackPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamworksExtension_SteamInventoryStartPurchaseCallbackPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamworksExtension_SteamInventoryStartPurchaseCallbackPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamworksExtension_SteamInventoryStartPurchaseCallbackPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamworksExtension_SteamInventoryStartPurchaseCallbackPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamworksExtension_SteamInventoryStartPurchaseCallbackPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(USteamworksInventoryStartPurchase::execStartPurchase)
	{
		P_GET_OBJECT(USteamworksInventorySubsystem,Z_Param_Subsystem);
		P_GET_TMAP_REF(FSteamItemDef,int32,Z_Param_Out_Items);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamworksInventoryStartPurchase**)Z_Param__Result=USteamworksInventoryStartPurchase::StartPurchase(Z_Param_Subsystem,Z_Param_Out_Items);
		P_NATIVE_END;
	}
	void USteamworksInventoryStartPurchase::StaticRegisterNativesUSteamworksInventoryStartPurchase()
	{
		UClass* Class = USteamworksInventoryStartPurchase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartPurchase", &USteamworksInventoryStartPurchase::execStartPurchase },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamworksInventoryStartPurchase_StartPurchase_Statics
	{
		struct SteamworksInventoryStartPurchase_eventStartPurchase_Parms
		{
			USteamworksInventorySubsystem* Subsystem;
			TMap<FSteamItemDef,int32> Items;
			USteamworksInventoryStartPurchase* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Subsystem;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Items_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Items;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamworksInventoryStartPurchase_StartPurchase_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksInventoryStartPurchase_eventStartPurchase_Parms, Subsystem), Z_Construct_UClass_USteamworksInventorySubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamworksInventoryStartPurchase_StartPurchase_Statics::NewProp_Items_ValueProp = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamworksInventoryStartPurchase_StartPurchase_Statics::NewProp_Items_Key_KeyProp = { "Items_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(nullptr, 0) }; // 4093002629
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamworksInventoryStartPurchase_StartPurchase_Statics::NewProp_Items_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USteamworksInventoryStartPurchase_StartPurchase_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksInventoryStartPurchase_eventStartPurchase_Parms, Items), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USteamworksInventoryStartPurchase_StartPurchase_Statics::NewProp_Items_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksInventoryStartPurchase_StartPurchase_Statics::NewProp_Items_MetaData)) }; // 4093002629
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamworksInventoryStartPurchase_StartPurchase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamworksInventoryStartPurchase_eventStartPurchase_Parms, ReturnValue), Z_Construct_UClass_USteamworksInventoryStartPurchase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamworksInventoryStartPurchase_StartPurchase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventoryStartPurchase_StartPurchase_Statics::NewProp_Subsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventoryStartPurchase_StartPurchase_Statics::NewProp_Items_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventoryStartPurchase_StartPurchase_Statics::NewProp_Items_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventoryStartPurchase_StartPurchase_Statics::NewProp_Items,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamworksInventoryStartPurchase_StartPurchase_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamworksInventoryStartPurchase_StartPurchase_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steamworks|Inventory" },
		{ "Comment", "//\n// Starts the purchase process for the user, given a \"shopping cart\" of item definitions that the user would like to buy. \n// The user will be prompted in the Steam Overlay to complete the purchase in their local currency, funding their Steam Wallet if necessary, etc.\n//\n" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksInventorySubsystem.h" },
		{ "ToolTip", "Starts the purchase process for the user, given a \"shopping cart\" of item definitions that the user would like to buy.\nThe user will be prompted in the Steam Overlay to complete the purchase in their local currency, funding their Steam Wallet if necessary, etc." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamworksInventoryStartPurchase_StartPurchase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamworksInventoryStartPurchase, nullptr, "StartPurchase", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamworksInventoryStartPurchase_StartPurchase_Statics::SteamworksInventoryStartPurchase_eventStartPurchase_Parms), Z_Construct_UFunction_USteamworksInventoryStartPurchase_StartPurchase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksInventoryStartPurchase_StartPurchase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamworksInventoryStartPurchase_StartPurchase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamworksInventoryStartPurchase_StartPurchase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamworksInventoryStartPurchase_StartPurchase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamworksInventoryStartPurchase_StartPurchase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamworksInventoryStartPurchase);
	UClass* Z_Construct_UClass_USteamworksInventoryStartPurchase_NoRegister()
	{
		return USteamworksInventoryStartPurchase::StaticClass();
	}
	struct Z_Construct_UClass_USteamworksInventoryStartPurchase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCallFailed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallFailed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningSubsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OwningSubsystem;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ItemsToPurchase_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemsToPurchase_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemsToPurchase_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ItemsToPurchase;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamworksInventoryStartPurchase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamworksExtension,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamworksInventoryStartPurchase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamworksInventoryStartPurchase_StartPurchase, "StartPurchase" }, // 3080282323
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamworksInventoryStartPurchase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Subsystems/SteamworksInventorySubsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksInventorySubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamworksInventoryStartPurchase_Statics::NewProp_OnCallFailed_MetaData[] = {
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksInventorySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamworksInventoryStartPurchase_Statics::NewProp_OnCallFailed = { "OnCallFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamworksInventoryStartPurchase, OnCallFailed), Z_Construct_UDelegateFunction_SteamworksExtension_SteamInventoryStartPurchaseCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamworksInventoryStartPurchase_Statics::NewProp_OnCallFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamworksInventoryStartPurchase_Statics::NewProp_OnCallFailed_MetaData)) }; // 4062644430
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamworksInventoryStartPurchase_Statics::NewProp_OnComplete_MetaData[] = {
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksInventorySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamworksInventoryStartPurchase_Statics::NewProp_OnComplete = { "OnComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamworksInventoryStartPurchase, OnComplete), Z_Construct_UDelegateFunction_SteamworksExtension_SteamInventoryStartPurchaseCallbackPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamworksInventoryStartPurchase_Statics::NewProp_OnComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamworksInventoryStartPurchase_Statics::NewProp_OnComplete_MetaData)) }; // 4062644430
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamworksInventoryStartPurchase_Statics::NewProp_OwningSubsystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksInventorySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USteamworksInventoryStartPurchase_Statics::NewProp_OwningSubsystem = { "OwningSubsystem", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamworksInventoryStartPurchase, OwningSubsystem), Z_Construct_UClass_USteamworksInventorySubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USteamworksInventoryStartPurchase_Statics::NewProp_OwningSubsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamworksInventoryStartPurchase_Statics::NewProp_OwningSubsystem_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USteamworksInventoryStartPurchase_Statics::NewProp_ItemsToPurchase_ValueProp = { "ItemsToPurchase", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USteamworksInventoryStartPurchase_Statics::NewProp_ItemsToPurchase_Key_KeyProp = { "ItemsToPurchase_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(nullptr, 0) }; // 4093002629
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamworksInventoryStartPurchase_Statics::NewProp_ItemsToPurchase_MetaData[] = {
		{ "ModuleRelativePath", "Public/Subsystems/SteamworksInventorySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USteamworksInventoryStartPurchase_Statics::NewProp_ItemsToPurchase = { "ItemsToPurchase", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamworksInventoryStartPurchase, ItemsToPurchase), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USteamworksInventoryStartPurchase_Statics::NewProp_ItemsToPurchase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamworksInventoryStartPurchase_Statics::NewProp_ItemsToPurchase_MetaData)) }; // 4093002629
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamworksInventoryStartPurchase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamworksInventoryStartPurchase_Statics::NewProp_OnCallFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamworksInventoryStartPurchase_Statics::NewProp_OnComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamworksInventoryStartPurchase_Statics::NewProp_OwningSubsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamworksInventoryStartPurchase_Statics::NewProp_ItemsToPurchase_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamworksInventoryStartPurchase_Statics::NewProp_ItemsToPurchase_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamworksInventoryStartPurchase_Statics::NewProp_ItemsToPurchase,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamworksInventoryStartPurchase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamworksInventoryStartPurchase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamworksInventoryStartPurchase_Statics::ClassParams = {
		&USteamworksInventoryStartPurchase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USteamworksInventoryStartPurchase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USteamworksInventoryStartPurchase_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamworksInventoryStartPurchase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamworksInventoryStartPurchase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamworksInventoryStartPurchase()
	{
		if (!Z_Registration_Info_UClass_USteamworksInventoryStartPurchase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamworksInventoryStartPurchase.OuterSingleton, Z_Construct_UClass_USteamworksInventoryStartPurchase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamworksInventoryStartPurchase.OuterSingleton;
	}
	template<> STEAMWORKSEXTENSION_API UClass* StaticClass<USteamworksInventoryStartPurchase>()
	{
		return USteamworksInventoryStartPurchase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamworksInventoryStartPurchase);
	struct Z_CompiledInDeferFile_FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USteamworksInventorySubsystem, USteamworksInventorySubsystem::StaticClass, TEXT("USteamworksInventorySubsystem"), &Z_Registration_Info_UClass_USteamworksInventorySubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamworksInventorySubsystem), 4151831755U) },
		{ Z_Construct_UClass_USteamworksInventoryRequestPrices, USteamworksInventoryRequestPrices::StaticClass, TEXT("USteamworksInventoryRequestPrices"), &Z_Registration_Info_UClass_USteamworksInventoryRequestPrices, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamworksInventoryRequestPrices), 326998079U) },
		{ Z_Construct_UClass_USteamworksInventoryEligiblePromoItemDefIDs, USteamworksInventoryEligiblePromoItemDefIDs::StaticClass, TEXT("USteamworksInventoryEligiblePromoItemDefIDs"), &Z_Registration_Info_UClass_USteamworksInventoryEligiblePromoItemDefIDs, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamworksInventoryEligiblePromoItemDefIDs), 928050901U) },
		{ Z_Construct_UClass_USteamworksInventoryStartPurchase, USteamworksInventoryStartPurchase::StaticClass, TEXT("USteamworksInventoryStartPurchase"), &Z_Registration_Info_UClass_USteamworksInventoryStartPurchase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamworksInventoryStartPurchase), 2099758000U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_1960520501(TEXT("/Script/SteamworksExtension"),
		Z_CompiledInDeferFile_FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
