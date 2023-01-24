// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamworksExtension/Public/SteamworksExtensionUtils.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamworksExtensionUtils() {}
// Cross Module References
	STEAMWORKSEXTENSION_API UClass* Z_Construct_UClass_USteamworksExtensionUtils_NoRegister();
	STEAMWORKSEXTENSION_API UClass* Z_Construct_UClass_USteamworksExtensionUtils();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SteamworksExtension();
// End Cross Module References
	void USteamworksExtensionUtils::StaticRegisterNativesUSteamworksExtensionUtils()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamworksExtensionUtils);
	UClass* Z_Construct_UClass_USteamworksExtensionUtils_NoRegister()
	{
		return USteamworksExtensionUtils::StaticClass();
	}
	struct Z_Construct_UClass_USteamworksExtensionUtils_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamworksExtensionUtils_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamworksExtension,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamworksExtensionUtils_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ================================================\n//   Steamworks Friends Extension Utilities\n// ================================================\n" },
		{ "IncludePath", "SteamworksExtensionUtils.h" },
		{ "ModuleRelativePath", "Public/SteamworksExtensionUtils.h" },
		{ "ToolTip", "Steamworks Friends Extension Utilities" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamworksExtensionUtils_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamworksExtensionUtils>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamworksExtensionUtils_Statics::ClassParams = {
		&USteamworksExtensionUtils::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamworksExtensionUtils_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamworksExtensionUtils_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamworksExtensionUtils()
	{
		if (!Z_Registration_Info_UClass_USteamworksExtensionUtils.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamworksExtensionUtils.OuterSingleton, Z_Construct_UClass_USteamworksExtensionUtils_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamworksExtensionUtils.OuterSingleton;
	}
	template<> STEAMWORKSEXTENSION_API UClass* StaticClass<USteamworksExtensionUtils>()
	{
		return USteamworksExtensionUtils::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamworksExtensionUtils);
	struct Z_CompiledInDeferFile_FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_SteamworksExtensionUtils_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_SteamworksExtensionUtils_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USteamworksExtensionUtils, USteamworksExtensionUtils::StaticClass, TEXT("USteamworksExtensionUtils"), &Z_Registration_Info_UClass_USteamworksExtensionUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamworksExtensionUtils), 41577810U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_SteamworksExtensionUtils_h_802967996(TEXT("/Script/SteamworksExtension"),
		Z_CompiledInDeferFile_FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_SteamworksExtensionUtils_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_SteamworksExtensionUtils_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
