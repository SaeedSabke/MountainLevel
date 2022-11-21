// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class codeing2 : ModuleRules
{
	public codeing2(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
