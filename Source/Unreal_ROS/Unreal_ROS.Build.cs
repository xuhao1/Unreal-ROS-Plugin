// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

namespace UnrealBuildTool.Rules
{
	public class Unreal_ROS : ModuleRules
	{
		public Unreal_ROS(TargetInfo Target)
		{
			//PrivateIncludePaths.AddRange(
			//	);

			//PrivateDependencyModuleNames.AddRange(
			//	new string[]
			//	{
			//		"Core"
			//	}
			//	);

			if (UEBuildConfiguration.bBuildEditor == true)
			{
				PrivateDependencyModuleNames.Add("UnrealEd");
			}

        PrivateDependencyModuleNames.AddRange(
				new string[]
				{
					"Core",
					"CoreUObject",
					"Engine",
					"InputCore"
				}
				);


		}
	}
}
