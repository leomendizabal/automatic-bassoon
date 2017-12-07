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
