// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "Animal.hpp"
#include "Actor.hpp"
#define EXTRA_INCLUDE_PART_WOLF
#include "Extra/WolfAPI.hpp"
#undef EXTRA_INCLUDE_PART_WOLF
class Wolf : public Animal {
#include "Extra/WolfAPI.hpp"
public:
    /*0*/ virtual ~Wolf();
    /*1*/ virtual bool isRuntimePredictedMovementEnabled() const;
    /*2*/ virtual void __unk_vfn_0();
    /*3*/ virtual class Vec3 getInterpolatedRidingOffset(float) const;
    /*4*/ virtual void __unk_vfn_1();
    /*5*/ virtual void normalTick();
    /*6*/ virtual float getRidingHeight();
    /*7*/ virtual void addPassenger(class Actor&);
    /*8*/ virtual void __unk_vfn_2();
    /*9*/ virtual void __unk_vfn_3();
    /*10*/ virtual float getCameraOffset() const;
    /*11*/ virtual void __unk_vfn_4();
    /*12*/ virtual void __unk_vfn_5();
    /*13*/ virtual void playerTouch(class Player&);
    /*14*/ virtual void __unk_vfn_6();
    /*15*/ virtual void __unk_vfn_7();
    /*16*/ virtual bool isDamageBlocked(class ActorDamageSource const&) const;
    /*17*/ virtual void __unk_vfn_8();
    /*18*/ virtual void __unk_vfn_9();
    /*19*/ virtual void __unk_vfn_10();
    /*20*/ virtual void __unk_vfn_11();
    /*21*/ virtual class Actor* findAttackTarget();
    /*22*/ virtual bool isValidTarget(class Actor*) const;
    /*23*/ virtual void adjustDamageAmount(int&) const;
    /*24*/ virtual void setSitting(bool);
    /*25*/ virtual void onTame();
    /*26*/ virtual void onFailedTame();
    /*27*/ virtual void vehicleLanded(class Vec3 const&, class Vec3 const&);
    /*28*/ virtual int /*enum enum LevelSoundEvent*/ getAmbientSound() const;
    /*29*/ virtual void onBounceStarted(class BlockPos const&, class Block const&);
    /*30*/ virtual void handleEntityEvent(int /*enum enum ActorEvent*/, int);
    /*31*/ virtual float getPickRadius();
    /*32*/ virtual void awardKillScore(class Actor&, int);
    /*33*/ virtual bool load(class CompoundTag const&, class DataLoadHelper&);
    /*34*/ virtual class HashedString const& queryEntityRenderer() const;
    /*35*/ virtual struct ActorUniqueID getSourceUniqueID() const;
    /*36*/ virtual int getPortalWaitTime() const;
    /*37*/ virtual bool canChangeDimensions() const;
    /*38*/ virtual void __unk_vfn_12();
    /*39*/ virtual struct ActorUniqueID getControllingPlayer() const;
    /*40*/ virtual void onSynchedDataUpdate(int);
    /*41*/ virtual bool canPickupItem(class ItemStack const&) const;
    /*42*/ virtual bool canBePulledIntoVehicle() const;
    /*43*/ virtual void __unk_vfn_13();
    /*44*/ virtual bool canSynchronizeNewEntity() const;
    /*45*/ virtual void __unk_vfn_14();
    /*46*/ virtual void __unk_vfn_15();
    /*47*/ virtual bool isWorldBuilder() const;
    /*48*/ virtual void __unk_vfn_16();
    /*49*/ virtual bool isAdventure() const;
    /*50*/ virtual bool canDestroyBlock(class Block const&) const;
    /*51*/ virtual void setAuxValue(int);
    /*52*/ virtual void stopSpinAttack();
    /*53*/ virtual void __unk_vfn_17();
    /*54*/ virtual void __unk_vfn_18();
    /*55*/ virtual void __unk_vfn_19();
    /*56*/ virtual bool _hurt(class ActorDamageSource const&, int, bool, bool);
    /*57*/ virtual void __unk_vfn_20();
    /*58*/ virtual void __unk_vfn_21();
    /*59*/ virtual void spawnAnim();
    /*60*/ virtual int getItemUseDuration() const;
    /*61*/ virtual float getItemUseStartupProgress() const;
    /*62*/ virtual float getItemUseIntervalProgress() const;
    /*63*/ virtual void __unk_vfn_22();
    /*64*/ virtual bool isAlliedTo(class Mob*);
    /*65*/ virtual bool doHurtTarget(class Actor*, int /*enum enum ActorDamageCause*/ const&);
    /*66*/ virtual void __unk_vfn_23();
    /*67*/ virtual void sendArmorDamage(class std::bitset<4> const&);
    /*68*/ virtual void onBorn(class Actor&, class Actor&);
    /*69*/ virtual int getAttackTime();
    /*70*/ virtual void __unk_vfn_24();
    /*71*/ virtual void newServerAiStep();
    /*72*/ virtual void _serverAiMobStep();
    /*73*/ virtual void __unk_vfn_25();

    MCAPI float getHeadRollAngle(float);
    MCAPI float getShakeAnim() const;
    MCAPI float getTailAngle();
    MCAPI bool isShaking() const;

protected:

private:
    MCAPI void _avoidSnowBury();
};