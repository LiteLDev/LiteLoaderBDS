/**
 * @file  VanillaGameModuleServer.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"
#include "VanillaSystemsRegistration.hpp"
#include "GameModuleServer.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class VanillaGameModuleServer.
 *
 */
class VanillaGameModuleServer : public GameModuleServer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLAGAMEMODULESERVER
public:
    class VanillaGameModuleServer& operator=(class VanillaGameModuleServer const &) = delete;
    VanillaGameModuleServer(class VanillaGameModuleServer const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?init\@VanillaGameModuleServer\@\@UEAAXAEAVServerInstance\@\@AEBV?$not_null\@V?$NonOwnerPointer\@VLevel\@\@\@Bedrock\@\@\@gsl\@\@\@Z
     */
    virtual void init(class ServerInstance &, class gsl::not_null<class Bedrock::NonOwnerPointer<class Level>> const &);
    /**
     * @vftbl 2
     * @symbol ?initializeBehaviorStack\@VanillaGameModuleServer\@\@UEAAXAEBVExperiments\@\@AEBV?$not_null\@V?$NonOwnerPointer\@VIResourcePackRepository\@\@\@Bedrock\@\@\@gsl\@\@AEAVResourcePackStack\@\@AEBVBaseGameVersion\@\@\@Z
     */
    virtual void initializeBehaviorStack(class Experiments const &, class gsl::not_null<class Bedrock::NonOwnerPointer<class IResourcePackRepository>> const &, class ResourcePackStack &, class BaseGameVersion const &);
    /**
     * @vftbl 3
     * @symbol ?configureLevel\@VanillaGameModuleServer\@\@UEAAXAEBV?$not_null\@V?$NonOwnerPointer\@VLevel\@\@\@Bedrock\@\@\@gsl\@\@AEBVExperiments\@\@AEAVResourcePackManager\@\@AEBVBaseGameVersion\@\@\@Z
     */
    virtual void configureLevel(class gsl::not_null<class Bedrock::NonOwnerPointer<class Level>> const &, class Experiments const &, class ResourcePackManager &, class BaseGameVersion const &);
    /**
     * @vftbl 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl 5
     * @symbol ?configureDocumentation\@VanillaGameModuleServer\@\@UEAAXAEAVIGameModuleDocumentation\@\@VItemRegistryRef\@\@\@Z
     */
    virtual void configureDocumentation(class IGameModuleDocumentation &, class ItemRegistryRef);
    /**
     * @vftbl 6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl 7
     * @symbol ?setupCommands\@VanillaGameModuleServer\@\@UEAAXAEAVCommandRegistry\@\@\@Z
     */
    virtual void setupCommands(class CommandRegistry &);
    /**
     * @vftbl 8
     * @symbol ?configureServerNetworkHandler\@VanillaGameModuleServer\@\@UEAAXAEAVServerInstance\@\@V?$not_null\@V?$NonOwnerPointer\@VServerNetworkHandler\@\@\@Bedrock\@\@\@gsl\@\@\@Z
     */
    virtual void configureServerNetworkHandler(class ServerInstance &, class gsl::not_null<class Bedrock::NonOwnerPointer<class ServerNetworkHandler>>);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_VANILLAGAMEMODULESERVER
    /**
     * @symbol ?configureNewPlayer\@VanillaGameModuleServer\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void configureNewPlayer(class Player &);
    /**
     * @symbol ?tick\@VanillaGameModuleServer\@\@UEAAXXZ
     */
    MCVAPI void tick();
#endif
    /**
     * @symbol ??0VanillaGameModuleServer\@\@QEAA\@XZ
     */
    MCAPI VanillaGameModuleServer();

//private:
    /**
     * @symbol ?_configureEntitySystems\@VanillaGameModuleServer\@\@AEAAXAEBV?$not_null\@V?$NonOwnerPointer\@VLevel\@\@\@Bedrock\@\@\@gsl\@\@AEAVResourcePackManager\@\@AEBVExperiments\@\@AEBURegistrationOptions\@VanillaSystemsRegistration\@\@\@Z
     */
    MCAPI void _configureEntitySystems(class gsl::not_null<class Bedrock::NonOwnerPointer<class Level>> const &, class ResourcePackManager &, class Experiments const &, struct VanillaSystemsRegistration::RegistrationOptions const &);
    /**
     * @symbol ?_configureWorldGen\@VanillaGameModuleServer\@\@AEAAXAEAVIWorldRegistriesProvider\@\@AEBUSpawnSettings\@\@AEBVExperiments\@\@AEAVResourcePackManager\@\@AEBVBaseGameVersion\@\@\@Z
     */
    MCAPI void _configureWorldGen(class IWorldRegistriesProvider &, struct SpawnSettings const &, class Experiments const &, class ResourcePackManager &, class BaseGameVersion const &);
    /**
     * @symbol ?_registerListeners\@VanillaGameModuleServer\@\@AEAAXAEBV?$not_null\@V?$NonOwnerPointer\@VLevel\@\@\@Bedrock\@\@\@gsl\@\@_N\@Z
     */
    MCAPI void _registerListeners(class gsl::not_null<class Bedrock::NonOwnerPointer<class Level>> const &, bool);

private:

};
