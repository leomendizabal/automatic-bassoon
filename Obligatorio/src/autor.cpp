#include "autor.h"

Autor::Autor(){
    //ctor
}

Autor::Autor(const Autor& other){
    //copy ctor
}

Autor::Autor(long int ci, String nomb, Fecha fechaNac) :nombre(nomb), fecNacimiento(fechaNac){
    this->cedula = ci;
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
    this->cedula = ci;
}

String Autor::getNombre(){
    return nombre;
}

void Autor::setNombre(String nombre){
    this->nombre = nombre;
}

Fecha Autor::getFecNacimiento(){
    return fecNacimiento;
}

void Autor::setFecNacimiento(Fecha fechaNac){
    this->fecNacimiento = fechaNac;
}


String Autor::toString(){
    String separador(" - ");

    return CadenaUtils::convetirACadena(this->cedula) + separador + this->nombre + separador + this->fecNacimiento.toString() + "\n";
}

