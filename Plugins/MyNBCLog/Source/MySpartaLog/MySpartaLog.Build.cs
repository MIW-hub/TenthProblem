using UnrealBuildTool;

public class MySpartaLog : ModuleRules
{
	public MySpartaLog(ReadOnlyTargetRules Target) : base(Target)
	{
		PrivateDependencyModuleNames.AddRange(new string[] {"Core", "Engine", "CoreUObject", "InputCore" });
		PrivateDependencyModuleNames.AddRange(new string[] {  });
	}
}
