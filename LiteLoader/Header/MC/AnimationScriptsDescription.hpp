// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "Json.hpp"
#define EXTRA_INCLUDE_PART_ANIMATIONSCRIPTSDESCRIPTION
#include "Extra/AnimationScriptsDescriptionAPI.hpp"
#undef EXTRA_INCLUDE_PART_ANIMATIONSCRIPTSDESCRIPTION
class AnimationScriptsDescription {
#include "Extra/AnimationScriptsDescriptionAPI.hpp"
public:
    /*0*/ virtual char const* getJsonName() const;
    /*1*/ virtual ~AnimationScriptsDescription();
    /*2*/ virtual void deserializeData(struct DeserializeDataParams);
    /*3*/ virtual void serializeData(class Json::Value&) const;


protected:

private:
};