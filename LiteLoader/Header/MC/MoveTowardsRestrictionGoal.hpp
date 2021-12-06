// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_MOVETOWARDSRESTRICTIONGOAL
#include "Extra/MoveTowardsRestrictionGoalAPI.hpp"
#undef EXTRA_INCLUDE_PART_MOVETOWARDSRESTRICTIONGOAL
class MoveTowardsRestrictionGoal {
#include "Extra/MoveTowardsRestrictionGoalAPI.hpp"
public:
    /*0*/ virtual ~MoveTowardsRestrictionGoal();
    /*1*/ virtual void __unk_vfn_0() = 0;
    /*2*/ virtual bool canContinueToUse();
    /*3*/ virtual void __unk_vfn_1();
    /*4*/ virtual void start();


protected:
    MCAPI class Mob const& _getMob() const;
    MCAPI bool _randomizeWantedPositionTowardsRestriction(class Vec3 const&);

private:
};