// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "TreeHelper.hpp"
#define EXTRA_INCLUDE_PART_SPRUCETREECANOPY
#include "Extra/SpruceTreeCanopyAPI.hpp"
#undef EXTRA_INCLUDE_PART_SPRUCETREECANOPY
class SpruceTreeCanopy {
#include "Extra/SpruceTreeCanopyAPI.hpp"
public:
    /*0*/ virtual ~SpruceTreeCanopy();
    /*1*/ virtual class std::optional<class BlockPos> placeCanopy(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&, struct TreeHelper::TreeParams const&, std::vector<class BlockPos> const&) const;


protected:

private:
};