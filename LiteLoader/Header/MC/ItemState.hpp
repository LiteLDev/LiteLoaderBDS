// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_ITEMSTATE
#include "Extra/ItemStateAPI.hpp"
#undef EXTRA_INCLUDE_PART_ITEMSTATE
class ItemState {
#include "Extra/ItemStateAPI.hpp"
public:
    /*0*/ virtual ~ItemState();

    MCAPI static void forEachState(class std::function<bool (class ItemState const& )>);

protected:

private:
};