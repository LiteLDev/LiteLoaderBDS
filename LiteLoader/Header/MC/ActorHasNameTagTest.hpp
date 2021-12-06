// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "FilterTest.hpp"
#include "Json.hpp"
#define EXTRA_INCLUDE_PART_ACTORHASNAMETAGTEST
#include "Extra/ActorHasNameTagTestAPI.hpp"
#undef EXTRA_INCLUDE_PART_ACTORHASNAMETAGTEST
class ActorHasNameTagTest : public FilterTest {
#include "Extra/ActorHasNameTagTestAPI.hpp"
public:
    /*0*/ virtual ~ActorHasNameTagTest();
    /*1*/ virtual bool evaluate(struct FilterContext const&) const;
    /*2*/ virtual void finalizeParsedValue(class IWorldRegistriesProvider&);
    /*3*/ virtual class gsl::basic_string_span<char const, -1> getName() const;


protected:

private:
};