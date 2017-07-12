#ifndef LAWER_H
#define LAWER_H
#include "ilawsuit.h"

class Lawer : public ILawsuit
{
public:
    Lawer(ILawsuit *lawsuit);
    virtual ~Lawer();

    void submit();
    void burden();
    void defend();
    void finish();

private:
    ILawsuit *m_lawsuit;
};

#endif // LAWER_H
