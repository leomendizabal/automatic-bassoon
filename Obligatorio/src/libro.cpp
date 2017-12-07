#include "libro.h"

Libro::Libro()
{
    //ctor
}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
 Libro::Libro(long int isbn, Cadena titulo, float precioBase, int unidadesVendidas):m_titulo(titulo)
{
    m_isbn = isbn;
    m_precioBase = precioBase;
    m_unidadesVendidas = unidadesVendidas;
}



Libro::~Libro()
{
    //dtor
}

Libro::Libro(const Libro& other)
{
    //copy ctor
}

/** @brief (Settear unidades vendidas)
  *
  * (settear la propiedad unidadesVendidas)
  */
void Libro::setUnidadesVendidas(int valor)
{
    m_unidadesVendidas =  valor;
}

/** @brief (Retorna las cantidades vendidas)
  *
  * (valor de la propiedad unidadesVendidas)
  */
int Libro::getUnidadesVendidas()
{
    return m_unidadesVendidas;
}

/** @brief (Setter precio base)
  *
  * (carga el valor de el precio base)
  */
void Libro::setPrecioBase(float valor)
{
    m_precioBase = valor;
}

/** @brief (Retorna el precio base)
  *
  * (el valor de la propiedad precio base)
  */
float Libro::getPrecioBase()
{
    return m_precioBase;
}

/** @brief (Settea el titulo)
  *
  * (carga la propiedad titulo)
  */
void Libro::setTitulo(Cadena titulo)
{
    m_titulo = titulo;
}

/** @brief (Retorna el titulo)
  *
  * (retorna el valor de la propiedad titulo)
  */
Cadena Libro::getTitulo()
{
    return m_titulo;
}

/** @brief (Settea el ISBN)
  *
  * (carga la propiedad isbn)
  */
void Libro::setIsbn(long int isbn)
{
    m_isbn = isbn;
}

/** @brief (Retorna el isbn)
  *
  * (retorna el valor del isbn)
  */
long int Libro::getIsbn()
{
    return m_isbn;
}

