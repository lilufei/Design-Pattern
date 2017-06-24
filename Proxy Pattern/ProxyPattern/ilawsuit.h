#ifndef ILAWSUIT_H
#define ILAWSUIT_H

class ILawsuit
{
public:
    ILawsuit(){}    //在此必须实现，不然在子类中无法创建父类的对象
    virtual ~ILawsuit(){}

    virtual void submit() = 0;  //提交申请
    virtual void burden() = 0;  //进行举证
    virtual void defend() = 0;  //开始辩护
    virtual void finish() = 0;  //诉讼完成
};
#endif // ILAWSUIT_H
