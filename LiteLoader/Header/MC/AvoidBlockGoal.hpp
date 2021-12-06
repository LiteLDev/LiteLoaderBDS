// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_AVOIDBLOCKGOAL
#include "Extra/AvoidBlockGoalAPI.hpp"
#undef EXTRA_INCLUDE_PART_AVOIDBLOCKGOAL
class AvoidBlockGoal {
#include "Extra/AvoidBlockGoalAPI.hpp"
public:
    /*0*/ virtual ~AvoidBlockGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual bool canContinueToUse();
    /*3*/ virtual void __unk_vfn_0();
    /*4*/ virtual void start();
    /*5*/ virtual void stop();
    /*6*/ virtual void tick();
    /*7*/ virtual void appendDebugInfo(std::string&) const;


protected:

private:
    MCAPI bool _isValidTarget(class Block const&) const;
};