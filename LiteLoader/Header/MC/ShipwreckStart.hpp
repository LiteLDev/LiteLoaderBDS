// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "StructureStart.hpp"
#define EXTRA_INCLUDE_PART_SHIPWRECKSTART
#include "Extra/ShipwreckStartAPI.hpp"
#undef EXTRA_INCLUDE_PART_SHIPWRECKSTART
class ShipwreckStart : public StructureStart {
#include "Extra/ShipwreckStartAPI.hpp"
public:
    /*0*/ virtual ~ShipwreckStart();
    /*1*/ virtual bool isValid() const;
    /*2*/ virtual int /*enum enum StructureFeatureType*/ getType() const;


protected:

private:
};