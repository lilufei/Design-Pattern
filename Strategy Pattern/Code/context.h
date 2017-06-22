#ifndef CONTEXT_H
#define CONTEXT_H

/**
 * @brief Context::Context 使用锦囊包装策略
 */

#include "strategy.h"

class Context
{
public:
    Context();
    ~Context();

    void setStrategy(Strategy* strategy);
    void algorithm();
private:
    Strategy* m_strategy;
};

#endif // CONTEXT_H
