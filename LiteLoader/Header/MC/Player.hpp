// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "Mob.hpp"
#include "Actor.hpp"
#define EXTRA_INCLUDE_PART_PLAYER
#include "Extra/PlayerAPI.hpp"
#undef EXTRA_INCLUDE_PART_PLAYER
class Player : public Mob {
#include "Extra/PlayerAPI.hpp"
public:
    /*0*/ virtual void reloadHardcoded(int /*enum enum Actor::InitializationMethod*/, class VariantParameterList const&);
    /*1*/ virtual void initializeComponents(int /*enum enum Actor::InitializationMethod*/, class VariantParameterList const&);
    /*2*/ virtual void _serverInitItemStackIds();
    /*3*/ virtual ~Player();
    /*4*/ virtual void remove();
    /*5*/ virtual bool isRuntimePredictedMovementEnabled() const;
    /*6*/ virtual void __unk_vfn_0();
    /*7*/ virtual class Vec3 getAttachPos(int /*enum enum ActorLocation*/, float) const;
    /*8*/ virtual void move(class Vec3 const&);
    /*9*/ virtual void move(struct IActorMovementProxy&, class Vec3 const&) const;
    /*10*/ virtual class Vec3 getInterpolatedRidingOffset(float) const;
    /*11*/ virtual void __unk_vfn_1();
    /*12*/ virtual void teleportTo(class Vec3 const&, bool, int, int);
    /*13*/ virtual std::unique_ptr<class AddActorBasePacket> tryCreateAddActorPacket();
    /*14*/ virtual void normalTick();
    /*15*/ virtual void vehicleTick();
    /*16*/ virtual float getRidingHeight();
    /*17*/ virtual void __unk_vfn_2();
    /*18*/ virtual std::string getFormattedNameTag() const;
    /*19*/ virtual void __unk_vfn_3();
    /*20*/ virtual float getCameraOffset() const;
    /*21*/ virtual void __unk_vfn_4();
    /*22*/ virtual void __unk_vfn_5();
    /*23*/ virtual void playerTouch(class Player&);
    /*24*/ virtual bool isImmobile() const;
    /*25*/ virtual void __unk_vfn_6();
    /*26*/ virtual bool isSleeping() const;
    /*27*/ virtual void setSleeping(bool);
    /*28*/ virtual void __unk_vfn_7();
    /*29*/ virtual bool isBlocking() const;
    /*30*/ virtual bool isDamageBlocked(class ActorDamageSource const&) const;
    /*31*/ virtual void __unk_vfn_8();
    /*32*/ virtual void __unk_vfn_9();
    /*33*/ virtual void __unk_vfn_10();
    /*34*/ virtual void __unk_vfn_11();
    /*35*/ virtual class Actor* findAttackTarget();
    /*36*/ virtual bool isValidTarget(class Actor*) const;
    /*37*/ virtual bool attack(class Actor&, int /*enum enum ActorDamageCause*/ const&);
    /*38*/ virtual void adjustDamageAmount(int&) const;
    /*39*/ virtual void onTame();
    /*40*/ virtual void onFailedTame();
    /*41*/ virtual bool isJumping() const;
    /*42*/ virtual void vehicleLanded(class Vec3 const&, class Vec3 const&);
    /*43*/ virtual bool isInvulnerableTo(class ActorDamageSource const&) const;
    /*44*/ virtual void actuallyHurt(int, class ActorDamageSource const&, bool);
    /*45*/ virtual void onBounceStarted(class BlockPos const&, class Block const&);
    /*46*/ virtual void feed(int);
    /*47*/ virtual void handleEntityEvent(int /*enum enum ActorEvent*/, int);
    /*48*/ virtual float getPickRadius();
    /*49*/ virtual class HashedString const& getActorRendererId() const;
    /*50*/ virtual void awardKillScore(class Actor&, int);
    /*51*/ virtual void setArmor(int /*enum enum ArmorSlot*/, class ItemStack const&);
    /*52*/ virtual class ItemStack const& getCarriedItem() const;
    /*53*/ virtual void setCarriedItem(class ItemStack const&);
    /*54*/ virtual void setOffhandSlot(class ItemStack const&);
    /*55*/ virtual class ItemStack const& getEquippedTotem() const;
    /*56*/ virtual bool consumeTotem();
    /*57*/ virtual int /*enum enum ActorType*/ getEntityTypeId() const;
    /*58*/ virtual class HashedString const& queryEntityRenderer() const;
    /*59*/ virtual struct ActorUniqueID getSourceUniqueID() const;
    /*60*/ virtual bool canFreeze() const;
    /*61*/ virtual int getPortalCooldown() const;
    /*62*/ virtual int getPortalWaitTime() const;
    /*63*/ virtual bool canChangeDimensions() const;
    /*64*/ virtual void __unk_vfn_12();
    /*65*/ virtual struct ActorUniqueID getControllingPlayer() const;
    /*66*/ virtual void onSynchedDataUpdate(int);
    /*67*/ virtual bool canAddPassenger(class Actor&) const;
    /*68*/ virtual bool canPickupItem(class ItemStack const&) const;
    /*69*/ virtual bool canBePulledIntoVehicle() const;
    /*70*/ virtual void __unk_vfn_13();
    /*71*/ virtual void sendMotionPacketIfNeeded();
    /*72*/ virtual bool canSynchronizeNewEntity() const;
    /*73*/ virtual void startSwimming();
    /*74*/ virtual void stopSwimming();
    /*75*/ virtual int /*enum enum CommandPermissionLevel*/ getCommandPermissionLevel() const;
    /*76*/ virtual class AnimationComponent& getAnimationComponent();
    /*77*/ virtual void useItem(class ItemStackBase&, int /*enum enum ItemUseMethod*/, bool);
    /*78*/ virtual void __unk_vfn_14();
    /*79*/ virtual void __unk_vfn_15();
    /*80*/ virtual float getMapDecorationRotation() const;
    /*81*/ virtual bool isWorldBuilder() const;
    /*82*/ virtual void __unk_vfn_16();
    /*83*/ virtual bool isAdventure() const;
    /*84*/ virtual bool add(class ItemStack&);
    /*85*/ virtual bool drop(class ItemStack const&, bool);
    /*86*/ virtual bool canDestroyBlock(class Block const&) const;
    /*87*/ virtual void setAuxValue(int);
    /*88*/ virtual void setSize(float, float);
    /*89*/ virtual void startSpinAttack();
    /*90*/ virtual void stopSpinAttack();
    /*91*/ virtual void __unk_vfn_17();
    /*92*/ virtual void __unk_vfn_18();
    /*93*/ virtual void die(class ActorDamageSource const&);
    /*94*/ virtual bool shouldDropDeathLoot() const;
    /*95*/ virtual void __unk_vfn_19();
    /*96*/ virtual bool _hurt(class ActorDamageSource const&, int, bool, bool);
    /*97*/ virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);
    /*98*/ virtual void addAdditionalSaveData(class CompoundTag&);
    /*99*/ virtual void __unk_vfn_20();
    /*100*/ virtual void _onSizeUpdated();
    /*101*/ virtual void __unk_vfn_21();
    /*102*/ virtual void spawnAnim();
    /*103*/ virtual float getSpeed() const;
    /*104*/ virtual void setSpeed(float);
    /*105*/ virtual void travel(float, float, float);
    /*106*/ virtual void travel(struct IMobMovementProxy&, float, float, float) const;
    /*107*/ virtual void aiStep();
    /*108*/ virtual void aiStep(struct IMobMovementProxy&) const;
    /*109*/ virtual int getItemUseDuration() const;
    /*110*/ virtual float getItemUseStartupProgress() const;
    /*111*/ virtual float getItemUseIntervalProgress() const;
    /*112*/ virtual void __unk_vfn_22();
    /*113*/ virtual bool isAlliedTo(class Mob*);
    /*114*/ virtual void __unk_vfn_23();
    /*115*/ virtual void sendArmorDamage(class std::bitset<4> const&);
    /*116*/ virtual std::vector<class ItemStack const* > getAllHand() const;
    /*117*/ virtual std::vector<class ItemStack const* > getAllEquipment() const;
    /*118*/ virtual void dropEquipmentOnDeath(class ActorDamageSource const&, int);
    /*119*/ virtual void dropEquipmentOnDeath();
    /*120*/ virtual void clearVanishEnchantedItemsOnDeath();
    /*121*/ virtual void sendInventory(bool);
    /*122*/ virtual void onBorn(class Actor&, class Actor&);
    /*123*/ virtual int getAttackTime();
    /*124*/ virtual float _getWalkTargetValue(class BlockPos const&);
    /*125*/ virtual bool canExistWhenDisallowMob() const;
    /*126*/ virtual void __unk_vfn_24();
    /*127*/ virtual std::unique_ptr<class BodyControl> initBodyControl();
    /*128*/ virtual void jumpFromGround();
    /*129*/ virtual void jumpFromGround(struct IMobMovementProxy&) const;
    /*130*/ virtual void updateAi();
    /*131*/ virtual void _serverAiMobStep();
    /*132*/ virtual void updateGliding();
    /*133*/ virtual void __unk_vfn_25();
    /*134*/ virtual void prepareRegion(class ChunkSource&);
    /*135*/ virtual void destroyRegion();
    /*136*/ virtual void suspendRegion();
    /*137*/ virtual void resendAllChunks();
    /*138*/ virtual void _fireWillChangeDimension();
    /*139*/ virtual void _fireDimensionChanged();
    /*140*/ virtual void changeDimensionWithCredits(class AutomaticID<class Dimension, int>);
    /*141*/ virtual void tickWorld(struct Tick const&);
    /*142*/ virtual void __unk_vfn_26() = 0;
    /*143*/ virtual std::vector<class ChunkPos> const& getTickingOffsets() const;
    /*144*/ virtual void moveView();
    /*145*/ virtual void setName(std::string const&);
    /*146*/ virtual void checkMovementStats(class Vec3 const&);
    /*147*/ virtual void __unk_vfn_27();
    /*148*/ virtual void __unk_vfn_28();
    /*149*/ virtual void respawn();
    /*150*/ virtual void __unk_vfn_29();
    /*151*/ virtual void resetPos(bool);
    /*152*/ virtual void __unk_vfn_30();
    /*153*/ virtual bool hasResource(int);
    /*154*/ virtual void completeUsingItem();
    /*155*/ virtual void setPermissions(int /*enum enum CommandPermissionLevel*/);
    /*156*/ virtual void startDestroying();
    /*157*/ virtual void stopDestroying();
    /*158*/ virtual void __unk_vfn_31();
    /*159*/ virtual void __unk_vfn_32();
    /*160*/ virtual void openTrading(struct ActorUniqueID const&, bool);
    /*161*/ virtual bool canOpenContainerScreen();
    /*162*/ virtual void __unk_vfn_33();
    /*163*/ virtual void __unk_vfn_34();
    /*164*/ virtual void openInventory();
    /*165*/ virtual void __unk_vfn_35();
    /*166*/ virtual void __unk_vfn_36();
    /*167*/ virtual void displayTextObjectMessage(class TextObjectRoot const&, std::string const&, std::string const&);
    /*168*/ virtual void displayTextObjectWhisperMessage(class ResolvedTextObject const&, std::string const&, std::string const&);
    /*169*/ virtual void displayWhisperMessage(std::string const&, std::string const&, std::string const&, std::string const&);
    /*170*/ virtual int /*enum enum BedSleepingResult*/ startSleepInBed(class BlockPos const&);
    /*171*/ virtual void stopSleepInBed(bool, bool);
    /*172*/ virtual bool canStartSleepInBed();
    /*173*/ virtual int getSleepTimer() const;
    /*174*/ virtual int getPreviousTickSleepTimer() const;
    /*175*/ virtual void __unk_vfn_37();
    /*176*/ virtual void __unk_vfn_38();
    /*177*/ virtual bool isHostingPlayer() const;
    /*178*/ virtual bool isLoading() const;
    /*179*/ virtual bool isPlayerInitialized() const;
    /*180*/ virtual void __unk_vfn_39();
    /*181*/ virtual void registerTrackedBoss(struct ActorUniqueID);
    /*182*/ virtual void unRegisterTrackedBoss(struct ActorUniqueID);
    /*183*/ virtual void setPlayerGameType(int /*enum enum GameType*/);
    /*184*/ virtual void initHUDContainerManager();
    /*185*/ virtual void _crit(class Actor&);
    /*186*/ virtual class IMinecraftEventing* getEventing() const;
    /*187*/ virtual void __unk_vfn_40();
    /*188*/ virtual void sendEventPacket(class EventPacket&) const;
    /*189*/ virtual void addExperience(int);
    /*190*/ virtual void addLevels(int);
    /*191*/ virtual void setContainerData(class IContainerManager&, int, int) = 0;
    /*192*/ virtual void slotChanged(class IContainerManager&, class Container&, int, class ItemStack const&, class ItemStack const&, bool) = 0;
    /*193*/ virtual void inventoryChanged(class Container&, int, class ItemStack const&, class ItemStack const&, bool);
    /*194*/ virtual void refreshContainer(class IContainerManager&) = 0;
    /*195*/ virtual void deleteContainerManager();
    /*196*/ virtual void setFieldOfViewModifier(float);
    /*197*/ virtual bool is2DPositionRelevant(class AutomaticID<class Dimension, int>, class BlockPos const&);
    /*198*/ virtual bool isActorRelevant(class Actor const&);
    /*199*/ virtual bool isTeacher() const = 0;
    /*200*/ virtual void onSuspension();
    /*201*/ virtual void onLinkedSlotsChanged();
    /*202*/ virtual void startCooldown(class Item const*);
    /*203*/ virtual int getItemCooldownLeft(class HashedString const&) const;
    /*204*/ virtual int getItemCooldownLeft(unsigned __int64) const;
    /*205*/ virtual int getMaxItemCooldownLeft() const;
    /*206*/ virtual bool isItemInCooldown(class HashedString const&) const;
    /*207*/ virtual void sendInventoryTransaction(class InventoryTransaction const&) const = 0;
    /*208*/ virtual void sendComplexInventoryTransaction(std::unique_ptr<class ComplexInventoryTransaction>) const = 0;
    /*209*/ virtual void sendNetworkPacket(class Packet&) const;
    /*210*/ virtual class PlayerEventCoordinator& getPlayerEventCoordinator() = 0;
    /*211*/ virtual class MoveInputHandler* getMoveInputHandler() = 0;
    /*212*/ virtual int /*enum enum InputMode*/ getInputMode() const = 0;
    /*213*/ virtual int /*enum enum ClientPlayMode*/ getPlayMode() const = 0;
    /*214*/ virtual void reportMovementTelemetry(int /*enum enum MovementEventType*/);
    /*215*/ virtual void __unk_vfn_41();
    /*216*/ virtual std::string getXuid() const;
    /*217*/ virtual struct PlayerMovementSettings const& getMovementSettings() const;
    /*218*/ virtual void onMovePlayerPacketNormal(class Vec3 const&, class Vec2 const&, float);
    /*219*/ virtual class std::shared_ptr<class ChunkViewSource> _createChunkSource(class ChunkSource&);
    /*
    inline int \/*enum enum StructureFeatureType*\/ getCurrentStructureFeature() const{
        int \/*enum enum StructureFeatureType*\/ (Player::*rv)() const;
        *((void**)&rv) = dlsym("?getCurrentStructureFeature@Player@@UEBA?AW4StructureFeatureType@@XZ");
        return (this->*rv)();
    }
    inline bool useNewAi() const{
        bool (Player::*rv)() const;
        *((void**)&rv) = dlsym("?useNewAi@Player@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isInTrialMode(){
        bool (Player::*rv)();
        *((void**)&rv) = dlsym("?isInTrialMode@Player@@UEAA_NXZ");
        return (this->*rv)();
    }
    inline bool isSimulated() const{
        bool (Player::*rv)() const;
        *((void**)&rv) = dlsym("?isSimulated@Player@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isLocalPlayer() const{
        bool (Player::*rv)() const;
        *((void**)&rv) = dlsym("?isLocalPlayer@Player@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline unsigned int getUserId() const{
        unsigned int (Player::*rv)() const;
        *((void**)&rv) = dlsym("?getUserId@Player@@UEBAIXZ");
        return (this->*rv)();
    }
    inline void displayChatMessage(std::string const& a0, std::string const& a1){
        void (Player::*rv)(std::string const&, std::string const&);
        *((void**)&rv) = dlsym("?displayChatMessage@Player@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z");
        return (this->*rv)(std::forward<std::string const&>(a0), std::forward<std::string const&>(a1));
    }
    inline void openChalkboard(class ChalkboardBlockActor& a0, bool a1){
        void (Player::*rv)(class ChalkboardBlockActor&, bool);
        *((void**)&rv) = dlsym("?openChalkboard@Player@@UEAAXAEAVChalkboardBlockActor@@_N@Z");
        return (this->*rv)(std::forward<class ChalkboardBlockActor&>(a0), std::forward<bool>(a1));
    }
    inline void openBook(int a0, bool a1, int a2, class BlockActor* a3){
        void (Player::*rv)(int, bool, int, class BlockActor*);
        *((void**)&rv) = dlsym("?openBook@Player@@UEAAXH_NHPEAVBlockActor@@@Z");
        return (this->*rv)(std::forward<int>(a0), std::forward<bool>(a1), std::forward<int>(a2), std::forward<class BlockActor*>(a3));
    }
    inline void displayClientMessage(std::string const& a0){
        void (Player::*rv)(std::string const&);
        *((void**)&rv) = dlsym("?displayClientMessage@Player@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
        return (this->*rv)(std::forward<std::string const&>(a0));
    }
    inline void _serverInitItemStackIds(){
        void (Player::*rv)();
        *((void**)&rv) = dlsym("?_serverInitItemStackIds@Player@@MEAAXXZ");
        return (this->*rv)();
    }
    inline void playEmote(std::string const& a0){
        void (Player::*rv)(std::string const&);
        *((void**)&rv) = dlsym("?playEmote@Player@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
        return (this->*rv)(std::forward<std::string const&>(a0));
    }
    inline void openSign(class BlockPos const& a0){
        void (Player::*rv)(class BlockPos const&);
        *((void**)&rv) = dlsym("?openSign@Player@@UEAAXAEBVBlockPos@@@Z");
        return (this->*rv)(std::forward<class BlockPos const&>(a0));
    }
    inline void stopLoading(){
        void (Player::*rv)();
        *((void**)&rv) = dlsym("?stopLoading@Player@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void openPortfolio(){
        void (Player::*rv)();
        *((void**)&rv) = dlsym("?openPortfolio@Player@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void resetRot(){
        void (Player::*rv)();
        *((void**)&rv) = dlsym("?resetRot@Player@@UEAAXXZ");
        return (this->*rv)();
    }
    inline bool isPlayer() const{
        bool (Player::*rv)() const;
        *((void**)&rv) = dlsym("?isPlayer@Player@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isCreativeModeAllowed(){
        bool (Player::*rv)();
        *((void**)&rv) = dlsym("?isCreativeModeAllowed@Player@@UEAA_NXZ");
        return (this->*rv)();
    }
    inline bool isAutoJumpEnabled() const{
        bool (Player::*rv)() const;
        *((void**)&rv) = dlsym("?isAutoJumpEnabled@Player@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isShootable(){
        bool (Player::*rv)();
        *((void**)&rv) = dlsym("?isShootable@Player@@UEAA_NXZ");
        return (this->*rv)();
    }
    inline bool getAlwaysShowNameTag() const{
        bool (Player::*rv)() const;
        *((void**)&rv) = dlsym("?getAlwaysShowNameTag@Player@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline void openNpcInteractScreen(class std::shared_ptr<struct INpcDialogueData> a0){
        void (Player::*rv)(class std::shared_ptr<struct INpcDialogueData>);
        *((void**)&rv) = dlsym("?openNpcInteractScreen@Player@@UEAAXV?$shared_ptr@UINpcDialogueData@@@std@@@Z");
        return (this->*rv)(std::forward<class std::shared_ptr<struct INpcDialogueData>>(a0));
    }
    inline bool isCreative() const{
        bool (Player::*rv)() const;
        *((void**)&rv) = dlsym("?isCreative@Player@@UEBA_NXZ");
        return (this->*rv)();
    }
    */
    MCAPI void broadcastPlayerSpawnedMobEvent(enum ActorType, enum MobSpawnMethod);
    MCAPI bool canBeSeenOnMap() const;
    MCAPI bool canDestroy(class Block const&) const;
    MCAPI bool canUseAbility(enum AbilitiesIndex) const;
    MCAPI bool canUseOperatorBlocks() const;
    MCAPI void causeFoodExhaustion(float);
    MCAPI void clearRespawnPosition();
    MCAPI void eat(class ItemStack const&);
    MCAPI void eat(int, float);
    MCAPI bool equippedArmorItemCanBeMoved(class ItemStack const&) const;
    MCAPI void fireDimensionChangedEvent(class AutomaticID<class Dimension, int>);
    MCAPI bool forceAllowEating() const;
    MCAPI class Agent* getAgent() const;
    MCAPI struct ActorUniqueID getAgentID() const;
    MCAPI class Agent* getAgentIfAllowed(bool, struct ActorUniqueID) const;
    MCAPI class BlockPos const& getBedPosition() const;
    MCAPI __int64 getBlockedUsingDamagedShieldTimeStamp() const;
    MCAPI __int64 getBlockedUsingShieldTimeStamp() const;
    MCAPI __int64 getBlockingStartTimeStamp() const;
    MCAPI class Vec3 getCapePos(float);
    MCAPI class std::weak_ptr<class IContainerManager> getContainerManager();
    MCAPI class ItemStack const& getCurrentActiveShield() const;
    MCAPI float getDestroyProgress(class Block const&) const;
    MCAPI float getDestroySpeed(class Block const&) const;
    MCAPI int getDirection() const;
    MCAPI int getEnchantmentSeed() const;
    MCAPI class AutomaticID<class Dimension, int> getExpectedSpawnDimensionId() const;
    MCAPI class BlockPos const& getExpectedSpawnPosition() const;
    MCAPI std::string getInteractText() const;
    MCAPI class Container& getInventory();
    MCAPI class ItemStack const& getItemInUse() const;
    MCAPI std::string getItemInteractText(class Item const&) const;
    MCAPI class ItemStackNetManagerBase* getItemStackNetManager();
    MCAPI class ItemStackNetManagerBase const* getItemStackNetManager() const;
    MCAPI float getLuck();
    MCAPI int getMapIndex();
    MCAPI void getNewEnchantmentSeed();
    MCAPI class AABB getPickupArea() const;
    MCAPI enum BuildPlatform getPlatform() const;
    MCAPI std::string const& getPlatformOnlineId() const;
    MCAPI enum GameType getPlayerGameType() const;
    MCAPI int getPlayerIndex() const;
    MCAPI int getPlayerLevel() const;
    MCAPI enum PlayerPermissionLevel getPlayerPermissionLevel() const;
    MCAPI std::string const& getPlayerSessionId() const;
    MCAPI class ItemStack const& getPlayerUIItem(enum PlayerUISlot);
    MCAPI class BlockPos const& getRespawnAnchorPosition() const;
    MCAPI class ItemStack const& getSelectedItem() const;
    MCAPI int getSelectedItemSlot() const;
    MCAPI class SerializedSkin& getSkin();
    MCAPI class SerializedSkin const& getSkin() const;
    MCAPI float getSleepRotation() const;
    MCAPI class AutomaticID<class Dimension, int> getSpawnDimension() const;
    MCAPI class BlockPos const& getSpawnPosition() const;
    MCAPI class PlayerInventory& getSupplies();
    MCAPI class PlayerInventory const& getSupplies() const;
    MCAPI std::vector<struct ActorUniqueID> const& getTrackedBosses();
    MCAPI enum GameType getUnmappedPlayerGameType() const;
    MCAPI bool getUsedPotion();
    MCAPI int getXpNeededForNextLevel() const;
    MCAPI bool hasBedPosition() const;
    MCAPI bool hasOpenContainer() const;
    MCAPI bool hasOpenContainerOfContainerType(enum ContainerType) const;
    MCAPI bool hasOwnedChunkSource() const;
    MCAPI bool hasResource(class ItemDescriptor const&);
    MCAPI bool hasRespawnAnchorPosition() const;
    MCAPI bool hasRespawnPosition() const;
    MCAPI bool interact(class Actor&, class Vec3 const&);
    MCAPI bool isBouncing() const;
    MCAPI bool isForcedRespawn() const;
    MCAPI bool isHiddenFrom(class Mob&) const;
    MCAPI bool isHungry() const;
    MCAPI bool isHurt();
    MCAPI bool isInCreativeMode() const;
    MCAPI bool isInRaid() const;
    MCAPI bool isRespawningFromTheEnd() const;
    MCAPI bool isSleepingLongEnough() const;
    MCAPI bool isSpawned() const;
    MCAPI bool isSurvival() const;
    MCAPI bool isUsingItem() const;
    MCAPI void moveSpawnView(class Vec3 const&, class AutomaticID<class Dimension, int>);
    MCAPI void recheckSpawnPosition();
    MCAPI void releaseUsingItem();
    MCAPI void resetPlayerLevel();
    MCAPI void resetToDefaultGameMode();
    MCAPI void setAgent(class Agent*);
    MCAPI void setAllPlayersSleeping();
    MCAPI void setBedRespawnPosition(class BlockPos const&);
    MCAPI void setBlockRespawnUntilClientMessage(bool);
    MCAPI void setChunkRadius(unsigned int);
    MCAPI void setContainerManager(class std::shared_ptr<class IContainerManager>);
    MCAPI void setCursorSelectedItem(class ItemStack const&);
    MCAPI void setCursorSelectedItemGroup(class ItemGroup const&);
    MCAPI void setEnchantmentSeed(int);
    MCAPI void setHasSeenCredits(bool);
    MCAPI void setMapIndex(int);
    MCAPI void setPlatformOnlineId(std::string const&);
    MCAPI void setPlayerIndex(int);
    MCAPI void setPlayerUIItem(enum PlayerUISlot, class ItemStack const&);
    MCAPI void setRespawnPosition(class BlockPos const&, class AutomaticID<class Dimension, int>);
    MCAPI void setRespawnPositionCandidate();
    MCAPI void setRespawnReady(class Vec3 const&);
    MCAPI void setSelectedItem(class ItemStack const&);
    MCAPI void setSpawnBlockRespawnPosition(class BlockPos const&, class AutomaticID<class Dimension, int>);
    MCAPI void setUsedPotion(bool);
    MCAPI bool shouldShowCredits() const;
    MCAPI void spawnExperienceOrb(class Vec3 const&, int);
    MCAPI void startGliding();
    MCAPI void startUsingItem(class ItemStack const&, int);
    MCAPI void stopGliding();
    MCAPI void stopUsingItem();
    MCAPI bool take(class Actor&, int, int);
    MCAPI void updateInventoryTransactions();
    MCAPI void updateSkin(class SerializedSkin const&, int);
    MCAPI void updateSpawnChunkView();
    MCAPI void updateTrackedBosses();
    MCAPI void useSelectedItem(enum ItemUseMethod, bool);
    MCAPI static float const DEFAULT_BB_HEIGHT;
    MCAPI static float const DEFAULT_BB_WIDTH;
    MCAPI static float const DEFAULT_FLY_SPEED;
    MCAPI static float const DEFAULT_PLAYER_HEIGHT_OFFSET;
    MCAPI static float const DEFAULT_WALK_SPEED;
    MCAPI static float const DISTANCE_TO_TRANSFORM_EVENT;
    MCAPI static float const DISTANCE_TO_TRAVELLED_EVENT;
    MCAPI static class Attribute const EXHAUSTION;
    MCAPI static class Attribute const EXPERIENCE;
    MCAPI static int const GLIDE_STOP_DELAY;
    MCAPI static class Attribute const HUNGER;
    MCAPI static class Attribute const LEVEL;
    MCAPI static float const PLAYER_ALIVE_HEIGHT;
    MCAPI static float const PLAYER_ALIVE_WIDTH;
    MCAPI static float const PLAYER_DEAD_HEIGHT;
    MCAPI static float const PLAYER_DEAD_WIDTH;
    MCAPI static float const PLAYER_DOWN_SWIM_SPEED;
    MCAPI static float const PLAYER_GLIDING_CAMERA_OFFSET;
    MCAPI static float const PLAYER_SLEEPING_CAMERA_OFFSET;
    MCAPI static float const PLAYER_SLEEPING_HEIGHT;
    MCAPI static float const PLAYER_SLEEPING_WIDTH;
    MCAPI static float const PLAYER_SNEAK_OFFSET;
    MCAPI static float const PLAYER_SWIMMING_CAMERA_OFFSET;
    MCAPI static float const PLAYER_SWIM_BREACH_ANGLE;
    MCAPI static float const PLAYER_SWIM_ENTER_THRESHOLD;
    MCAPI static float const PLAYER_SWIM_FLY_MULTI;
    MCAPI static float const PLAYER_UP_SWIM_SPEED;
    MCAPI static class Attribute const SATURATION;
    MCAPI static unsigned int const SPAWN_CHUNK_LARGE_JUMP;
    MCAPI static unsigned int const SPAWN_CHUNK_RADIUS;
    MCAPI static void _aiStep(struct IPlayerMovementProxy&);
    MCAPI static void _jumpFromGround(struct IPlayerMovementProxy&);
    MCAPI static void _travel(struct IPlayerMovementProxy&, float, float, float);
    MCAPI static bool canJump(struct IPlayerMovementProxy&);
    MCAPI static bool checkAndFixSpawnPosition(class Vec3&, std::vector<class gsl::not_null<class BlockSource* >>, class AABB, bool, bool, bool, bool, bool, bool, short);
    MCAPI static bool checkNeedAutoJump(struct IPlayerMovementProxy*, float, float);
    MCAPI static void goDownInWater(struct IActorMovementProxy&);
    MCAPI static void handleJumpEffects(struct IPlayerMovementProxy&);
    MCAPI static class Player* tryGetFromEntity(class EntityContext&, bool);
    MCAPI static class Player* tryGetFromEntity(class OwnerPtrT<struct EntityRefTraits> const&, bool);

