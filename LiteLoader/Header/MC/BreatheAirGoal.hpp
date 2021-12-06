// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_BREATHEAIRGOAL
#include "Extra/BreatheAirGoalAPI.hpp"
#undef EXTRA_INCLUDE_PART_BREATHEAIRGOAL
class BreatheAirGoal {
#include "Extra/BreatheAirGoalAPI.hpp"
public:
    /*0*/ virtual ~BreatheAirGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual bool canContinueToUse();
    /*3*/ virtual bool canBeInterrupted();
    /*4*/ virtual void start();
    /*5*/ virtual void __unk_vfn_0();
    /*6*/ virtual void tick();
    /*7*/ virtual void appendDebugInfo(std::string&) const;


protected:

private:
    MCAPI int _determineApproximateDepth();
    MCAPI void _findAirPosition();
};