// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
using UnrealBuildTool;
using System.IO;
using System.Diagnostics;

namespace UnrealBuildTool.Rules
{
	public class Unreal_ROS : ModuleRules
	{
        private string ModulePath
        {
            get { return Path.GetDirectoryName(RulesCompiler.GetModuleFilename(this.GetType().Name)); }
        }

        private string ThirdPartyPath
        {
            get
            {
                return Path.GetFullPath(Path.Combine(ModulePath, "../../ThirdParty/"));
            }
        }
        public Unreal_ROS(TargetInfo Target)
		{
            //PrivateIncludePaths.AddRange(
            //	);

            PrivateDependencyModuleNames.AddRange(
            	new string[]
            	{
            		"Core",
                    "Networking",
                    "Sockets"
                }
            	);
            string rapidjson_path = Path.Combine(ThirdPartyPath, "rapidjson", "include");
            PublicIncludePaths.AddRange(new string[] { rapidjson_path });

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
