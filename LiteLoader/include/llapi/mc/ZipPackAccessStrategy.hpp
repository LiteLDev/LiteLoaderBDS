/**
 * @file  ZipPackAccessStrategy.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"
#include "Bedrock.hpp"
#include "PackAccessStrategy.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ZipPackAccessStrategy.
 *
 */
class ZipPackAccessStrategy : public PackAccessStrategy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ZIPPACKACCESSSTRATEGY
public:
    class ZipPackAccessStrategy& operator=(class ZipPackAccessStrategy const &) = delete;
    ZipPackAccessStrategy(class ZipPackAccessStrategy const &) = delete;
    ZipPackAccessStrategy() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   562344639
     */
    virtual ~ZipPackAccessStrategy();
    /**
     * @vftbl  1
     * @symbol ?getPackSize@ZipPackAccessStrategy@@UEBA_KXZ
     * @hash   1488269823
     */
    virtual unsigned __int64 getPackSize() const;
    /**
     * @vftbl  2
     * @symbol ?getPackLocation@ZipPackAccessStrategy@@UEBAAEBVResourceLocation@@XZ
     * @hash   -830455955
     */
    virtual class ResourceLocation const & getPackLocation() const;
    /**
     * @vftbl  3
     * @symbol ?getPackName@ZipPackAccessStrategy@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -1344991311
     */
    virtual std::string const & getPackName() const;
    /**
     * @vftbl  4
     * @symbol ?isWritable@ZipPackAccessStrategy@@UEBA_NXZ
     * @hash   1697483057
     */
    virtual bool isWritable() const;
    /**
     * @vftbl  5
     * @symbol ?setIsTrusted@ZipPackAccessStrategy@@UEAAX_N@Z
     * @hash   805587611
     */
    virtual void setIsTrusted(bool);
    /**
     * @vftbl  6
     * @symbol ?isTrusted@ZipPackAccessStrategy@@UEBA_NXZ
     * @hash   -462946684
     */
    virtual bool isTrusted() const;
    /**
     * @vftbl  7
     * @symbol ?hasAsset@ZipPackAccessStrategy@@UEBA_NAEBVPath@Core@@_N@Z
     * @hash   -1057485292
     */
    virtual bool hasAsset(class Core::Path const &, bool) const;
    /**
     * @vftbl  8
     * @symbol ?hasFolder@ZipPackAccessStrategy@@UEBA_NAEBVPath@Core@@@Z
     * @hash   1121394164
     */
    virtual bool hasFolder(class Core::Path const &) const;
    /**
     * @vftbl  9
     * @symbol ?getAsset@ZipPackAccessStrategy@@UEBA_NAEBVPath@Core@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     * @hash   -33443153
     */
    virtual bool getAsset(class Core::Path const &, std::string &, bool) const;
    /**
     * @vftbl  10
     * @symbol ?deleteAsset@ZipPackAccessStrategy@@UEAA_NAEBV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@@Z
     * @hash   -425188125
     */
    virtual bool deleteAsset(class Core::PathBuffer<std::string> const &);
    /**
     * @vftbl  11
     * @symbol ?writeAsset@ZipPackAccessStrategy@@UEAA_NAEBVPath@Core@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1798163568
     */
    virtual bool writeAsset(class Core::Path const &, std::string const &);
    /**
     * @vftbl  12
     * @symbol ?forEachIn@ZipPackAccessStrategy@@UEBAXAEBVPath@Core@@V?$function@$$A6AXAEBVPath@Core@@@Z@std@@_N@Z
     * @hash   -219422897
     */
    virtual void forEachIn(class Core::Path const &, class std::function<void (class Core::Path const &)>, bool) const;
    /**
     * @vftbl  14
     * @symbol ?getStrategyType@ZipPackAccessStrategy@@UEBA?AW4PackAccessStrategyType@@XZ
     * @hash   1183409240
     */
    virtual enum class PackAccessStrategyType getStrategyType() const;
    /**
     * @vftbl  15
     * @symbol ?getSubPath@ZipPackAccessStrategy@@UEBAAEBV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     * @hash   -167057110
     */
    virtual class Core::PathBuffer<std::string> const & getSubPath() const;
    /**
     * @vftbl  16
     * @symbol ?createSubPack@ZipPackAccessStrategy@@UEBA?AV?$unique_ptr@VPackAccessStrategy@@U?$default_delete@VPackAccessStrategy@@@std@@@std@@AEBVPath@Core@@@Z
     * @hash   -585492146
     */
    virtual std::unique_ptr<class PackAccessStrategy> createSubPack(class Core::Path const &) const;
    /**
     * @vftbl  19
     * @symbol ?unload@ZipPackAccessStrategy@@UEAAXXZ
     * @hash   1595024117
     */
    virtual void unload();
    /**
     * @vftbl  21
     * @symbol ?readContentIdentity@ZipPackAccessStrategy@@UEBA?AVContentIdentity@@XZ
     * @hash   -649213920
     */
    virtual class ContentIdentity readContentIdentity() const;
    /**
     * @symbol ??0ZipPackAccessStrategy@@QEAA@AEBV?$not_null@V?$NonOwnerPointer@VIFileAccess@@@Bedrock@@@gsl@@AEBVResourceLocation@@AEBVPath@Core@@@Z
     * @hash   1747834382
     */
    MCAPI ZipPackAccessStrategy(class gsl::not_null<class Bedrock::NonOwnerPointer<class IFileAccess>> const &, class ResourceLocation const &, class Core::Path const &);

//private:
    /**
     * @symbol ?_tryReadFromPendingQueue@ZipPackAccessStrategy@@AEBA_NAEBVPath@Core@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1670793548
     */
    MCAPI bool _tryReadFromPendingQueue(class Core::Path const &, std::string &) const;

private:

};