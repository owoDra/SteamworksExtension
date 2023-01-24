// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSteamInventoryResult;
enum class ESteamResult : uint8;
struct FSteamItemDef;
struct FSteamItemDetails;
struct FUniqueNetIdRepl;
struct FSteamItemPriceData;
struct FSteamItemInstanceID;
struct FSteamItemDef; 
struct FSteamItemInstanceID; 
class USteamworksInventorySubsystem;
class USteamworksInventoryRequestPrices;
class USteamworksInventoryEligiblePromoItemDefIDs;
class USteamworksInventoryStartPurchase;
#ifdef STEAMWORKSEXTENSION_SteamworksInventorySubsystem_generated_h
#error "SteamworksInventorySubsystem.generated.h already included, missing '#pragma once' in SteamworksInventorySubsystem.h"
#endif
#define STEAMWORKSEXTENSION_SteamworksInventorySubsystem_generated_h

#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_28_DELEGATE \
static inline void FOnSteamInventoryDefinitionUpdateDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSteamInventoryDefinitionUpdateDelegate) \
{ \
	OnSteamInventoryDefinitionUpdateDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_29_DELEGATE \
struct _Script_SteamworksExtension_eventOnSteamInventoryFullUpdateDelegate_Parms \
{ \
	FSteamInventoryResult ResultHandle; \
}; \
static inline void FOnSteamInventoryFullUpdateDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSteamInventoryFullUpdateDelegate, FSteamInventoryResult ResultHandle) \
{ \
	_Script_SteamworksExtension_eventOnSteamInventoryFullUpdateDelegate_Parms Parms; \
	Parms.ResultHandle=ResultHandle; \
	OnSteamInventoryFullUpdateDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_30_DELEGATE \
struct _Script_SteamworksExtension_eventOnSteamInventoryResultReadyDelegate_Parms \
{ \
	FSteamInventoryResult ResultHandle; \
	ESteamResult Result; \
}; \
static inline void FOnSteamInventoryResultReadyDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSteamInventoryResultReadyDelegate, FSteamInventoryResult ResultHandle, ESteamResult Result) \
{ \
	_Script_SteamworksExtension_eventOnSteamInventoryResultReadyDelegate_Parms Parms; \
	Parms.ResultHandle=ResultHandle; \
	Parms.Result=Result; \
	OnSteamInventoryResultReadyDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_35_SPARSE_DATA
#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_35_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCacheInventoryValues); \
	DECLARE_FUNCTION(execCheckHasOwnedViaCache); \
	DECLARE_FUNCTION(execGetCachedOwningItems); \
	DECLARE_FUNCTION(execGetCachedItem); \
	DECLARE_FUNCTION(execGetCachedItems); \
	DECLARE_FUNCTION(execGetCachedBET); \
	DECLARE_FUNCTION(execGetCachedISC); \
	DECLARE_FUNCTION(execGetResultTimestamp); \
	DECLARE_FUNCTION(execGetResultStatus); \
	DECLARE_FUNCTION(execDestroyResult); \
	DECLARE_FUNCTION(execDeserializeResult); \
	DECLARE_FUNCTION(execSerializeResult); \
	DECLARE_FUNCTION(execCheckResultSteamID); \
	DECLARE_FUNCTION(execGetResultItems); \
	DECLARE_FUNCTION(execGetResultItemProperty); \
	DECLARE_FUNCTION(execGetNumItemsWithPrices); \
	DECLARE_FUNCTION(execGetItemsWithPrices); \
	DECLARE_FUNCTION(execGetItemPrice); \
	DECLARE_FUNCTION(execGetItemsByID); \
	DECLARE_FUNCTION(execGetItemDefinitionProperty); \
	DECLARE_FUNCTION(execGetItemDefinitionIDs); \
	DECLARE_FUNCTION(execGetEligiblePromoItemDefinitionIDs); \
	DECLARE_FUNCTION(execGetAllItems); \
	DECLARE_FUNCTION(execLoadItemDefinitions); \
	DECLARE_FUNCTION(execTriggerItemDrop); \
	DECLARE_FUNCTION(execTransferItemQuantity); \
	DECLARE_FUNCTION(execGrantPromoItems); \
	DECLARE_FUNCTION(execGenerateItems); \
	DECLARE_FUNCTION(execExchangeItems); \
	DECLARE_FUNCTION(execConsumeItem); \
	DECLARE_FUNCTION(execAddPromoItems); \
	DECLARE_FUNCTION(execAddPromoItem);


#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCacheInventoryValues); \
	DECLARE_FUNCTION(execCheckHasOwnedViaCache); \
	DECLARE_FUNCTION(execGetCachedOwningItems); \
	DECLARE_FUNCTION(execGetCachedItem); \
	DECLARE_FUNCTION(execGetCachedItems); \
	DECLARE_FUNCTION(execGetCachedBET); \
	DECLARE_FUNCTION(execGetCachedISC); \
	DECLARE_FUNCTION(execGetResultTimestamp); \
	DECLARE_FUNCTION(execGetResultStatus); \
	DECLARE_FUNCTION(execDestroyResult); \
	DECLARE_FUNCTION(execDeserializeResult); \
	DECLARE_FUNCTION(execSerializeResult); \
	DECLARE_FUNCTION(execCheckResultSteamID); \
	DECLARE_FUNCTION(execGetResultItems); \
	DECLARE_FUNCTION(execGetResultItemProperty); \
	DECLARE_FUNCTION(execGetNumItemsWithPrices); \
	DECLARE_FUNCTION(execGetItemsWithPrices); \
	DECLARE_FUNCTION(execGetItemPrice); \
	DECLARE_FUNCTION(execGetItemsByID); \
	DECLARE_FUNCTION(execGetItemDefinitionProperty); \
	DECLARE_FUNCTION(execGetItemDefinitionIDs); \
	DECLARE_FUNCTION(execGetEligiblePromoItemDefinitionIDs); \
	DECLARE_FUNCTION(execGetAllItems); \
	DECLARE_FUNCTION(execLoadItemDefinitions); \
	DECLARE_FUNCTION(execTriggerItemDrop); \
	DECLARE_FUNCTION(execTransferItemQuantity); \
	DECLARE_FUNCTION(execGrantPromoItems); \
	DECLARE_FUNCTION(execGenerateItems); \
	DECLARE_FUNCTION(execExchangeItems); \
	DECLARE_FUNCTION(execConsumeItem); \
	DECLARE_FUNCTION(execAddPromoItems); \
	DECLARE_FUNCTION(execAddPromoItem);


#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamworksInventorySubsystem(); \
	friend struct Z_Construct_UClass_USteamworksInventorySubsystem_Statics; \
public: \
	DECLARE_CLASS(USteamworksInventorySubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamworksExtension"), NO_API) \
	DECLARE_SERIALIZER(USteamworksInventorySubsystem)


#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUSteamworksInventorySubsystem(); \
	friend struct Z_Construct_UClass_USteamworksInventorySubsystem_Statics; \
public: \
	DECLARE_CLASS(USteamworksInventorySubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamworksExtension"), NO_API) \
	DECLARE_SERIALIZER(USteamworksInventorySubsystem)


#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamworksInventorySubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamworksInventorySubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamworksInventorySubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamworksInventorySubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamworksInventorySubsystem(USteamworksInventorySubsystem&&); \
	NO_API USteamworksInventorySubsystem(const USteamworksInventorySubsystem&); \
public:


#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_35_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamworksInventorySubsystem(USteamworksInventorySubsystem&&); \
	NO_API USteamworksInventorySubsystem(const USteamworksInventorySubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamworksInventorySubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamworksInventorySubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USteamworksInventorySubsystem)


#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_32_PROLOG
#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_35_SPARSE_DATA \
	FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_35_RPC_WRAPPERS \
	FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_35_INCLASS \
	FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_35_SPARSE_DATA \
	FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_35_INCLASS_NO_PURE_DECLS \
	FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMWORKSEXTENSION_API UClass* StaticClass<class USteamworksInventorySubsystem>();

#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_496_DELEGATE \
struct _Script_SteamworksExtension_eventSteamInventoryRequestPricesCallbackPin_Parms \
{ \
	ESteamResult Result; \
	FString Currency; \
}; \
static inline void FSteamInventoryRequestPricesCallbackPin_DelegateWrapper(const FMulticastScriptDelegate& SteamInventoryRequestPricesCallbackPin, ESteamResult Result, const FString& Currency) \
{ \
	_Script_SteamworksExtension_eventSteamInventoryRequestPricesCallbackPin_Parms Parms; \
	Parms.Result=Result; \
	Parms.Currency=Currency; \
	SteamInventoryRequestPricesCallbackPin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_501_SPARSE_DATA
#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_501_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRequestItemsWithPrices);


#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_501_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRequestItemsWithPrices);


#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_501_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamworksInventoryRequestPrices(); \
	friend struct Z_Construct_UClass_USteamworksInventoryRequestPrices_Statics; \
public: \
	DECLARE_CLASS(USteamworksInventoryRequestPrices, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamworksExtension"), NO_API) \
	DECLARE_SERIALIZER(USteamworksInventoryRequestPrices)


#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_501_INCLASS \
private: \
	static void StaticRegisterNativesUSteamworksInventoryRequestPrices(); \
	friend struct Z_Construct_UClass_USteamworksInventoryRequestPrices_Statics; \
public: \
	DECLARE_CLASS(USteamworksInventoryRequestPrices, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamworksExtension"), NO_API) \
	DECLARE_SERIALIZER(USteamworksInventoryRequestPrices)


#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_501_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamworksInventoryRequestPrices(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamworksInventoryRequestPrices) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamworksInventoryRequestPrices); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamworksInventoryRequestPrices); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamworksInventoryRequestPrices(USteamworksInventoryRequestPrices&&); \
	NO_API USteamworksInventoryRequestPrices(const USteamworksInventoryRequestPrices&); \
public:


#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_501_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamworksInventoryRequestPrices(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamworksInventoryRequestPrices(USteamworksInventoryRequestPrices&&); \
	NO_API USteamworksInventoryRequestPrices(const USteamworksInventoryRequestPrices&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamworksInventoryRequestPrices); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamworksInventoryRequestPrices); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamworksInventoryRequestPrices)


#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_498_PROLOG
#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_501_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_501_SPARSE_DATA \
	FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_501_RPC_WRAPPERS \
	FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_501_INCLASS \
	FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_501_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_501_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_501_SPARSE_DATA \
	FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_501_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_501_INCLASS_NO_PURE_DECLS \
	FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_501_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMWORKSEXTENSION_API UClass* StaticClass<class USteamworksInventoryRequestPrices>();

#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_533_DELEGATE \
struct _Script_SteamworksExtension_eventSteamInventoryEligiblePromoItemDefIDsCallbackPin_Parms \
{ \
	ESteamResult Result; \
	TArray<FSteamItemDef> Items; \
	int32 NumEligiblePromoItemDefs; \
	bool bCachedData; \
}; \
static inline void FSteamInventoryEligiblePromoItemDefIDsCallbackPin_DelegateWrapper(const FMulticastScriptDelegate& SteamInventoryEligiblePromoItemDefIDsCallbackPin, ESteamResult Result, TArray<FSteamItemDef> const& Items, int32 NumEligiblePromoItemDefs, bool bCachedData) \
{ \
	_Script_SteamworksExtension_eventSteamInventoryEligiblePromoItemDefIDsCallbackPin_Parms Parms; \
	Parms.Result=Result; \
	Parms.Items=Items; \
	Parms.NumEligiblePromoItemDefs=NumEligiblePromoItemDefs; \
	Parms.bCachedData=bCachedData ? true : false; \
	SteamInventoryEligiblePromoItemDefIDsCallbackPin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_538_SPARSE_DATA
#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_538_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRequestEligiblePromoItemDefinitionsIDs);


#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_538_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRequestEligiblePromoItemDefinitionsIDs);


#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_538_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamworksInventoryEligiblePromoItemDefIDs(); \
	friend struct Z_Construct_UClass_USteamworksInventoryEligiblePromoItemDefIDs_Statics; \
public: \
	DECLARE_CLASS(USteamworksInventoryEligiblePromoItemDefIDs, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamworksExtension"), NO_API) \
	DECLARE_SERIALIZER(USteamworksInventoryEligiblePromoItemDefIDs)


#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_538_INCLASS \
private: \
	static void StaticRegisterNativesUSteamworksInventoryEligiblePromoItemDefIDs(); \
	friend struct Z_Construct_UClass_USteamworksInventoryEligiblePromoItemDefIDs_Statics; \
public: \
	DECLARE_CLASS(USteamworksInventoryEligiblePromoItemDefIDs, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamworksExtension"), NO_API) \
	DECLARE_SERIALIZER(USteamworksInventoryEligiblePromoItemDefIDs)


#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_538_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamworksInventoryEligiblePromoItemDefIDs(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamworksInventoryEligiblePromoItemDefIDs) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamworksInventoryEligiblePromoItemDefIDs); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamworksInventoryEligiblePromoItemDefIDs); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamworksInventoryEligiblePromoItemDefIDs(USteamworksInventoryEligiblePromoItemDefIDs&&); \
	NO_API USteamworksInventoryEligiblePromoItemDefIDs(const USteamworksInventoryEligiblePromoItemDefIDs&); \
public:


#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_538_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamworksInventoryEligiblePromoItemDefIDs(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamworksInventoryEligiblePromoItemDefIDs(USteamworksInventoryEligiblePromoItemDefIDs&&); \
	NO_API USteamworksInventoryEligiblePromoItemDefIDs(const USteamworksInventoryEligiblePromoItemDefIDs&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamworksInventoryEligiblePromoItemDefIDs); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamworksInventoryEligiblePromoItemDefIDs); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamworksInventoryEligiblePromoItemDefIDs)


#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_535_PROLOG
#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_538_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_538_SPARSE_DATA \
	FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_538_RPC_WRAPPERS \
	FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_538_INCLASS \
	FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_538_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_538_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_538_SPARSE_DATA \
	FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_538_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_538_INCLASS_NO_PURE_DECLS \
	FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_538_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMWORKSEXTENSION_API UClass* StaticClass<class USteamworksInventoryEligiblePromoItemDefIDs>();

#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_573_DELEGATE \
struct _Script_SteamworksExtension_eventSteamInventoryStartPurchaseCallbackPin_Parms \
{ \
	ESteamResult Result; \
	int64 OrderID; \
	int64 TransID; \
}; \
static inline void FSteamInventoryStartPurchaseCallbackPin_DelegateWrapper(const FMulticastScriptDelegate& SteamInventoryStartPurchaseCallbackPin, ESteamResult Result, int64 OrderID, int64 TransID) \
{ \
	_Script_SteamworksExtension_eventSteamInventoryStartPurchaseCallbackPin_Parms Parms; \
	Parms.Result=Result; \
	Parms.OrderID=OrderID; \
	Parms.TransID=TransID; \
	SteamInventoryStartPurchaseCallbackPin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_578_SPARSE_DATA
#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_578_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStartPurchase);


#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_578_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStartPurchase);


#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_578_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamworksInventoryStartPurchase(); \
	friend struct Z_Construct_UClass_USteamworksInventoryStartPurchase_Statics; \
public: \
	DECLARE_CLASS(USteamworksInventoryStartPurchase, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamworksExtension"), NO_API) \
	DECLARE_SERIALIZER(USteamworksInventoryStartPurchase)


#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_578_INCLASS \
private: \
	static void StaticRegisterNativesUSteamworksInventoryStartPurchase(); \
	friend struct Z_Construct_UClass_USteamworksInventoryStartPurchase_Statics; \
public: \
	DECLARE_CLASS(USteamworksInventoryStartPurchase, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamworksExtension"), NO_API) \
	DECLARE_SERIALIZER(USteamworksInventoryStartPurchase)


#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_578_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamworksInventoryStartPurchase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamworksInventoryStartPurchase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamworksInventoryStartPurchase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamworksInventoryStartPurchase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamworksInventoryStartPurchase(USteamworksInventoryStartPurchase&&); \
	NO_API USteamworksInventoryStartPurchase(const USteamworksInventoryStartPurchase&); \
public:


#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_578_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamworksInventoryStartPurchase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamworksInventoryStartPurchase(USteamworksInventoryStartPurchase&&); \
	NO_API USteamworksInventoryStartPurchase(const USteamworksInventoryStartPurchase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamworksInventoryStartPurchase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamworksInventoryStartPurchase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamworksInventoryStartPurchase)


#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_575_PROLOG
#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_578_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_578_SPARSE_DATA \
	FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_578_RPC_WRAPPERS \
	FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_578_INCLASS \
	FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_578_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_578_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_578_SPARSE_DATA \
	FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_578_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_578_INCLASS_NO_PURE_DECLS \
	FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h_578_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMWORKSEXTENSION_API UClass* StaticClass<class USteamworksInventoryStartPurchase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_Subsystems_SteamworksInventorySubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
