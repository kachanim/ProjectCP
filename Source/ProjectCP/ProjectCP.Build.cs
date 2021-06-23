// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ProjectCP : ModuleRules
{
	public ProjectCP(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicIncludePaths.AddRange(
            new string[]{
                "ProjectCP",
                "ProjectCP/Engine",
                "ProjectCP/Pawn",
                "ProjectCP/GameMode",
                "ProjectCP/Singletons",
        });

        PublicDependencyModuleNames.AddRange(
            new string[] {
                "Core",
                "CoreUObject",
                "Engine",
                "NavigationSystem",
                "AIModule",
                "ApplicationCore",
            }
        );
    }
}
