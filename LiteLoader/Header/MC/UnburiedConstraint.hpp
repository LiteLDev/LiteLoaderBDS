// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_UNBURIEDCONSTRAINT
#include "Extra/UnburiedConstraintAPI.hpp"
#undef EXTRA_INCLUDE_PART_UNBURIEDCONSTRAINT
class UnburiedConstraint {
#include "Extra/UnburiedConstraintAPI.hpp"
public:
    /*0*/ virtual ~UnburiedConstraint();
    /*1*/ virtual bool isSatisfied(class IBlockWorldGenAPI const&, class BlockPos const&, int /*enum enum Rotation*/ const&) const;


protected:

private:
};