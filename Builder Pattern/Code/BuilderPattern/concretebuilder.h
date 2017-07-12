#ifndef CONCRETEBUILDER_H
#define CONCRETEBUILDER_H
#include "builder.h"

class ConcreteBuilder : public Builder
{
public:
    ConcreteBuilder()
    {
        m_Product = new Product();
    }
    void BuildPartA()
    {
        m_Product->AddPart("PartA completed");
    }

    void BuildPartB()
    {
        m_Product->AddPart("PartB completed");
    }

    Product *GetProduct()
    {
        return m_Product;
    }

private:
    Product *m_Product;
};

#endif // CONCRETEBUILDER_H
