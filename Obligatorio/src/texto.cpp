#include "texto.h"

Texto::Texto(){
    //ctor
}

Texto::Texto(long int isbn, Cadena titulo, float precioBase, int unidadesVendidas, Cadena materia, Fecha fechaPub)
    : Libro(isbn, titulo, precioBase, unidadesVendidas),
    fechaPublicado(fechaPub){
        materia = materia;
}


Texto::~Texto(){
    //dtor
}

Texto::Texto(const Texto& other){
    //copy ctor
}

Texto& Texto::operator=(const Texto& rhs){
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}

void Texto::setFecha(Fecha fecha){
    fechaPublicado = fecha;
}

Fecha Texto::getFecha(){
    return fechaPublicado;
}

void Texto::setMateria(Cadena materia){
    materia = materia;
}

Cadena Texto::getMateria(){
    return materia;
}

float Texto::getPrecioBase(){
    return Libro::getPrecioBase(); // calcular precio base
}
