// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_SURFACEMATERIALADJUSTMENTATTRIBUTES
#include "Extra/SurfaceMaterialAdjustmentAttributesAPI.hpp"
#undef EXTRA_INCLUDE_PART_SURFACEMATERIALADJUSTMENTATTRIBUTES
struct SurfaceMaterialAdjustmentAttributes {
#include "Extra/SurfaceMaterialAdjustmentAttributesAPI.hpp"
public:
    MCAPI struct SurfaceMaterialAdjustmentEvaluated evaluateAdjustments(class RenderParams&, class gsl::not_null<class PerlinSimplexNoise* >, class BlockPos const&, int, int) const;

protected:

private:
};