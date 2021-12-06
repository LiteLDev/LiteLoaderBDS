// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "JsonUtil.hpp"
#define EXTRA_INCLUDE_PART_TRANSFORMITEMRESPONSE
#include "Extra/TransformItemResponseAPI.hpp"
#undef EXTRA_INCLUDE_PART_TRANSFORMITEMRESPONSE
class TransformItemResponse {
#include "Extra/TransformItemResponseAPI.hpp"
public:
    /*0*/ virtual ~TransformItemResponse();
    /*1*/ virtual std::string const& getName() const;
    /*2*/ virtual void executeAction(class RenderParams&) const;
    /*3*/ virtual void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct EventResponseCollection> >&, class Factory<class EventResponse> const&) const;

    MCAPI static std::string const NameID;

protected:

private:
};