#ifndef CONCRETEPRODUCT_H
#define CONCRETEPRODUCT_H
#include "product.h"
#include <QDebug>

typedef enum ProductTypeTag
{
    TypeA,
    TypeB,
    TypeC
}PRODUCTTYPE;

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

class ProductC : public Product
{
public:
    void show()
    {
        qDebug() << "ProductC";
    }
};

#endif // CONCRETEPRODUCT_H
