// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_TESTFORCOMMAND
#include "Extra/TestForCommandAPI.hpp"
#undef EXTRA_INCLUDE_PART_TESTFORCOMMAND
class TestForCommand {
#include "Extra/TestForCommandAPI.hpp"
public:
    /*0*/ virtual ~TestForCommand();
    /*1*/ virtual void execute(class CommandOrigin const&, class CommandOutput&) const;

    MCAPI static void setup(class CommandRegistry&);

protected:

private:
};