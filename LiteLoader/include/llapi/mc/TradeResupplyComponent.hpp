/**
 * @file  TradeResupplyComponent.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TradeResupplyComponent.
 *
 */
class TradeResupplyComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRADERESUPPLYCOMPONENT
public:
    class TradeResupplyComponent& operator=(class TradeResupplyComponent const &) = delete;
    TradeResupplyComponent(class TradeResupplyComponent const &) = delete;
#endif

public:
    /**
     * @symbol ??0TradeResupplyComponent@@QEAA@XZ
     * @hash   535755987
     */
    MCAPI TradeResupplyComponent();
    /**
     * @symbol ?addAdditionalSaveData@TradeResupplyComponent@@QEBAXAEAVCompoundTag@@@Z
     * @hash   -1426991640
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @symbol ?initFromDefinition@TradeResupplyComponent@@QEAAXAEAVActor@@@Z
     * @hash   1560033562
     */
    MCAPI void initFromDefinition(class Actor &);
    /**
     * @symbol ?readAdditionalSaveData@TradeResupplyComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     * @hash   -2038048424
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @symbol ?reloadComponent@TradeResupplyComponent@@QEAAXAEAVActor@@@Z
     * @hash   288074572
     */
    MCAPI void reloadComponent(class Actor &);

};