protected:
    MCAPI bool _checkAndFixSpawnPosition(class Vec3&, std::vector<class gsl::not_null<class BlockSource* >>, bool, bool, bool, bool, bool) const;
    MCAPI void _chooseSpawnArea();
    MCAPI bool _chooseSpawnPositionWithinArea();
    MCAPI void _registerPlayerAttributes();
    MCAPI void _updateInteraction();
    MCAPI bool _validateSpawnPositionAvailability(class Vec3 const&, class BlockSource*, class Vec3 const* const) const;
    MCAPI bool checkBed(class BlockSource*, class Vec3 const* const);
    MCAPI bool checkSpawnBlock(class BlockSource const&) const;

private:
    MCAPI void _addLevels(int);
    MCAPI bool _blockUsingShield(class ActorDamageSource const&, float);
    MCAPI void _ensureSafeSpawnPosition(class Vec3&);
    MCAPI bool _findFallbackSpawnPosition(class Vec3&, std::vector<class gsl::not_null<class BlockSource* >>, unsigned int);
    MCAPI void _handleCarriedItemInteractText();
    MCAPI bool _isChunkSourceLoaded(class Vec3 const&, class BlockSource const&) const;
    MCAPI void _registerElytraLoopSound();
    MCAPI void _sendShieldUpdatePacket(class ShieldItem const&, class ItemStack const&, class ItemStack const&, enum ContainerID, int);
    MCAPI void _tickLevelChunks(struct Tick const&);
};