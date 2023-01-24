// Copyright 2022 RutenStudio

#include "SteamworksExtension.h"

#include "SteamworksAPI.h"

DEFINE_LOG_CATEGORY(LogSteamworksExtension);


#define LOCTEXT_NAMESPACE "FSteamworksExtensionModule"

void FSteamworksExtensionModule::StartupModule()
{	
	if (UObjectInitialized())
	{
		/*if (!SteamAPI_Init())
		{
			UE_LOG(LogSteamworksExtension, Error, TEXT("Steam API Initialize Failed"));
		}*/
		
	}
}

void FSteamworksExtensionModule::ShutdownModule()
{
	if (UObjectInitialized())
	{
		SteamAPI_Shutdown();

	}
}

bool FSteamworksExtensionModule::Tick(float DeltaTime)
{
	SteamAPI_RunCallbacks();

	return true;
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FSteamworksExtensionModule, SteamworksExtension)