// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "Scripting.hpp"
#define EXTRA_INCLUDE_PART_SCRIPTNAVIGATIONFLOATCOMPONENTFACTORY
#include "Extra/ScriptNavigationFloatComponentFactoryAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTNAVIGATIONFLOATCOMPONENTFACTORY
class ScriptNavigationFloatComponentFactory {
#include "Extra/ScriptNavigationFloatComponentFactoryAPI.hpp"
public:
    /*0*/ virtual ~ScriptNavigationFloatComponentFactory();
    /*1*/ virtual class Scripting::StrongTypedObjectHandle<class ScriptActorComponent> createComponent(class WeakEntityRef, class Scripting::WeakLifetimeScope const&, std::string const&);
    /*2*/ virtual bool hasComponent(class WeakEntityRef) const;


protected:

private:
};