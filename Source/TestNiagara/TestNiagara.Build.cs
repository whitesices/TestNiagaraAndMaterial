// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TestNiagara : ModuleRules
{
	public TestNiagara(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" ,"GameplayAbilities" , "GameplayTasks" , "GameplayTags"});
	}
}
