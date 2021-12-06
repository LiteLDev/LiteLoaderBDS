// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "Scripting.hpp"
#define EXTRA_INCLUDE_PART_SCRIPTACTORCOMPONENT
#include "Extra/ScriptActorComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTACTORCOMPONENT
class ScriptActorComponent {
#include "Extra/ScriptActorComponentAPI.hpp"
public:
    /*0*/ virtual ~ScriptActorComponent();
    /*1*/ virtual struct Scripting::Error _functionError(std::string const&) const;
    /*2*/ virtual struct Scripting::Error _getPropertyError(std::string const&) const;
    /*3*/ virtual struct Scripting::Error _setPropertyError(std::string const&) const;

    MCAPI class ScriptActorComponent& operator=(class ScriptActorComponent const&);
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptActorComponent> bind(struct Scripting::Version);

protected:
    MCAPI class Actor* _tryGetOwner() const;

private:
};