#include "concretestrategyb.h"
#include <QDebug>

ConcreteStrategyB::ConcreteStrategyB()
{

}

ConcreteStrategyB::~ConcreteStrategyB()
{

}

void ConcreteStrategyB::algorithm()
{
    qDebug() << "use strategy B";
}
