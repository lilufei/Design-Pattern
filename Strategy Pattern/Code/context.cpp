#include "context.h"

Context::Context()
{

}

Context::~Context()
{

}

void Context::setStrategy(Strategy *strategy)
{
    m_strategy = strategy;
}

void Context::algorithm()
{
    m_strategy->algorithm();
}
