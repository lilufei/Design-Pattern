#include <QCoreApplication>
#include "context.h"
#include "concretestrategya.h"
#include "concretestrategyb.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    ConcreteStrategyA* strategyA = new ConcreteStrategyA;
    ConcreteStrategyB* strategyB = new ConcreteStrategyB;

    Context context;
    context.setStrategy(strategyA);
    context.algorithm();

    context.setStrategy(strategyB);
    context.algorithm();

    delete strategyA;
    delete strategyB;

    return a.exec();
}
