#include "xiaoming.h"
#include <QDebug>

XiaoMing::XiaoMing()
{

}

XiaoMing::~XiaoMing()
{

}

void XiaoMing::submit()
{
    qDebug() << "老板拖欠工资！特此申请仲裁！";
}

void XiaoMing::burden()
{
    qDebug() << "这是合同书，和去年过去一年的工资流水！";
}

void XiaoMing::defend()
{
    qDebug() << "证据确凿，不需要说什么了！";
}

void XiaoMing::finish()
{
    qDebug() << "诉讼成功，判决老板即日起七天内结算工资！";
}
