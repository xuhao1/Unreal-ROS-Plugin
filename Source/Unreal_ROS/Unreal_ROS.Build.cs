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
        public bool LoadOpenCV(TargetInfo Target)
        {
            bool isLibrarySupported = false;

            if ((Target.Platform == UnrealTargetPlatform.Win64) || (Target.Platform == UnrealTargetPlatform.Win32))
            {
                isLibrarySupported = true;
                PublicIncludePaths.Add(Path.Combine(ThirdPartyPath, "opencv","include"));
                string PlatformString = (Target.Platform == UnrealTargetPlatform.Win64) ? "x64" : "x86";
                string LibrariesPath = Path.Combine(ThirdPartyPath, "opencv", PlatformString, "vc12", "lib");
                foreach (var file in Directory.EnumerateFiles(LibrariesPath, "*.lib", SearchOption.AllDirectories))
                {
                    PublicAdditionalLibraries.Add(file);
                    Debug.Print("Including Lib : " + file);
                }
            }
            else if(Target.Platform == UnrealTargetPlatform.Mac)
            {
                isLibrarySupported = true;
                PublicIncludePaths.Add("/usr/local/Cellar/opencv/2.4.12/include");
                string LibrariesPath = Path.Combine("/usr/local/Cellar/opencv/2.4.12", "lib");
				foreach (var file in Directory.EnumerateFiles(LibrariesPath, "*.dylib", SearchOption.AllDirectories))
                {
                    PublicAdditionalLibraries.Add(file);
                    Debug.Print("Including Lib : " + file);
                }
            }


            Debug.Print("Included Third Part : " + Path.Combine(ThirdPartyPath, "opencv"));
            return isLibrarySupported;
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

            System.Diagnostics.Debug.Write(rapidjson_path);
            PublicIncludePaths.AddRange(new string[] { rapidjson_path });
            PrivateIncludePaths.AddRange(new string[] { rapidjson_path });
			//LoadOpenCV(Target);

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
