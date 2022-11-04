/**
 * @file  CraftableCompounds.hpp
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
 * @brief MC class CraftableCompounds.
 *
 */
class CraftableCompounds {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CRAFTABLECOMPOUNDS
public:
    class CraftableCompounds& operator=(class CraftableCompounds const &) = delete;
    CraftableCompounds(class CraftableCompounds const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -557685096
     */
    virtual ~CraftableCompounds();
    /**
     * @vftbl  1
     * @symbol ?_registerCompound@CraftableCompounds@@MEAAXAEBV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@AEBVItemStack@@W4LabTableReactionType@@W4CompoundContainerType@@@Z
     * @hash   1118140872
     */
    virtual void _registerCompound(std::vector<class ItemStack> const &, class ItemStack const &, enum class LabTableReactionType, enum class CompoundContainerType);
    /**
     * @symbol ??0CraftableCompounds@@QEAA@XZ
     * @hash   856654234
     */
    MCAPI CraftableCompounds();
    /**
     * @symbol ?getComponents@CraftableCompounds@@QEBAPEBV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@AEBVItemDescriptor@@@Z
     * @hash   -1350686400
     */
    MCAPI std::vector<class ItemStack> const * getComponents(class ItemDescriptor const &) const;
    /**
     * @symbol ?getCompound@CraftableCompounds@@QEAAAEBVItemStack@@AEBV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@@Z
     * @hash   -277420807
     */
    MCAPI class ItemStack const & getCompound(std::vector<class ItemStack> const &);
    /**
     * @symbol ?getReaction@CraftableCompounds@@QEAA?AW4LabTableReactionType@@AEBV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@@Z
     * @hash   -1479709617
     */
    MCAPI enum class LabTableReactionType getReaction(std::vector<class ItemStack> const &);
    /**
     * @symbol ?registerCompounds@CraftableCompounds@@QEAAXXZ
     * @hash   57056499
     */
    MCAPI void registerCompounds();

//protected:
    /**
     * @symbol ?_getCompoundId@CraftableCompounds@@IEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@3@@Z
     * @hash   1997312127
     */
    MCAPI std::string _getCompoundId(std::vector<class ItemStack> const &);
    /**
     * @symbol ?_registerCompound@CraftableCompounds@@IEAAXAEBV?$vector@UChemistryIngredient@@V?$allocator@UChemistryIngredient@@@std@@@std@@AEBVItemStack@@W4LabTableReactionType@@W4CompoundContainerType@@@Z
     * @hash   -1235027135
     */
    MCAPI void _registerCompound(std::vector<struct ChemistryIngredient> const &, class ItemStack const &, enum class LabTableReactionType, enum class CompoundContainerType);
    /**
     * @symbol ?_registerCompound@CraftableCompounds@@IEAAXAEBV?$vector@UChemistryIngredient@@V?$allocator@UChemistryIngredient@@@std@@@std@@W4CompoundType@@W4LabTableReactionType@@W4CompoundContainerType@@H@Z
     * @hash   71463739
     */
    MCAPI void _registerCompound(std::vector<struct ChemistryIngredient> const &, enum class CompoundType, enum class LabTableReactionType, enum class CompoundContainerType, int);

protected:

};