// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_HOPPERBLOCKACTOR
#include "Extra/HopperBlockActorAPI.hpp"
#undef EXTRA_INCLUDE_PART_HOPPERBLOCKACTOR
class HopperBlockActor {
#include "Extra/HopperBlockActorAPI.hpp"
public:    /*
    inline void startOpen(class Player& a0){
        void (HopperBlockActor::*rv)(class Player&);
        *((void**)&rv) = dlsym("?startOpen@HopperBlockActor@@UEAAXAEAVPlayer@@@Z");
        return (this->*rv)(std::forward<class Player&>(a0));
    }
    inline void stopOpen(class Player& a0){
        void (HopperBlockActor::*rv)(class Player&);
        *((void**)&rv) = dlsym("?stopOpen@HopperBlockActor@@UEAAXAEAVPlayer@@@Z");
        return (this->*rv)(std::forward<class Player&>(a0));
    }
    inline int getContainerSize() const{
        int (HopperBlockActor::*rv)() const;
        *((void**)&rv) = dlsym("?getContainerSize@HopperBlockActor@@UEBAHXZ");
        return (this->*rv)();
    }
    inline int getMaxStackSize() const{
        int (HopperBlockActor::*rv)() const;
        *((void**)&rv) = dlsym("?getMaxStackSize@HopperBlockActor@@UEBAHXZ");
        return (this->*rv)();
    }
    inline std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource& a0){
        std::unique_ptr<class BlockActorDataPacket> (HopperBlockActor::*rv)(class BlockSource&);
        *((void**)&rv) = dlsym("?_getUpdatePacket@HopperBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0));
    }
    inline class Container* getContainer(){
        class Container* (HopperBlockActor::*rv)();
        *((void**)&rv) = dlsym("?getContainer@HopperBlockActor@@UEAAPEAVContainer@@XZ");
        return (this->*rv)();
    }
    inline class Container const* getContainer() const{
        class Container const* (HopperBlockActor::*rv)() const;
        *((void**)&rv) = dlsym("?getContainer@HopperBlockActor@@UEBAPEBVContainer@@XZ");
        return (this->*rv)();
    }
    inline void onMove(){
        void (HopperBlockActor::*rv)();
        *((void**)&rv) = dlsym("?onMove@HopperBlockActor@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void _onUpdatePacket(class CompoundTag const& a0, class BlockSource& a1){
        void (HopperBlockActor::*rv)(class CompoundTag const&, class BlockSource&);
        *((void**)&rv) = dlsym("?_onUpdatePacket@HopperBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z");
        return (this->*rv)(std::forward<class CompoundTag const&>(a0), std::forward<class BlockSource&>(a1));
    }
    inline class ItemStack const& getItem(int a0) const{
        class ItemStack const& (HopperBlockActor::*rv)(int) const;
        *((void**)&rv) = dlsym("?getItem@HopperBlockActor@@UEBAAEBVItemStack@@H@Z");
        return (this->*rv)(std::forward<int>(a0));
    }
    inline std::string getName() const{
        std::string (HopperBlockActor::*rv)() const;
        *((void**)&rv) = dlsym("?getName@HopperBlockActor@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ");
        return (this->*rv)();
    }
    inline void load(class Level& a0, class CompoundTag const& a1, class DataLoadHelper& a2){
        void (HopperBlockActor::*rv)(class Level&, class CompoundTag const&, class DataLoadHelper&);
        *((void**)&rv) = dlsym("?load@HopperBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z");
        return (this->*rv)(std::forward<class Level&>(a0), std::forward<class CompoundTag const&>(a1), std::forward<class DataLoadHelper&>(a2));
    }
    inline void onNeighborChanged(class BlockSource& a0, class BlockPos const& a1){
        void (HopperBlockActor::*rv)(class BlockSource&, class BlockPos const&);
        *((void**)&rv) = dlsym("?onNeighborChanged@HopperBlockActor@@UEAAXAEAVBlockSource@@AEBVBlockPos@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos const&>(a1));
    }
    inline bool save(class CompoundTag& a0) const{
        bool (HopperBlockActor::*rv)(class CompoundTag&) const;
        *((void**)&rv) = dlsym("?save@HopperBlockActor@@UEBA_NAEAVCompoundTag@@@Z");
        return (this->*rv)(std::forward<class CompoundTag&>(a0));
    }
    inline void serverInitItemStackIds(int a0, int a1, class std::function<void (int, class ItemStack const& )> a2){
        void (HopperBlockActor::*rv)(int, int, class std::function<void (int, class ItemStack const& )>);
        *((void**)&rv) = dlsym("?serverInitItemStackIds@HopperBlockActor@@UEAAXHHV?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z");
        return (this->*rv)(std::forward<int>(a0), std::forward<int>(a1), std::forward<class std::function<void (int, class ItemStack const& )>>(a2));
    }
    inline void setContainerChanged(int a0){
        void (HopperBlockActor::*rv)(int);
        *((void**)&rv) = dlsym("?setContainerChanged@HopperBlockActor@@UEAAXH@Z");
        return (this->*rv)(std::forward<int>(a0));
    }
    inline void setItem(int a0, class ItemStack const& a1){
        void (HopperBlockActor::*rv)(int, class ItemStack const&);
        *((void**)&rv) = dlsym("?setItem@HopperBlockActor@@UEAAXHAEBVItemStack@@@Z");
        return (this->*rv)(std::forward<int>(a0), std::forward<class ItemStack const&>(a1));
    }
    inline void tick(class BlockSource& a0){
        void (HopperBlockActor::*rv)(class BlockSource&);
        *((void**)&rv) = dlsym("?tick@HopperBlockActor@@UEAAXAEAVBlockSource@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0));
    }
    */
    MCAPI void checkForSmeltEverythingAchievement(class BlockSource&);
    MCAPI class FurnaceBlockActor* getAttachedFurnace(class BlockSource&);
    MCAPI bool isAttachedToChestAndFurnace(class BlockSource&);
    MCAPI void updateCooldownAfterMove(struct Tick const&, int);

protected:

private:
    MCAPI void _ensureTickingOrder(class BlockSource&, int);
    MCAPI void _tick(class BlockSource&, int);
    MCAPI bool isAttachedToContainerType(class BlockSource&, enum ContainerType);
    MCAPI bool isSourceOfContainerType(class BlockSource&, enum ContainerType);
};