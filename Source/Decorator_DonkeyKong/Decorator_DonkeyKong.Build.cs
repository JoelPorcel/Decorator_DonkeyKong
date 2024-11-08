// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Decorator_DonkeyKong : ModuleRules
{
	public Decorator_DonkeyKong(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
	}
}
