#include "CH4_1.h"
#include "Modules/ModuleManager.h"
#if WITH_DEV_AUTOMATION_TESTS
void MNBStartNetworkProbe();
void MNBStopNetworkProbe();
#endif
class FMNBGameModule : public FDefaultGameModuleImpl
{
public:
    virtual void StartupModule() override
    {
#if WITH_DEV_AUTOMATION_TESTS
        MNBStartNetworkProbe();
#endif
    }
    virtual void ShutdownModule() override
    {
#if WITH_DEV_AUTOMATION_TESTS
        MNBStopNetworkProbe();
#endif
    }
};
IMPLEMENT_PRIMARY_GAME_MODULE(FMNBGameModule, CH4_1, "CH4_1");
