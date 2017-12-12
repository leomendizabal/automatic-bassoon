#include "escolar.h"

Escolar::Escolar(){
    //ctor
}

Escolar::Escolar(long int isbn, String titulo, float precioBase, int unidadesVendidas, String materia, Fecha fechaPub, int anioEscuela)
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

float Escolar::getPrecio(){
    float precio = getPrecioBase();

    if(anioEscuela <= 3){
        precio -= precio * DESCUENTO_ESCOLAR;
    }

    return precio;
}

tipoLibro Escolar::getTipo(){
    return ESCOLAR;
}

String Escolar::toString(){
    String s("ESCOLAR\n");
    return Libro::toString() + s;
}

String Escolar::toStringComplete(){
    String a(" Año: ");
    String salto("\n");
    return Libro::toStringComplete() + a + CadenaUtils::convetirACadena(this->anioEscuela) + salto;
}
