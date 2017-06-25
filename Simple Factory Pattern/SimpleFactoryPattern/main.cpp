#include <QCoreApplication>
#include "product.h"
#include "concreteproduct.h"
#include "factory.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Factory *productFactory = new Factory;
    Product *productA = productFactory->createProduct(TypeA);
    if (productA != NULL)
    {
        productA->show();
    }

    Product *productB = productFactory->createProduct(TypeB);
    if (productB != NULL)
    {
        productB->show();
    }

    Product *productC = productFactory->createProduct(TypeC);
    if (productC != NULL)
    {
        productC->show();
    }

    delete productFactory;
    productFactory = NULL;

    delete productA;
    productA = NULL;

    delete productB;
    productB = NULL;

    delete productC;
    productC = NULL;
    return a.exec();
}
