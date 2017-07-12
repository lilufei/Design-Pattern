#ifndef BUILDER_H
#define BUILDER_H
#include "product.h"

class Builder
{
public:
    virtual void BuildPartA() {}
    virtual void BuildPartB() {}
    virtual Product *GetProduct() { return NULL; }
};
#endif // BUILDER_H
