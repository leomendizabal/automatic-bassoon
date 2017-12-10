#include "libro.h"

Libro::Libro(){
    //ctor
}

Libro::Libro(long int isbn, String titulo, float precioBase, int unidadesVendidas) : titulo(titulo){
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

void Libro::setTitulo(String titulo){
    this->titulo = titulo;
}

String Libro::getTitulo(){
    return titulo;
}

void Libro::setIsbn(long int isbn){
    this->isbn = isbn;
}

long int Libro::getIsbn(){
    return isbn;
}

String Libro::toString(){
    String libro;
    String separador(" - ");

    libro = CadenaUtils::convetirACadena(this->isbn)+separador+this->titulo+separador;

    return libro;
}

String Libro::toStringComplete(){
    String detalle;

    detalle = String("Titulo: ")+this->titulo+String(" ISBN: ")+CadenaUtils::convetirACadena(this->isbn)+String(" Titulo: ")+this->titulo+String(" Precio base: ") + CadenaUtils::convetirACadena(this->precioBase)+String(" unidades vendidas: ")+CadenaUtils::convetirACadena(this->unidadesVendidas);

    return detalle;
}
