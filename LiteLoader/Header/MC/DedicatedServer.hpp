// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_DEDICATEDSERVER
#include "Extra/DedicatedServerAPI.hpp"
#undef EXTRA_INCLUDE_PART_DEDICATEDSERVER
class DedicatedServer {
#include "Extra/DedicatedServerAPI.hpp"
public:    /*
    inline void onNetworkMaxPlayersChanged(unsigned int a0){
        void (DedicatedServer::*rv)(unsigned int);
        *((void**)&rv) = dlsym("?onNetworkMaxPlayersChanged@DedicatedServer@@EEAAXI@Z");
        return (this->*rv)(std::forward<unsigned int>(a0));
    }
    inline bool isDedicatedServer() const{
        bool (DedicatedServer::*rv)() const;
        *((void**)&rv) = dlsym("?isDedicatedServer@DedicatedServer@@EEBA_NXZ");
        return (this->*rv)();
    }
    inline class Automation::AutomationClient& getAutomationClient() const{
        class Automation::AutomationClient& (DedicatedServer::*rv)() const;
        *((void**)&rv) = dlsym("?getAutomationClient@DedicatedServer@@EEBAAEAVAutomationClient@Automation@@XZ");
        return (this->*rv)();
    }
    inline class IGameModuleShared& getGameModule(){
        class IGameModuleShared& (DedicatedServer::*rv)();
        *((void**)&rv) = dlsym("?getGameModule@DedicatedServer@@EEAAAEAVIGameModuleShared@@XZ");
        return (this->*rv)();
    }
    inline class gsl::not_null<class Bedrock::NonOwnerPointer<class Minecraft> > getPrimaryMinecraft(){
        class gsl::not_null<class Bedrock::NonOwnerPointer<class Minecraft> > (DedicatedServer::*rv)();
        *((void**)&rv) = dlsym("?getPrimaryMinecraft@DedicatedServer@@EEAA?AV?$not_null@V?$NonOwnerPointer@VMinecraft@@@Bedrock@@@gsl@@XZ");
        return (this->*rv)();
    }
    inline bool isEduMode() const{
        bool (DedicatedServer::*rv)() const;
        *((void**)&rv) = dlsym("?isEduMode@DedicatedServer@@EEBA_NXZ");
        return (this->*rv)();
    }
    inline bool stop(){
        bool (DedicatedServer::*rv)();
        *((void**)&rv) = dlsym("?stop@DedicatedServer@@UEAA_NXZ");
        return (this->*rv)();
    }
    */
    MCAPI enum DedicatedServer::StartResult start(std::string const&);

protected:

private:
    MCAPI void initalizeAppConfigs();
    MCAPI void initializeLogging();
};