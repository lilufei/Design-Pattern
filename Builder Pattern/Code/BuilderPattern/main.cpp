#include <QCoreApplication>
#include "builder.h"
#include "director.h"
#include "concretebuilder.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Builder *builderObj = new ConcreteBuilder();
    Director directorObj(builderObj);
    directorObj.CreateProduct();
    Product *productObj = builderObj->GetProduct();
    if (productObj == NULL)
    {
        return 0;
    }
    productObj->ShowProduct();

    delete productObj;
    productObj = NULL;
    delete builderObj;
    builderObj = NULL;
    return a.exec();
}
