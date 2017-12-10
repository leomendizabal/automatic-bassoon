#include "novela.h"

Novela::Novela(){

}

Novela::Novela(long int isbn, String titulo, float precioBase, int unidadesVendidas, String genero)
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

String Novela::getGenero(){
    return genero;
}

void Novela::setGenero(String genero){
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

String Novela::toString(){
    return Libro::toString() + "NOVELA\n";
}

String Novela::toStringComplete(){
    return Libro::toStringComplete() + " genero: " + this->genero + "\n";
}
