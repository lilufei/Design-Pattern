#ifndef FACTORY_H
#define FACTORY_H

#include "product.h"
#include "concreteproduct.h"

class Factory
{
public:
    Product* createProduct(PRODUCTTYPE type)
    {
        switch (type) {
        case TypeA:
            return new ProductA;
            break;
        case TypeB:
            return new ProductB;
            break;
        case TypeC:
            return new ProductC;
            break;
        default:
            return NULL;
            break;
        }
    }
};

#endif // FACTORY_H
