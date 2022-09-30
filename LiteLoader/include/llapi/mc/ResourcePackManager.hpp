/**
 * @file  ResourcePackManager.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ResourcePackManager.
 *
 */
class ResourcePackManager {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESOURCEPACKMANAGER
public:
    class ResourcePackManager& operator=(class ResourcePackManager const &) = delete;
    ResourcePackManager(class ResourcePackManager const &) = delete;
    ResourcePackManager() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ResourcePackManager();
    /**
     * @hash   -1979472439
     * @vftbl  1
     * @symbol ?load@ResourcePackManager@@UEBA_NAEBVResourceLocation@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual bool load(class ResourceLocation const &, std::string &) const;
    /**
     * @hash   1101379412
     * @vftbl  2
     * @symbol ?load@ResourcePackManager@@UEBA_NAEBVResourceLocation@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z
     */
    virtual bool load(class ResourceLocation const &, std::string &, std::vector<std::string> const &) const;
    /**
     * @hash   -1205429046
     * @vftbl  3
     * @symbol ?load@ResourcePackManager@@UEBA_NAEBVResourceLocationPair@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z
     */
    virtual bool load(class ResourceLocationPair const &, std::string &, std::vector<std::string> const &) const;
    /**
     * @hash   1816440088
     * @vftbl  4
     * @symbol ?loadAllVersionsOf@ResourcePackManager@@UEBA?AV?$vector@VLoadedResourceData@@V?$allocator@VLoadedResourceData@@@std@@@std@@AEBVResourceLocation@@@Z
     */
    virtual std::vector<class LoadedResourceData> loadAllVersionsOf(class ResourceLocation const &) const;
    /**
     * @hash   -1714936676
     * @vftbl  5
     * @symbol ?isInStreamableLocation@ResourcePackManager@@UEBA_NAEBVResourceLocation@@@Z
     */
    virtual bool isInStreamableLocation(class ResourceLocation const &) const;
    /**
     * @hash   -885129271
     * @vftbl  6
     * @symbol ?isInStreamableLocation@ResourcePackManager@@UEBA_NAEBVResourceLocation@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
     */
    virtual bool isInStreamableLocation(class ResourceLocation const &, std::vector<std::string> const &) const;
    /**
     * @hash   -1902958695
     * @vftbl  7
     * @symbol ?getPath@ResourcePackManager@@UEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@AEBVResourceLocation@@@Z
     */
    virtual class Core::PathBuffer<std::string> getPath(class ResourceLocation const &) const;
    /**
     * @hash   -18431892
     * @vftbl  8
     * @symbol ?getPath@ResourcePackManager@@UEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@AEBVResourceLocation@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
     */
    virtual class Core::PathBuffer<std::string> getPath(class ResourceLocation const &, std::vector<std::string> const &) const;
    /**
     * @hash   157094429
     * @vftbl  9
     * @symbol ?getPathContainingResource@ResourcePackManager@@UEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@AEBVResourceLocation@@@Z
     */
    virtual class Core::PathBuffer<std::string> getPathContainingResource(class ResourceLocation const &) const;
    /**
     * @hash   -1267397158
     * @vftbl  10
     * @symbol ?getPathContainingResource@ResourcePackManager@@UEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@AEBVResourceLocation@@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
     */
    virtual class Core::PathBuffer<std::string> getPathContainingResource(class ResourceLocation const &, std::vector<std::string>) const;
    /**
     * @hash   1189035425
     * @vftbl  11
     * @symbol ?getPackStackIndexOfResource@ResourcePackManager@@UEBA?AU?$pair@HAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@AEBVResourceLocation@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@@Z
     */
    virtual struct std::pair<int, std::string const &> getPackStackIndexOfResource(class ResourceLocation const &, std::vector<std::string> const &) const;
    /**
     * @hash   -375261843
     * @vftbl  12
     * @symbol ?hasCapability@ResourcePackManager@@UEBA_NV?$basic_string_span@$$CBD$0?0@gsl@@@Z
     */
    virtual bool hasCapability(class gsl::basic_string_span<char const, -1>) const;
    /**
     * @hash   -1700801194
     * @symbol ??0ResourcePackManager@@QEAA@V?$function@$$A6A?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ@std@@AEBV?$not_null@V?$NonOwnerPointer@$$CBVIContentTierManager@@@Bedrock@@@gsl@@_N@Z
     */
    MCAPI ResourcePackManager(class std::function<class Core::PathBuffer<std::string> (void)>, class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentTierManager const>> const &, bool);
    /**
     * @hash   -912899647
     * @symbol ?clearStack@ResourcePackManager@@QEAAXW4ResourcePackStackType@@_N@Z
     */
    MCAPI void clearStack(enum class ResourcePackStackType, bool);
    /**
     * @hash   2111185405
     * @symbol ?composeFullStack@ResourcePackManager@@QEBAHAEAVResourcePackStack@@AEBV2@11@Z
     */
    MCAPI int composeFullStack(class ResourcePackStack &, class ResourcePackStack const &, class ResourcePackStack const &, class ResourcePackStack const &) const;
    /**
     * @hash   -2134660862
     * @symbol ?getFullStackMinEngineVersion@ResourcePackManager@@QEBA?AVSemVersion@@XZ
     */
    MCAPI class SemVersion getFullStackMinEngineVersion() const;
    /**
     * @hash   1062202009
     * @symbol ?getPackSourceReport@ResourcePackManager@@QEBAPEBVPackSourceReport@@XZ
     */
    MCAPI class PackSourceReport const * getPackSourceReport() const;
    /**
     * @hash   504238993
     * @symbol ?getResourcesOfGroup@ResourcePackManager@@QEBA?AV?$vector@V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@V?$allocator@V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
     */
    MCAPI std::vector<class Core::PathBuffer<std::string>> getResourcesOfGroup(std::string const &) const;
    /**
     * @hash   -229434088
     * @symbol ?getResourcesOfGroup@ResourcePackManager@@QEBA?AV?$vector@V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@V?$allocator@V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@@std@@@std@@AEBVPackInstance@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
     */
    MCAPI std::vector<class Core::PathBuffer<std::string>> getResourcesOfGroup(class PackInstance const &, std::string const &) const;
    /**
     * @hash   1107803889
     * @symbol ?getStack@ResourcePackManager@@QEBAAEBVResourcePackStack@@W4ResourcePackStackType@@@Z
     */
    MCAPI class ResourcePackStack const & getStack(enum class ResourcePackStackType) const;
    /**
     * @hash   827969961
     * @symbol ?handlePendingStackChanges@ResourcePackManager@@QEAAXXZ
     */
    MCAPI void handlePendingStackChanges();
    /**
     * @hash   775686185
     * @symbol ?hasResource@ResourcePackManager@@QEBA_NAEBVResourceLocation@@@Z
     */
    MCAPI bool hasResource(class ResourceLocation const &) const;
    /**
     * @hash   1785635656
     * @symbol ?loadAllVersionsOf@ResourcePackManager@@QEBA_NAEBVResourceLocation@@AEAVResourcePackMergeStrategy@@@Z
     */
    MCAPI bool loadAllVersionsOf(class ResourceLocation const &, class ResourcePackMergeStrategy &) const;
    /**
     * @hash   2035958000
     * @symbol ?registerResourcePackListener@ResourcePackManager@@QEAAXAEAVResourcePackListener@@@Z
     */
    MCAPI void registerResourcePackListener(class ResourcePackListener &);
    /**
     * @hash   -1111702210
     * @symbol ?setPackSourceReport@ResourcePackManager@@QEAAX$$QEAVPackSourceReport@@@Z
     */
    MCAPI void setPackSourceReport(class PackSourceReport &&);
    /**
     * @hash   -613842425
     * @symbol ?setStack@ResourcePackManager@@QEAA_NV?$unique_ptr@VResourcePackStack@@U?$default_delete@VResourcePackStack@@@std@@@std@@W4ResourcePackStackType@@_N@Z
     */
    MCAPI bool setStack(std::unique_ptr<class ResourcePackStack>, enum class ResourcePackStackType, bool);
    /**
     * @hash   -845971072
     * @symbol ?unRegisterResourcePackListener@ResourcePackManager@@QEAAXAEAVResourcePackListener@@@Z
     */
    MCAPI void unRegisterResourcePackListener(class ResourcePackListener &);

//private:
    /**
     * @hash   277490042
     * @symbol ?_calculateMinEngineVersionFromFullStack@ResourcePackManager@@AEAAXXZ
     */
    MCAPI void _calculateMinEngineVersionFromFullStack();
    /**
     * @hash   767165820
     * @symbol ?_composeFullStack@ResourcePackManager@@AEAAXXZ
     */
    MCAPI void _composeFullStack();
    /**
     * @hash   -2078111352
     * @symbol ?_getResourcesOfGroup@ResourcePackManager@@AEBAXAEBVPackInstance@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@V?$allocator@V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@@std@@@4@@Z
     */
    MCAPI void _getResourcesOfGroup(class PackInstance const &, std::string const &, std::vector<class Core::PathBuffer<std::string>> &) const;
    /**
     * @hash   794647216
     * @symbol ?_updateLanguageSubpacks@ResourcePackManager@@AEAAXXZ
     */
    MCAPI void _updateLanguageSubpacks();

private:

};