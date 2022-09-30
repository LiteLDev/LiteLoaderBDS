/**
 * @file  RepeatUntilFailureNode.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RepeatUntilFailureNode.
 *
 */
class RepeatUntilFailureNode {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REPEATUNTILFAILURENODE
public:
    class RepeatUntilFailureNode& operator=(class RepeatUntilFailureNode const &) = delete;
    RepeatUntilFailureNode(class RepeatUntilFailureNode const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~RepeatUntilFailureNode();
    /**
     * @hash   1580623286
     * @vftbl  1
     * @symbol ?tick@RepeatUntilFailureNode@@UEAA?AW4BehaviorStatus@@AEAVActor@@@Z
     */
    virtual enum class BehaviorStatus tick(class Actor &);
    /**
     * @hash   -1092654301
     * @vftbl  2
     * @symbol ?initializeFromDefinition@RepeatUntilFailureNode@@MEAAXAEAVActor@@@Z
     */
    virtual void initializeFromDefinition(class Actor &);
    /**
     * @hash   1039098053
     * @symbol ??0RepeatUntilFailureNode@@QEAA@XZ
     */
    MCAPI RepeatUntilFailureNode();

};