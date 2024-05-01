

using UnrealBuildTool;
using System.Collections.Generic;

public class Project_RedAndBlueTarget : TargetRules
{
	public Project_RedAndBlueTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V4;

		ExtraModuleNames.AddRange( new string[] { "Project_RedAndBlue" } );
	}
}
