#include <QCoreApplication>
#include "factory.h"
#include "factorya.h"
#include "factoryb.h"
#include "concreteproduct.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Factory *factoryA = new FactoryA;
    Product *productA = factoryA->createProduct();
    productA->show();

    Factory *factoryB = new FactoryB;
    Product *productB = factoryB->createProduct();
    productB->show();

    delete factoryA;
    factoryA = NULL;

    delete productA;
    productA = NULL;

    delete factoryB;
    factoryB = NULL;

    delete productB;
    productB = NULL;

    return a.exec();
}
