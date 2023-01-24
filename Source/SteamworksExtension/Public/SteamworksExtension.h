// Copyright 2022 RutenStudio

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "Containers/Ticker.h"

DECLARE_LOG_CATEGORY_EXTERN(LogSteamworksExtension, Log, All);


// ================================================
//   Steamworks Extension Module
// ================================================
class FSteamworksExtensionModule : public IModuleInterface, public FTickerObjectBase
{
public:

	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	virtual bool Tick(float DeltaTime) override;


};
