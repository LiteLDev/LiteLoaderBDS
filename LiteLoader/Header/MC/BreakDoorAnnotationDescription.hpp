// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "Json.hpp"
#define EXTRA_INCLUDE_PART_BREAKDOORANNOTATIONDESCRIPTION
#include "Extra/BreakDoorAnnotationDescriptionAPI.hpp"
#undef EXTRA_INCLUDE_PART_BREAKDOORANNOTATIONDESCRIPTION
class BreakDoorAnnotationDescription {
#include "Extra/BreakDoorAnnotationDescriptionAPI.hpp"
public:
    /*0*/ virtual char const* getJsonName() const;
    /*1*/ virtual ~BreakDoorAnnotationDescription();
    /*2*/ virtual void deserializeData(struct DeserializeDataParams);
    /*3*/ virtual void serializeData(class Json::Value&) const;


protected:

private:
};