// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class DevUnrealV1 : ModuleRules
{
	public DevUnrealV1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
