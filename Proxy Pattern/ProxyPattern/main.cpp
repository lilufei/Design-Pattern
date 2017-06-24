#include <QCoreApplication>
#include "ilawsuit.h"
#include "xiaoming.h"
#include "lawer.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    ILawsuit *xiaoming = new XiaoMing();
    Lawer lawer(xiaoming);  //类似于智能指针

    lawer.submit();
    lawer.burden();
    lawer.defend();
    lawer.finish();

    return a.exec();
}
