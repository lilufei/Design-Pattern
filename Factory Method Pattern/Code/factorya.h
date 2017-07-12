#ifndef FACTORYA_H
#define FACTORYA_H

#include "factory.h"
#include "product.h"
#include "concreteproduct.h"

class FactoryA : public Factory
{
public:
    Product* createProduct()
    {
        return new ProductA;
    }
};
#endif // FACTORYA_H
