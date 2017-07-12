#ifndef XIAOMING_H
#define XIAOMING_H
#include "ilawsuit.h"

class XiaoMing : public ILawsuit
{
public:
    XiaoMing();
    virtual ~XiaoMing();

    void submit();
    void burden();
    void defend();
    void finish();
};

#endif // XIAOMING_H
