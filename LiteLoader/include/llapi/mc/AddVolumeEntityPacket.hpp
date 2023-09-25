/**
 * @file  AddVolumeEntityPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"
#include "AddEntityPacket.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class AddVolumeEntityPacket.
 *
 */
class AddVolumeEntityPacket : public AddEntityPacket {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ADDVOLUMEENTITYPACKET
public:
    class AddVolumeEntityPacket& operator=(class AddVolumeEntityPacket const &) = delete;
    AddVolumeEntityPacket(class AddVolumeEntityPacket const &) = delete;
    AddVolumeEntityPacket() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@AddVolumeEntityPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol ?getName\@AddVolumeEntityPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@AddVolumeEntityPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl 7
     * @symbol ?_read\@AddVolumeEntityPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ADDVOLUMEENTITYPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~AddVolumeEntityPacket();
#endif
    /**
     * @symbol ??0AddVolumeEntityPacket\@\@QEAA\@AEBVEntityContext\@\@VCompoundTag\@\@AEBVSemVersion\@\@\@Z
     */
    MCAPI AddVolumeEntityPacket(class EntityContext const &, class CompoundTag, class SemVersion const &);

};
