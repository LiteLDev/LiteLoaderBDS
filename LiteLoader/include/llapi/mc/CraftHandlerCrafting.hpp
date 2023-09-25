/**
 * @file  CraftHandlerCrafting.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "CraftHandlerBase.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CraftHandlerCrafting.
 *
 */
class CraftHandlerCrafting : public CraftHandlerBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CRAFTHANDLERCRAFTING
public:
    class CraftHandlerCrafting& operator=(class CraftHandlerCrafting const &) = delete;
    CraftHandlerCrafting(class CraftHandlerCrafting const &) = delete;
    CraftHandlerCrafting() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?handleConsumedItem\@CraftHandlerCrafting\@\@UEAA?AW4ItemStackNetResult\@\@W4ContainerEnumName\@\@EAEBVItemStack\@\@\@Z
     */
    virtual enum class ItemStackNetResult handleConsumedItem(enum class ContainerEnumName, unsigned char, class ItemStack const &);
    /**
     * @vftbl 2
     * @symbol ?preHandleAction\@CraftHandlerCrafting\@\@UEAA?AW4ItemStackNetResult\@\@W4ItemStackRequestActionType\@\@\@Z
     */
    virtual enum class ItemStackNetResult preHandleAction(enum class ItemStackRequestActionType);
    /**
     * @vftbl 4
     * @symbol ?_handleCraftAction\@CraftHandlerCrafting\@\@MEAA?AW4ItemStackNetResult\@\@AEBVItemStackRequestActionCraftBase\@\@\@Z
     */
    virtual enum class ItemStackNetResult _handleCraftAction(class ItemStackRequestActionCraftBase const &);
    /**
     * @vftbl 6
     * @symbol ?_getLevelRecipes\@CraftHandlerCrafting\@\@EEBAPEBVRecipes\@\@XZ
     */
    virtual class Recipes const * _getLevelRecipes() const;

//private:
    /**
     * @symbol ?_handleAutoCraft\@CraftHandlerCrafting\@\@AEAA?AW4ItemStackNetResult\@\@AEBVItemStackRequestActionCraftRecipeAuto\@\@\@Z
     */
    MCAPI enum class ItemStackNetResult _handleAutoCraft(class ItemStackRequestActionCraftRecipeAuto const &);
    /**
     * @symbol ?_handleCarefulRestoration\@CraftHandlerCrafting\@\@AEBAXAEBVItemInstance\@\@\@Z
     */
    MCAPI void _handleCarefulRestoration(class ItemInstance const &) const;
    /**
     * @symbol ?_handleCraftOutput\@CraftHandlerCrafting\@\@AEAA?AW4ItemStackNetResult\@\@AEBV?$ItemStackRequestActionCraft\@V?$TypedServerNetId\@URecipeNetIdTag\@\@I$0A\@\@\@$0M\@\@\@\@Z
     */
    MCAPI enum class ItemStackNetResult _handleCraftOutput(class ItemStackRequestActionCraft<class TypedServerNetId<struct RecipeNetIdTag, unsigned int, 0>, 12> const &);

private:

};
