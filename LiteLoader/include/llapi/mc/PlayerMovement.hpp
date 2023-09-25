/**
 * @file  PlayerMovement.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace PlayerMovement.
 *
 */
namespace PlayerMovement {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @symbol ?applyInputLocks\@PlayerMovement\@\@YAXAEBUClientInputLockComponent\@\@AEAUMoveInputState\@\@\@Z
     */
    MCAPI void applyInputLocks(struct ClientInputLockComponent const &, struct MoveInputState &);
    /**
     * @symbol ?calculateMoveVector\@PlayerMovement\@\@YA?AVVec2\@\@AEBUMoveInputState\@\@AEBVLayeredAbilities\@\@AEBVSynchedActorData\@\@_NPEBUSneakingComponent\@\@\@Z
     */
    MCAPI class Vec2 calculateMoveVector(struct MoveInputState const &, class LayeredAbilities const &, class SynchedActorData const &, bool, struct SneakingComponent const *);
    /**
     * @symbol ?clearInputState\@PlayerMovement\@\@YAXAEAUMoveInputComponent\@\@\@Z
     */
    MCAPI void clearInputState(struct MoveInputComponent &);
    /**
     * @symbol ?getControllingPassengerID\@PlayerMovement\@\@YA?AUActorUniqueID\@\@AEBV?$vector\@UStrictActorIDEntityContextPair\@\@V?$allocator\@UStrictActorIDEntityContextPair\@\@\@std\@\@\@std\@\@H\@Z
     */
    MCAPI struct ActorUniqueID getControllingPassengerID(std::vector<struct StrictActorIDEntityContextPair> const &, int);
    /**
     * @symbol ?getInputMode\@PlayerMovement\@\@YA?AW4InputMode\@\@AEBVEntityContext\@\@\@Z
     */
    MCAPI enum class InputMode getInputMode(class EntityContext const &);
    /**
     * @symbol ?getPositionMode\@PlayerMovement\@\@YA?AW4PositionMode\@PlayerPositionModeComponent\@\@AEBVEntityContext\@\@\@Z
     */
    MCAPI enum class PlayerPositionModeComponent::PositionMode getPositionMode(class EntityContext const &);
    /**
     * @symbol ?initializePlayer\@PlayerMovement\@\@YAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void initializePlayer(class EntityContext &);
    /**
     * @symbol ?isGamepadOrMotionController\@PlayerMovement\@\@YA_NAEBUPlayerInputModeComponent\@\@\@Z
     */
    MCAPI bool isGamepadOrMotionController(struct PlayerInputModeComponent const &);
    /**
     * @symbol ?isHoloRealityMode\@PlayerMovement\@\@YA_NAEBUPlayerInputModeComponent\@\@\@Z
     */
    MCAPI bool isHoloRealityMode(struct PlayerInputModeComponent const &);
    /**
     * @symbol ?setElytraFlightTimeTicks\@PlayerMovement\@\@YAXAEAVEntityContext\@\@AEBUTick\@\@\@Z
     */
    MCAPI void setElytraFlightTimeTicks(class EntityContext &, struct Tick const &);
    /**
     * @symbol ?setPositionMode\@PlayerMovement\@\@YAXAEAVEntityContext\@\@W4PositionMode\@PlayerPositionModeComponent\@\@\@Z
     */
    MCAPI void setPositionMode(class EntityContext &, enum class PlayerPositionModeComponent::PositionMode);
    /**
     * @symbol ?shouldStopEmoting\@PlayerMovement\@\@YA_NVVec2\@\@AEAUSynchedActorDataComponent\@\@AEAUClientInputLockComponent\@\@AEAUVanillaClientGameplayComponent\@\@\@Z
     */
    MCAPI bool shouldStopEmoting(class Vec2, struct SynchedActorDataComponent &, struct ClientInputLockComponent &, struct VanillaClientGameplayComponent &);

};