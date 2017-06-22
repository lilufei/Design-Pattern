#ifndef CONCRETESTRATEGYB_H
#define CONCRETESTRATEGYB_H

#include "strategy.h"

class ConcreteStrategyB : public Strategy
{
public:
    ConcreteStrategyB();
    virtual ~ConcreteStrategyB();
    void algorithm();
};

#endif // CONCRETESTRATEGYB_H
