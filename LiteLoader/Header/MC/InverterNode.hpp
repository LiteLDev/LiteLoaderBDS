// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_INVERTERNODE
#include "Extra/InverterNodeAPI.hpp"
#undef EXTRA_INCLUDE_PART_INVERTERNODE
class InverterNode {
#include "Extra/InverterNodeAPI.hpp"
public:
    /*0*/ virtual ~InverterNode();
    /*1*/ virtual int /*enum enum BehaviorStatus*/ tick(class Actor&);
    /*2*/ virtual void initializeFromDefinition(class Actor&);


protected:

private:
};