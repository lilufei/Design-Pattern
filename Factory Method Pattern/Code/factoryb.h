#ifndef FACTORYB_H
#define FACTORYB_H

#include "factory.h"
#include "product.h"
#include "concreteproduct.h"

class FactoryB : public Factory
{
public:
    Product* createProduct()
    {
        return new ProductB;
    }
};
#endif // FACTORYB_H
