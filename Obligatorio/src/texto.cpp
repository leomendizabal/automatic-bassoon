#include "texto.h"

Texto::Texto()
{
    //ctor
}

Texto::~Texto()
{
    //dtor
}

Texto::Texto(const Texto& other)
{
    //copy ctor
}

Texto& Texto::operator=(const Texto& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}
