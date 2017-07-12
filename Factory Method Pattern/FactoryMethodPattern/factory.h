#ifndef FACTORY_H
#define FACTORY_H

#include "product.h"
#include "concreteproduct.h"

class Factory
{
public:
    virtual Product* createProduct() = 0;
};

#endif // FACTORY_H
