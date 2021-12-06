// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "MobEffect.hpp"
#define EXTRA_INCLUDE_PART_ABSORPTIONMOBEFFECT
#include "Extra/AbsorptionMobEffectAPI.hpp"
#undef EXTRA_INCLUDE_PART_ABSORPTIONMOBEFFECT
class AbsorptionMobEffect : public MobEffect {
#include "Extra/AbsorptionMobEffectAPI.hpp"
public:
    /*0*/ virtual ~AbsorptionMobEffect();
    /*1*/ virtual void applyEffects(class Actor*, int, int) const;
    /*2*/ virtual void removeEffects(class Actor*);
    /*3*/ virtual bool isInstantaneous() const;


protected:

private:
};