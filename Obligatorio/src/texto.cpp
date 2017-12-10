#include "texto.h"

Texto::Texto(){
    //ctor
}

Texto::Texto(long int isbn, String titulo, float precioBase, int unidadesVendidas, String materia, Fecha fechaPub)
    : Libro(isbn, titulo, precioBase, unidadesVendidas),
    fechaPublicado(fechaPub){
        this->materia = materia;
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

void Texto::setMateria(String materia){
    this->materia = materia;
}

String Texto::getMateria(){
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

String Texto::toString(){
    return Libro::toString() + String("TEXTO\n");
}

String Texto::toStringComplete(){
    return Libro::toStringComplete() + String(" materia: ") + this->materia + String(" Fecha publicado: ") + this->fechaPublicado.toString()+"\n";
}
