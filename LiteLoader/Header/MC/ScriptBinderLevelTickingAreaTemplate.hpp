// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_SCRIPTBINDERLEVELTICKINGAREATEMPLATE
#include "Extra/ScriptBinderLevelTickingAreaTemplateAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTBINDERLEVELTICKINGAREATEMPLATE
class ScriptBinderLevelTickingAreaTemplate {
#include "Extra/ScriptBinderLevelTickingAreaTemplateAPI.hpp"
public:
    /*0*/ virtual ~ScriptBinderLevelTickingAreaTemplate();
    /*1*/ virtual std::string const& getTemplateIdentifier() const;
    /*2*/ virtual void applyTemplate(class ScriptObjectBinder&) const;

    MCAPI static std::unique_ptr<class ScriptObjectBinder> build(class ITickingArea const&);

protected:

private:
};