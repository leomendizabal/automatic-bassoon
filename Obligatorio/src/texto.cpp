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
    this->fechaPublicado = fecha;
}

Fecha Texto::getFecha(){
    return fechaPublicado;
}

void Texto::setMateria(Cadena materia){
    this->materia = materia;
}

Cadena Texto::getMateria(){
    return materia;
}

float Texto::getPrecio(){
    float precio = getPrecioBase();
    Fecha f(1,1,2017);

    if(fechaPublicado < f){
        precio -= (precio * DESCUENTO_LIBRO_ANTIGUO);
    }

    return precio;
}

tipoLibro Texto::getTipo(){
    return TEXTO;
}

Cadena Texto::toString(){
    return Libro::toString() + "TEXTO\n";
}

Cadena Texto::toStringComplete(){
    return Libro::toStringComplete() + " materia: " + this->materia + " Fecha 1/1/1990"; //TODO: implementar toString de fecha
}
