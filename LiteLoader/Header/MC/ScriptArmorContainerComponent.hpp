// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "ScriptApi.hpp"
#define EXTRA_INCLUDE_PART_SCRIPTARMORCONTAINERCOMPONENT
#include "Extra/ScriptArmorContainerComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTARMORCONTAINERCOMPONENT
class ScriptArmorContainerComponent {
#include "Extra/ScriptArmorContainerComponentAPI.hpp"
public:
    /*0*/ virtual ~ScriptArmorContainerComponent();
    /*1*/ virtual bool applyComponentTo(class ScriptApi::ScriptVersionInfo const&, class ScriptEngine&, class ScriptServerContext&, class Actor&, class ScriptApi::ScriptObjectHandle const&) const;
    /*2*/ virtual void __unk_vfn_0();
    /*3*/ virtual void __unk_vfn_1();
    /*4*/ virtual void __unk_vfn_2();
    /*5*/ virtual void __unk_vfn_3();
    /*6*/ virtual void __unk_vfn_4();
    /*7*/ virtual void __unk_vfn_5();
    /*8*/ virtual bool retrieveComponentFrom(class ScriptApi::ScriptVersionInfo const&, class ScriptEngine&, class ScriptServerContext&, class Actor&, class ScriptApi::ScriptObjectHandle&) const;
    /*9*/ virtual void __unk_vfn_6();
    /*10*/ virtual void __unk_vfn_7();
    /*11*/ virtual void __unk_vfn_8();
    /*12*/ virtual bool hasComponent(class ScriptApi::ScriptVersionInfo const&, class ScriptEngine&, class ScriptServerContext&, class Actor&, bool&) const;


protected:

private:
    MCAPI static class HashedString const mHash;
};