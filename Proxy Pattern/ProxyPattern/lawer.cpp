#include "lawer.h"

Lawer::Lawer(ILawsuit *lawsuit)
{
    m_lawsuit = lawsuit;
}

Lawer::~Lawer()
{

}

void Lawer::submit()
{
    m_lawsuit->submit();
}

void Lawer::burden()
{
    m_lawsuit->burden();
}

void Lawer::defend()
{
    m_lawsuit->defend();
}

void Lawer::finish()
{
    m_lawsuit->finish();
}
