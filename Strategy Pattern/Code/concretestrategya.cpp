#include "concretestrategya.h"
#include <QDebug>

ConcreteStrategyA::ConcreteStrategyA()
{

}

ConcreteStrategyA::~ConcreteStrategyA()
{

}

void ConcreteStrategyA::algorithm()
{
    qDebug() << "use strategy A";
}
