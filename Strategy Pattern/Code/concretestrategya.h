#ifndef CONCRETESTRATEGYA_H
#define CONCRETESTRATEGYA_H

#include "strategy.h"

class ConcreteStrategyA : public Strategy
{
public:
    ConcreteStrategyA();
    virtual ~ConcreteStrategyA();
    void algorithm();
};

#endif // CONCRETESTRATEGYA_H
