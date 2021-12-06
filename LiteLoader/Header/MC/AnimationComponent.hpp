// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_ANIMATIONCOMPONENT
#include "Extra/AnimationComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART_ANIMATIONCOMPONENT
class AnimationComponent {
#include "Extra/AnimationComponentAPI.hpp"
public:
    MCAPI void applyAnimations(bool);
    MCAPI class std::shared_ptr<class ActorAnimationPlayer> createAnimationPlayer(class HashedString const&, class ExpressionNode const&);
    MCAPI std::vector<class BoneOrientation>* getBoneOrientations(enum SkeletalHierarchyIndex, bool);
    MCAPI class std::shared_ptr<class ActorAnimationControllerStatePlayer> const getCurrentAnimationControllerStatePlayer() const;
    MCAPI class ModelPartLocator* getLocator(unsigned __int64 const&);
    MCAPI class RenderParams& getRenderParams();
    MCAPI void initInstanceSpecificAnimationData(class MolangVariableMap*);
    MCAPI void initializeServerAnimationComponent(class Actor&, class std::shared_ptr<class CommonResourceDefinitionMap>, class std::function<void (class ActorAnimationPlayer& )>);
    MCAPI bool isInitialized();
    MCAPI void serverUpdate(class Actor&);
    MCAPI void setCurrentAnimationControllerStatePlayer(class std::shared_ptr<class ActorAnimationControllerStatePlayer>);
    MCAPI void setDirty();
    MCAPI void setLastReloadInitTimeStampClient(unsigned __int64);
    MCAPI void setupDeltaTimeAndLifeTimeParams(bool);
    MCAPI bool shouldReloadBasedOnLastReloadInitTimeStamp() const;
    MCAPI bool usesLastReloadInitTimeStampClient() const;
    MCAPI static class std::shared_ptr<class AnimationComponent> getAnimationComponent(enum AnimationComponentGroup, class AnimationComponentID);
    MCAPI static unsigned __int64 getReloadTimeStampClient();
    MCAPI static void incrementCurrentServerFrameIndex();

protected:

private:
    MCAPI static class std::unordered_map<class AnimationComponentID, class std::weak_ptr<class AnimationComponent>, struct std::hash<class AnimationComponentID>, struct std::equal_to<class AnimationComponentID>, class std::allocator<struct std::pair<class AnimationComponentID const, class std::weak_ptr<class AnimationComponent> > > >& _getAllAnimationComponents(enum AnimationComponentGroup);
    MCAPI static class std::recursive_mutex& _getAnimationComponentMapLock();
    MCAPI static struct std::atomic<__int64> mClientFrameIndex;
    MCAPI static struct std::atomic<__int64> mReloadTimeStampClient;
    MCAPI static struct std::atomic<__int64> mServerFrameIndex;
};