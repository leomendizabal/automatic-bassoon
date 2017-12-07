#include "novela.h"

Novela::Novela(){
    //ctor
}

Novela::Novela(long int isbn, Cadena titulo, float precioBase, int unidadesVendidas, Cadena genero)
    : Libro(isbn, titulo, precioBase, unidadesVendidas){
        genero = genero;
}

Novela::Novela(const Novela& other){
    //copy ctor
}

Novela& Novela::operator=(const Novela& rhs){
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}

Novela::~Novela(){
    //dtor
}

Cadena Novela::getGenero(){
    return genero;
}

void Novela::setGenero(Cadena genero){
    genero = genero;
}

tipoLibro Novela::getTipo(){
    return NOVELA;
}

float Novela::getPrecio(){
    float precio = getPrecioBase();

    if(genero == "infantil"){
        precio -= precio * DESCUENTO_NOVELA;
    }

    return precio;
}
