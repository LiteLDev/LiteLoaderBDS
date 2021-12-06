// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "BlockLegacy.hpp"
#define EXTRA_INCLUDE_PART_STAIRBLOCK
#include "Extra/StairBlockAPI.hpp"
#undef EXTRA_INCLUDE_PART_STAIRBLOCK
class StairBlock : public BlockLegacy {
#include "Extra/StairBlockAPI.hpp"
public:
    /*0*/ virtual ~StairBlock();
    /*1*/ virtual bool hasTag(class BlockSource&, class BlockPos const&, class Block const&, std::string const&) const;
    /*2*/ virtual bool isObstructingChests(class BlockSource&, class BlockPos const&) const;
    /*3*/ virtual class Vec3 randomlyModifyPosition(class BlockPos const&) const;
    /*4*/ virtual void addAABBs(class Block const&, class BlockSource&, class BlockPos const&, class AABB const*, std::vector<class AABB>&) const;
    /*5*/ virtual class AABB const& getAABB(class BlockSource const&, class BlockPos const&, class Block const&, class AABB&, bool) const;
    /*6*/ virtual bool addCollisionShapes(class Block const&, class BlockSource&, class BlockPos const&, class AABB const*, std::vector<class AABB>&, class optional_ref<struct IActorMovementProxy>) const;
    /*7*/ virtual class AABB const& getOutline(class BlockSource&, class BlockPos const&, class AABB&) const;
    /*8*/ virtual bool getLiquidClipVolume(class BlockSource&, class BlockPos const&, class AABB&) const;
    /*9*/ virtual void onProjectileHit(class BlockSource&, class BlockPos const&, class Actor const&) const;
    /*10*/ virtual void onLightningHit(class BlockSource&, class BlockPos const&) const;
    /*11*/ virtual bool liquidCanFlowIntoFromDirection(unsigned char, class std::function<class Block const& (class BlockPos const& )> const&, class BlockPos const&) const;
    /*12*/ virtual void __unk_vfn_0();
    /*13*/ virtual bool isStrippable(class Block const&) const;
    /*14*/ virtual class Block const& getStrippedBlock(class Block const&) const;
    /*15*/ virtual bool canProvideSupport(class Block const&, unsigned char, int /*enum enum BlockSupportType*/) const;
    /*16*/ virtual bool canConnect(class Block const&, unsigned char, class Block const&) const;
    /*17*/ virtual class CopperBehavior const* tryGetCopperBehavior() const;
    /*18*/ virtual void __unk_vfn_1();
    /*19*/ virtual void __unk_vfn_2();
    /*20*/ virtual void __unk_vfn_3();
    /*21*/ virtual void __unk_vfn_4();
    /*22*/ virtual void __unk_vfn_5();
    /*23*/ virtual void __unk_vfn_6();
    /*24*/ virtual void __unk_vfn_7();
    /*25*/ virtual void __unk_vfn_8();
    /*26*/ virtual void __unk_vfn_9();
    /*27*/ virtual void __unk_vfn_10();
    /*28*/ virtual bool isDoubleSlabBlock() const;
    /*29*/ virtual void __unk_vfn_11();
    /*30*/ virtual void __unk_vfn_12();
    /*31*/ virtual void __unk_vfn_13();
    /*32*/ virtual void __unk_vfn_14();
    /*33*/ virtual void __unk_vfn_15();
    /*34*/ virtual void __unk_vfn_16();
    /*35*/ virtual bool canBeAscendedByJumping(class Actor const&, class BlockPos const&) const;
    /*36*/ virtual bool isValidAuxValue(int) const;
    /*37*/ virtual bool canFillAtPos(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*38*/ virtual void onFillBlock(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*39*/ virtual int getDirectSignal(class BlockSource&, class BlockPos const&, int) const;
    /*40*/ virtual void __unk_vfn_17();
    /*41*/ virtual void __unk_vfn_18();
    /*42*/ virtual bool shouldConnectToRedstone(class BlockSource&, class BlockPos const&, int) const;
    /*43*/ virtual void handlePrecipitation(class BlockSource&, class BlockPos const&, float, float) const;
    /*44*/ virtual float getFlexibility(class BlockSource&, class BlockPos const&) const;
    /*45*/ virtual bool shouldDispense(class BlockSource&, class Container&) const;
    /*46*/ virtual bool dispense(class BlockSource&, class Container&, int, class Vec3 const&, unsigned char) const;
    /*47*/ virtual void transformOnFall(class BlockSource&, class BlockPos const&, class Actor*, float) const;
    /*48*/ virtual void onRedstoneUpdate(class BlockSource&, class BlockPos const&, int, bool) const;
    /*49*/ virtual void onMove(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
    /*50*/ virtual void __unk_vfn_19();
    /*51*/ virtual void movedByPiston(class BlockSource&, class BlockPos const&) const;
    /*52*/ virtual void onStructureBlockPlace(class BlockSource&, class BlockPos const&) const;
    /*53*/ virtual void onStructureNeighborBlockPlace(class BlockSource&, class BlockPos const&) const;
    /*54*/ virtual void setupRedstoneComponent(class BlockSource&, class BlockPos const&) const;
    /*55*/ virtual int /*enum enum BlockProperty*/ getRedstoneProperty(class BlockSource&, class BlockPos const&) const;
    /*56*/ virtual void __unk_vfn_20();
    /*57*/ virtual bool isFilteredOut(int /*enum enum BlockRenderLayer*/) const;
    /*58*/ virtual void __unk_vfn_21();
    /*59*/ virtual bool ignoreEntitiesOnPistonMove(class Block const&) const;
    /*60*/ virtual bool onFertilized(class BlockSource&, class BlockPos const&, class Actor*, int /*enum enum FertilizerType*/) const;
    /*61*/ virtual bool mayConsumeFertilizer(class BlockSource&) const;
    /*62*/ virtual bool canBeFertilized(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*63*/ virtual bool mayPick() const;
    /*64*/ virtual bool mayPick(class BlockSource const&, class Block const&, bool) const;
    /*65*/ virtual bool mayPlace(class BlockSource&, class BlockPos const&, unsigned char) const;
    /*66*/ virtual bool mayPlaceOn(class BlockSource&, class BlockPos const&) const;
    /*67*/ virtual bool tryToTill(class BlockSource&, class BlockPos const&, class Actor&, class ItemStack&) const;
    /*68*/ virtual bool breaksFallingBlocks(class Block const&, class BaseGameVersion) const;
    /*69*/ virtual void destroy(class BlockSource&, class BlockPos const&, class Block const&, class Actor*) const;
    /*70*/ virtual bool getIgnoresDestroyPermissions(class Actor&, class BlockPos const&) const;
    /*71*/ virtual void neighborChanged(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
    /*72*/ virtual bool getSecondPart(class BlockSource const&, class BlockPos const&, class BlockPos&) const;
    /*73*/ virtual int getResourceCount(class Randomize&, class Block const&, int) const;
    /*74*/ virtual class ItemInstance getResourceItem(class Randomize&, class Block const&, int) const;
    /*75*/ virtual class ItemInstance asItemInstance(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*76*/ virtual void spawnResources(class BlockSource&, class BlockPos const&, class Block const&, class Randomize&, std::vector<class Item const* >*, float, int) const;
    /*77*/ virtual void __unk_vfn_22();
    /*78*/ virtual class Block const& getPlacementBlock(class Actor&, class BlockPos const&, unsigned char, class Vec3 const&, int) const;
    /*79*/ virtual bool isAttachedTo(class BlockSource&, class BlockPos const&, class BlockPos&) const;
    /*80*/ virtual bool attack(class Player*, class BlockPos const&) const;
    /*81*/ virtual void handleEntityInside(class BlockSource&, class BlockPos const&, class Actor*, class Vec3&) const;
    /*82*/ virtual void entityInside(class BlockSource&, class BlockPos const&, class Actor&) const;
    /*83*/ virtual int getExperienceDrop(class Random&) const;
    /*84*/ virtual void triggerEvent(class BlockSource&, class BlockPos const&, int, int) const;
    /*85*/ virtual void __unk_vfn_23();
    /*86*/ virtual float calcGroundFriction(struct IMobMovementProxy const&, class BlockPos const&) const;
    /*87*/ virtual void __unk_vfn_24();
    /*88*/ virtual void __unk_vfn_25();
    /*89*/ virtual int getComparatorSignal(class BlockSource&, class BlockPos const&, class Block const&, unsigned char) const;
    /*90*/ virtual bool canSpawnAt(class BlockSource const&, class BlockPos const&) const;
    /*91*/ virtual void notifySpawnedAt(class BlockSource&, class BlockPos const&) const;
    /*92*/ virtual void __unk_vfn_26();
    /*93*/ virtual int getIconYOffset() const;
    /*94*/ virtual bool isAuxValueRelevantForPicking() const;
    /*95*/ virtual int getColor(class Block const&) const;
    /*96*/ virtual int getColor(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*97*/ virtual int getColorAtPos(class BlockSource&, class BlockPos const&) const;
    /*98*/ virtual bool isSeasonTinted(class Block const&, class BlockSource&, class BlockPos const&) const;
    /*99*/ virtual class AABB const& getVisualShape(class Block const&, class AABB&, bool) const;
    /*100*/ virtual int getVariant(class Block const&) const;
    /*101*/ virtual void __unk_vfn_27();
    /*102*/ virtual class Block const& getRenderBlock() const;
    /*103*/ virtual unsigned char getMappedFace(unsigned char, class Block const&) const;
    /*104*/ virtual int /*enum enum Flip*/ getFaceFlip(unsigned char, class Block const&) const;
    /*105*/ virtual void animateTick(class BlockSource&, class BlockPos const&, class Random&) const;
    /*106*/ virtual void __unk_vfn_28();
    /*107*/ virtual class Block const* tryLegacyUpgrade(unsigned short) const;
    /*108*/ virtual bool dealsContactDamage(class Actor const&, class Block const&, bool) const;
    /*109*/ virtual class Block const* tryGetInfested(class Block const&) const;
    /*110*/ virtual class Block const* tryGetUninfested(class Block const&) const;
    /*111*/ virtual void onRemove(class BlockSource&, class BlockPos const&) const;
    /*112*/ virtual void onExploded(class BlockSource&, class BlockPos const&, class Actor*) const;
    /*113*/ virtual void onStandOn(class Actor&, class BlockPos const&) const;
    /*114*/ virtual void onStepOn(class Actor&, class BlockPos const&) const;
    /*115*/ virtual void __unk_vfn_29();
    /*116*/ virtual void __unk_vfn_30();
    /*117*/ virtual void onPlace(class BlockSource&, class BlockPos const&) const;
    /*118*/ virtual void tick(class BlockSource&, class BlockPos const&, class Random&) const;
    /*119*/ virtual void __unk_vfn_31();
    /*120*/ virtual class HitResult clip(class BlockSource const&, class BlockPos const&, class Vec3 const&, class Vec3 const&, bool) const;
    /*121*/ virtual bool use(class Player&, class BlockPos const&, unsigned char) const;
    /*122*/ virtual bool canSurvive(class BlockSource&, class BlockPos const&) const;
    /*123*/ virtual int getExtraRenderLayers() const;
    /*124*/ virtual class mce::Color getMapColor(class BlockSource&, class BlockPos const&) const;
    /*125*/ virtual void __unk_vfn_32();
    /*126*/ virtual void __unk_vfn_33();
    /*
    inline bool canBeSilkTouched() const{
        bool (StairBlock::*rv)() const;
        *((void**)&rv) = dlsym("?canBeSilkTouched@StairBlock@@MEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isStairBlock() const{
        bool (StairBlock::*rv)() const;
        *((void**)&rv) = dlsym("?isStairBlock@StairBlock@@UEBA_NXZ");
        return (this->*rv)();
    }
    */
    MCAPI bool setInnerPieceShape(class Block const&, class BlockSource&, class BlockPos const&, class AABB&, bool) const;
    MCAPI bool setStepShape(class Block const&, class BlockSource&, class BlockPos const&, class AABB&, bool) const;
    MCAPI static unsigned char stairDirectionToFacing(int);

protected:
    MCAPI void shapeZFightShrink(class AABB&) const;

private:
    MCAPI static class BaseGameVersion const STAIR_BLOCK_DOESNT_BREAK_FALLING_BLOCK_VERSION;
};