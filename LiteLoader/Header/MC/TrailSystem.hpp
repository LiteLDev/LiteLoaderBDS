// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_TRAILSYSTEM
#include "Extra/TrailSystemAPI.hpp"
#undef EXTRA_INCLUDE_PART_TRAILSYSTEM
class TrailSystem {
#include "Extra/TrailSystemAPI.hpp"
public:
    /*0*/ virtual ~TrailSystem();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual void tick(class EntityRegistry&);


protected:

private:
    MCAPI void _tickComponent(class ViewedEntityContextT<class EntityContext, class FlagComponent<struct ActorTickedFlag>, class FlagComponent<struct ActorFlag>, class TrailComponent>&);
};