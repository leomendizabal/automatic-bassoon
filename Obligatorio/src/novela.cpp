#include "novela.h"

Novela::Novela(){

}

Novela::Novela(long int isbn, Cadena titulo, float precioBase, int unidadesVendidas, Cadena genero)
    : Libro(isbn, titulo, precioBase, unidadesVendidas){
        this->genero = genero;
        autor=NULL;
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
    this->genero = genero;
}

void Novela::setAutor(Autor * aut){
    autor = aut;
}

tipoLibro Novela::getTipo(){
    return NOVELA;
}

float Novela::getPrecio(){
    float precio = getPrecioBase();

    if(genero == "infantil"){
        precio -= (precio * DESCUENTO_NOVELA_INFANTIL);
    }

    return precio;
}

Cadena Novela::toString(){
    return Libro::toString() + "NOVELA\n";
}

