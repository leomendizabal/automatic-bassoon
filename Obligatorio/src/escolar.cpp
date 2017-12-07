#include "escolar.h"

Escolar::Escolar(){
    //ctor
}

Escolar::Escolar(long int isbn, Cadena titulo, float precioBase, int unidadesVendidas, Cadena materia, Fecha fechaPub, int anioEscuela)
    : Texto(isbn, titulo, precioBase, unidadesVendidas, materia, fechaPub){
        anioEscuela = anioEscuela;
}

Escolar::Escolar(const Escolar& other){
    //copy ctor
}

Escolar::~Escolar(){
    //dtor
}

Escolar& Escolar::operator=(const Escolar& rhs){
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}

int Escolar::getAnioEscuela(){
    return anioEscuela;
}

void Escolar::setAnioEscuela(int anioEscuela){
    this->anioEscuela = anioEscuela;
}
