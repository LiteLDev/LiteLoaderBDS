// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "StairBlock.hpp"
#define EXTRA_INCLUDE_PART_CUTCOPPERSTAIRS
#include "Extra/CutCopperStairsAPI.hpp"
#undef EXTRA_INCLUDE_PART_CUTCOPPERSTAIRS
class CutCopperStairs : public StairBlock {
#include "Extra/CutCopperStairsAPI.hpp"
public:
    /*0*/ virtual ~CutCopperStairs();
    /*1*/ virtual bool hasTag(class BlockSource&, class BlockPos const&, class Block const&, std::string const&) const;
    /*2*/ virtual bool isObstructingChests(class BlockSource&, class BlockPos const&) const;
    /*3*/ virtual class Vec3 randomlyModifyPosition(class BlockPos const&) const;
    /*4*/ virtual class AABB const& getAABB(class BlockSource const&, class BlockPos const&, class Block const&, class AABB&, bool) const;
    /*5*/ virtual bool addCollisionShapes(class Block const&, class BlockSource&, class BlockPos const&, class AABB const*, std::vector<class AABB>&, class optional_ref<struct IActorMovementProxy>) const;
    /*6*/ virtual void onProjectileHit(class BlockSource&, class BlockPos const&, class Actor const&) const;
    /*7*/ virtual void onLightningHit(class BlockSource&, class BlockPos const&) const;
    /*8*/ virtual void __unk_vfn_0();
    /*9*/ virtual bool isStrippable(class Block const&) const;
    /*10*/ virtual class Block const& getStrippedBlock(class Block const&) const;
    /*11*/ virtual class CopperBehavior const* tryGetCopperBehavior() const;
    /*12*/ virtual void __unk_vfn_1();
    /*13*/ virtual void __unk_vfn_2();
    /*14*/ virtual void __unk_vfn_3();
    /*15*/ virtual void __unk_vfn_4();
    /*16*/ virtual void __unk_vfn_5();
    /*17*/ virtual void __unk_vfn_6();
    /*18*/ virtual void __unk_vfn_7();
    /*19*/ virtual void __unk_vfn_8();
    /*20*/ virtual void __unk_vfn_9();
    /*21*/ virtual void __unk_vfn_10();
    /*22*/ virtual bool isDoubleSlabBlock() const;
    /*23*/ virtual void __unk_vfn_11();
    /*24*/ virtual void __unk_vfn_12();
    /*25*/ virtual void __unk_vfn_13();
    /*26*/ virtual void __unk_vfn_14();
    /*27*/ virtual void __unk_vfn_15();
    /*28*/ virtual void __unk_vfn_16();
    /*29*/ virtual bool canBeAscendedByJumping(class Actor const&, class BlockPos const&) const;
    /*30*/ virtual bool isValidAuxValue(int) const;
    /*31*/ virtual bool canFillAtPos(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*32*/ virtual void onFillBlock(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*33*/ virtual int getDirectSignal(class BlockSource&, class BlockPos const&, int) const;
    /*34*/ virtual void __unk_vfn_17();
    /*35*/ virtual void __unk_vfn_18();
    /*36*/ virtual bool shouldConnectToRedstone(class BlockSource&, class BlockPos const&, int) const;
    /*37*/ virtual void handlePrecipitation(class BlockSource&, class BlockPos const&, float, float) const;
    /*38*/ virtual float getFlexibility(class BlockSource&, class BlockPos const&) const;
    /*39*/ virtual bool shouldDispense(class BlockSource&, class Container&) const;
    /*40*/ virtual bool dispense(class BlockSource&, class Container&, int, class Vec3 const&, unsigned char) const;
    /*41*/ virtual void transformOnFall(class BlockSource&, class BlockPos const&, class Actor*, float) const;
    /*42*/ virtual void onRedstoneUpdate(class BlockSource&, class BlockPos const&, int, bool) const;
    /*43*/ virtual void onMove(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
    /*44*/ virtual void __unk_vfn_19();
    /*45*/ virtual void movedByPiston(class BlockSource&, class BlockPos const&) const;
    /*46*/ virtual void onStructureBlockPlace(class BlockSource&, class BlockPos const&) const;
    /*47*/ virtual void onStructureNeighborBlockPlace(class BlockSource&, class BlockPos const&) const;
    /*48*/ virtual void setupRedstoneComponent(class BlockSource&, class BlockPos const&) const;
    /*49*/ virtual void __unk_vfn_20();
    /*50*/ virtual bool isFilteredOut(int /*enum enum BlockRenderLayer*/) const;
    /*51*/ virtual void __unk_vfn_21();
    /*52*/ virtual bool ignoreEntitiesOnPistonMove(class Block const&) const;
    /*53*/ virtual bool onFertilized(class BlockSource&, class BlockPos const&, class Actor*, int /*enum enum FertilizerType*/) const;
    /*54*/ virtual bool mayConsumeFertilizer(class BlockSource&) const;
    /*55*/ virtual bool canBeFertilized(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*56*/ virtual bool mayPlaceOn(class BlockSource&, class BlockPos const&) const;
    /*57*/ virtual bool tryToTill(class BlockSource&, class BlockPos const&, class Actor&, class ItemStack&) const;
    /*58*/ virtual bool getIgnoresDestroyPermissions(class Actor&, class BlockPos const&) const;
    /*59*/ virtual void neighborChanged(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
    /*60*/ virtual bool getSecondPart(class BlockSource const&, class BlockPos const&, class BlockPos&) const;
    /*61*/ virtual class ItemInstance getResourceItem(class Randomize&, class Block const&, int) const;
    /*62*/ virtual class ItemInstance asItemInstance(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*63*/ virtual void spawnResources(class BlockSource&, class BlockPos const&, class Block const&, class Randomize&, std::vector<class Item const* >*, float, int) const;
    /*64*/ virtual void __unk_vfn_22();
    /*65*/ virtual bool isAttachedTo(class BlockSource&, class BlockPos const&, class BlockPos&) const;
    /*66*/ virtual void entityInside(class BlockSource&, class BlockPos const&, class Actor&) const;
    /*67*/ virtual int getExperienceDrop(class Random&) const;
    /*68*/ virtual void triggerEvent(class BlockSource&, class BlockPos const&, int, int) const;
    /*69*/ virtual void __unk_vfn_23();
    /*70*/ virtual float calcGroundFriction(struct IMobMovementProxy const&, class BlockPos const&) const;
    /*71*/ virtual void __unk_vfn_24();
    /*72*/ virtual void __unk_vfn_25();
    /*73*/ virtual int getComparatorSignal(class BlockSource&, class BlockPos const&, class Block const&, unsigned char) const;
    /*74*/ virtual bool canSpawnAt(class BlockSource const&, class BlockPos const&) const;
    /*75*/ virtual void notifySpawnedAt(class BlockSource&, class BlockPos const&) const;
    /*76*/ virtual void __unk_vfn_26();
    /*77*/ virtual int getIconYOffset() const;
    /*78*/ virtual bool isAuxValueRelevantForPicking() const;
    /*79*/ virtual int getColor(class Block const&) const;
    /*80*/ virtual int getColor(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*81*/ virtual int getColorAtPos(class BlockSource&, class BlockPos const&) const;
    /*82*/ virtual bool isSeasonTinted(class Block const&, class BlockSource&, class BlockPos const&) const;
    /*83*/ virtual class AABB const& getVisualShape(class Block const&, class AABB&, bool) const;
    /*84*/ virtual int getVariant(class Block const&) const;
    /*85*/ virtual void __unk_vfn_27();
    /*86*/ virtual class Block const& getRenderBlock() const;
    /*87*/ virtual unsigned char getMappedFace(unsigned char, class Block const&) const;
    /*88*/ virtual int /*enum enum Flip*/ getFaceFlip(unsigned char, class Block const&) const;
    /*89*/ virtual void __unk_vfn_28();
    /*90*/ virtual class Block const* tryLegacyUpgrade(unsigned short) const;
    /*91*/ virtual bool dealsContactDamage(class Actor const&, class Block const&, bool) const;
    /*92*/ virtual class Block const* tryGetInfested(class Block const&) const;
    /*93*/ virtual class Block const* tryGetUninfested(class Block const&) const;
    /*94*/ virtual void onStepOn(class Actor&, class BlockPos const&) const;
    /*95*/ virtual void __unk_vfn_29();
    /*96*/ virtual void __unk_vfn_30();
    /*97*/ virtual void randomTick(class BlockSource&, class BlockPos const&, class Random&) const;
    /*98*/ virtual void __unk_vfn_31();
    /*99*/ virtual bool use(class Player&, class BlockPos const&, unsigned char) const;
    /*100*/ virtual bool canSurvive(class BlockSource&, class BlockPos const&) const;
    /*101*/ virtual int getExtraRenderLayers() const;
    /*102*/ virtual class mce::Color getMapColor(class BlockSource&, class BlockPos const&) const;
    /*103*/ virtual void __unk_vfn_32();
    /*104*/ virtual void __unk_vfn_33();


protected:

private:
};