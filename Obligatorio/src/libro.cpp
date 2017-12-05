#include "libro.h"

Libro::Libro()
{
    //ctor
}

Libro::~Libro()
{
    //dtor
}

Libro::Libro(const Libro& other)
{
    //copy ctor
}

Libro& Libro::operator=(const Libro& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}
