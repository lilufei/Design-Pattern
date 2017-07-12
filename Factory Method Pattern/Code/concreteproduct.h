#ifndef CONCRETEPRODUCT_H
#define CONCRETEPRODUCT_H
#include "product.h"
#include <QDebug>

class ProductA : public Product
{
public:
    void show()
    {
        qDebug() << "ProductA";
    }
};

class ProductB : public Product
{
public:
    void show()
    {
        qDebug() << "ProductB";
    }
};

#endif // CONCRETEPRODUCT_H
