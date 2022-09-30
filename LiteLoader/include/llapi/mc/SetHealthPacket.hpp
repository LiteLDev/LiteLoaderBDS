/**
 * @file  SetHealthPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SetHealthPacket.
 *
 */
class SetHealthPacket : public Packet {

#define AFTER_EXTRA
// Add Member There
    char filler[8];

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SETHEALTHPACKET
public:
    class SetHealthPacket& operator=(class SetHealthPacket const &) = delete;
    SetHealthPacket(class SetHealthPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~SetHealthPacket();
    /**
     * @hash   1713313400
     * @vftbl  1
     * @symbol ?getId@SetHealthPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   1301664037
     * @vftbl  2
     * @symbol ?getName@SetHealthPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   2003838690
     * @vftbl  3
     * @symbol ?write@SetHealthPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   631014898
     * @vftbl  6
     * @symbol ?_read@SetHealthPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -2129433006
     * @symbol ??0SetHealthPacket@@QEAA@XZ
     */
    MCAPI SetHealthPacket();
    /**
     * @hash   -843319431
     * @symbol ??0SetHealthPacket@@QEAA@H@Z
     */
    MCAPI SetHealthPacket(int);

};