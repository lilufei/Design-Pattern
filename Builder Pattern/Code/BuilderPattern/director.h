#ifndef DIRECTOR_H
#define DIRECTOR_H
#include "builder.h"

class Director
{
public:
    Director(Builder *builder)
    {
        m_Builder = builder;
    }
    void CreateProduct()
    {
        m_Builder->BuildPartA();
        m_Builder->BuildPartB();
    }

private:
    Builder *m_Builder;
};
#endif // DIRECTOR_H
