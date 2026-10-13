using UnrealBuildTool;
public class CH4_1 : ModuleRules
{
    public CH4_1(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        PublicDependencyModuleNames.AddRange(new[] { "Core", "CoreUObject", "Engine", "InputCore", "UMG" });
        PrivateDependencyModuleNames.AddRange(new[] { "Slate", "SlateCore", "Json", "RenderCore", "RHI" });
        PublicIncludePaths.Add(ModuleDirectory);
    }
}
