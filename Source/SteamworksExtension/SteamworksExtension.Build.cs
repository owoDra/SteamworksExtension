// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SteamworksExtension : ModuleRules
{
	public SteamworksExtension(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
			});
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
			});
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
			});
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"OnlineSubsystem",
				"OnlineSubsystemUtils",
				"Steamworks"
			});


		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				"OnlineSubsystemSteam",
			});
	}
}
