

using UnrealBuildTool;
using System.Collections.Generic;

public class Project_RedAndBlueEditorTarget : TargetRules
{
	public Project_RedAndBlueEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V4;

		ExtraModuleNames.AddRange( new string[] { "Project_RedAndBlue" } );
	}
}
