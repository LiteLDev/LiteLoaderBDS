// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_OREVEINIFIER
#include "Extra/OreVeinifierAPI.hpp"
#undef EXTRA_INCLUDE_PART_OREVEINIFIER
class OreVeinifier {
#include "Extra/OreVeinifierAPI.hpp"
public:
    MCAPI void fillNoiseAtPos(class Vec3 const&, int, float);
    MCAPI class Block const* getVeinBlockOrFallback(class Vec3, class Block const*) const;
    MCAPI class std::array<class NoiseCellInterpolator* , 3> resetAndGetInterpolators();

protected:

private:
};