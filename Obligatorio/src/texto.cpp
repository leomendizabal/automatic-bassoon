#include "texto.h"

Texto::Texto()
{
    //ctor
}

/** @brief (one liner)
  *
  * (documentation goes here) : Falta contructor
  */
 Texto::Texto(long int isbn, Cadena titulo, float precioBase, int unidadesVendidas, Cadena materia, Fecha fechaPub)
{

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
/** @brief (one liner)
  *
  * (documentation goes here)
  */
void Texto::setFecha(Fecha fecha)
{
    m_fechaPublicado = fecha;
}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
Fecha Texto::getFecha()
{
    return m_fechaPublicado;
}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
void Texto::setMateria(Cadena materia)
{
    m_materia = materia;
}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
Cadena Texto::getMateria()
{
    return m_materia;
}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
float Texto::getPrecioBase()
{
    return Libro::getPrecioBase(); // calcular precio base
}



