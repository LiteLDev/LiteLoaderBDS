// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "Feature.hpp"
#define EXTRA_INCLUDE_PART_MELONFEATURE
#include "Extra/MelonFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART_MELONFEATURE
class MelonFeature : public Feature {
#include "Extra/MelonFeatureAPI.hpp"
public:
    /*0*/ virtual ~MelonFeature();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;


protected:

private:
};