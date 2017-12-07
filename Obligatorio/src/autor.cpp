#include "autor.h"

Autor::Autor(){
    //ctor
}

Autor::Autor(const Autor& other){
    //copy ctor
}

Autor::Autor(long int ci, Cadena nombre, Fecha fechaNac) : fecNacimiento(fechaNac){
    cedula = ci;
    nombre = nombre;
}

Autor::~Autor(){
    //dtor
}

Autor& Autor::operator=(const Autor& rhs){
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}

long int Autor::getCedula(){
    return cedula;
}

void Autor::setCedula(long int ci){
    cedula = ci;
}

Cadena Autor::getNombre(){
    return nombre;
}

void Autor::setNombre(Cadena nombre){
    nombre = nombre;
}

Fecha Autor::getFecNacimiento(){
    return fecNacimiento;
}

void Autor::setFecNacimiento(Fecha fechaNac){
    fecNacimiento = fechaNac;
}
