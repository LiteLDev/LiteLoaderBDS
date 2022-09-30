/**
 * @file  ItemLockHelper.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemLockHelper.
 *
 */
class ItemLockHelper {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMLOCKHELPER
public:
    class ItemLockHelper& operator=(class ItemLockHelper const &) = delete;
    ItemLockHelper(class ItemLockHelper const &) = delete;
    ItemLockHelper() = delete;
#endif

public:
    /**
     * @hash   129142648
     * @symbol ?addItemLockMode@ItemLockHelper@@SA_NAEAVItemStackBase@@AEBVValue@Json@@@Z
     */
    MCAPI static bool addItemLockMode(class ItemStackBase &, class Json::Value const &);
    /**
     * @hash   -1642907846
     * @symbol ?addKeepOnDeath@ItemLockHelper@@SA_NAEAVItemStackBase@@AEBVValue@Json@@@Z
     */
    MCAPI static bool addKeepOnDeath(class ItemStackBase &, class Json::Value const &);
    /**
     * @hash   -436246456
     * @symbol ?canMoveItemSlots@ItemLockHelper@@SA_NAEBVActor@@AEBVItemStackBase@@@Z
     */
    MCAPI static bool canMoveItemSlots(class Actor const &, class ItemStackBase const &);
    /**
     * @hash   -778715545
     * @symbol ?getItemLockMode@ItemLockHelper@@SA?AW4ItemLockMode@@AEBVItemStackBase@@@Z
     */
    MCAPI static enum class ItemLockMode getItemLockMode(class ItemStackBase const &);
    /**
     * @hash   1873204127
     * @symbol ?isItemLocked@ItemLockHelper@@SA_NAEBVItemStackBase@@@Z
     */
    MCAPI static bool isItemLocked(class ItemStackBase const &);
    /**
     * @hash   1755631033
     * @symbol ?isItemLockedInSlot@ItemLockHelper@@SA_NAEBVItemStackBase@@@Z
     */
    MCAPI static bool isItemLockedInSlot(class ItemStackBase const &);
    /**
     * @hash   1183925010
     * @symbol ?shouldKeepOnDeath@ItemLockHelper@@SA_NAEBVActor@@AEBVItemStackBase@@@Z
     */
    MCAPI static bool shouldKeepOnDeath(class Actor const &, class ItemStackBase const &);
    /**
     * @hash   -1001781567
     * @symbol ?shouldKeepOnDeath@ItemLockHelper@@SA_NAEBVItemStackBase@@@Z
     */
    MCAPI static bool shouldKeepOnDeath(class ItemStackBase const &);

//private:
    /**
     * @hash   574477501
     * @symbol ?_parseItemLockMode@ItemLockHelper@@CA_NAEAVItemStackBase@@AEBVValue@Json@@@Z
     */
    MCAPI static bool _parseItemLockMode(class ItemStackBase &, class Json::Value const &);

private:

};