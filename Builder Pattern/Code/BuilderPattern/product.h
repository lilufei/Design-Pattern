#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
#include <vector>
using namespace std;

class Product
{
public:
    void AddPart(const char *info)
    {
        m_PartInfoVec.push_back(info);
    }

    void ShowProduct()
    {
        for (std::vector<const char *>::iterator item = m_PartInfoVec.begin(); item != m_PartInfoVec.end(); ++item)
        {
            cout<<*item<<endl;
        }
    }

private:
    std::vector<const char *> m_PartInfoVec;
};
#endif // PRODUCT_H
