#include "autor.h"

Autor::Autor()
{
    //ctor
}

Autor::~Autor()
{
    //dtor
}

Autor::Autor(const Autor& other)
{
    //copy ctor
}

Autor& Autor::operator=(const Autor& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}
