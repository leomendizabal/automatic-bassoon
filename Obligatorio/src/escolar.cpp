#include "escolar.h"

Escolar::Escolar()
{
    //ctor
}

Escolar::~Escolar()
{
    //dtor
}

Escolar::Escolar(const Escolar& other)
{
    //copy ctor
}

Escolar& Escolar::operator=(const Escolar& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}
