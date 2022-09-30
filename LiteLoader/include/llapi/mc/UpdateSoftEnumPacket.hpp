/**
 * @file  UpdateSoftEnumPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
enum class SoftEnumUpdateType : char
{
    Add = 0,
    Remove = 1,
    Set = 2,
};

#undef BEFORE_EXTRA

/**
 * @brief MC class UpdateSoftEnumPacket.
 *
 */
class UpdateSoftEnumPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UPDATESOFTENUMPACKET
public:
    class UpdateSoftEnumPacket& operator=(class UpdateSoftEnumPacket const &) = delete;
    UpdateSoftEnumPacket(class UpdateSoftEnumPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~UpdateSoftEnumPacket();
    /**
     * @hash   1027836562
     * @vftbl  1
     * @symbol ?getId@UpdateSoftEnumPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   -1626613441
     * @vftbl  2
     * @symbol ?getName@UpdateSoftEnumPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -2094142936
     * @vftbl  3
     * @symbol ?write@UpdateSoftEnumPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   1117127544
     * @vftbl  6
     * @symbol ?_read@UpdateSoftEnumPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   499812136
     * @symbol ??0UpdateSoftEnumPacket@@QEAA@XZ
     */
    MCAPI UpdateSoftEnumPacket();
    /**
     * @hash   -616242862
     * @symbol ??0UpdateSoftEnumPacket@@QEAA@W4SoftEnumUpdateType@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@@Z
     */
    MCAPI UpdateSoftEnumPacket(enum class SoftEnumUpdateType, std::string const &, std::vector<std::string> const &);

};