// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TenthProblem : ModuleRules
{
	public TenthProblem(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput"});
	}
}
