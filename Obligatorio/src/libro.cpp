#include "libro.h"

Libro::Libro(){
    //ctor
}

Libro::Libro(long int isbn, Cadena titulo, float precioBase, int unidadesVendidas) : titulo(titulo){
    this->isbn = isbn;
    this->precioBase = precioBase;
    this->unidadesVendidas = unidadesVendidas;
}

Libro::Libro(const Libro& other){
    //copy ctor
}

Libro::~Libro(){
    //dtor
}

void Libro::setUnidadesVendidas(int valor){
    this->unidadesVendidas =  valor;
}

int Libro::getUnidadesVendidas(){
    return unidadesVendidas;
}

void Libro::setPrecioBase(float valor){
    this->precioBase = valor;
}

float Libro::getPrecioBase(){
    return precioBase;
}

void Libro::setTitulo(Cadena titulo){
    this->titulo = titulo;
}

Cadena Libro::getTitulo(){
    return titulo;
}

void Libro::setIsbn(long int isbn){
    this->isbn = isbn;
}

long int Libro::getIsbn(){
    return isbn;
}

Cadena Libro::toString(){
    Cadena libro;
    Cadena separador(" - ");

    libro = /*CadenaUtils::convetirACadena(this->isbn)+*/separador+this->titulo+separador;

    return libro;
}

Cadena Libro::toStringComplete(){
    Cadena detalle;
    char * t = "titulo: ";
    Cadena titulo(t);

    detalle = titulo+this->titulo;
    //Cadena("ISBN: ")+CadenaUtils::convetirACadena(this->isbn)+" Titulo: "+this->titulo+" Precio base: " + CadenaUtils::convetirACadena(this->precioBase)+" unidades vendidas: "+CadenaUtils::convetirACadena(this->unidadesVendidas);

    return detalle;
}
