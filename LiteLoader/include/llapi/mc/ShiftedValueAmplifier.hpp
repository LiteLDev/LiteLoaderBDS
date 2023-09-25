/**
 * @file  ShiftedValueAmplifier.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Amplifier.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ShiftedValueAmplifier.
 *
 */
class ShiftedValueAmplifier : public Amplifier {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHIFTEDVALUEAMPLIFIER
public:
    class ShiftedValueAmplifier& operator=(class ShiftedValueAmplifier const &) = delete;
    ShiftedValueAmplifier(class ShiftedValueAmplifier const &) = delete;
    ShiftedValueAmplifier() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getAmount\@ShiftedValueAmplifier\@\@UEBAMHM\@Z
     */
    virtual float getAmount(int, float) const;

};
