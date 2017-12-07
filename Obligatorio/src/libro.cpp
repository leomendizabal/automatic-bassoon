#include "libro.h"

Libro::Libro(){
    //ctor
}

Libro::Libro(long int isbn, Cadena titulo, float precioBase, int unidadesVendidas) : titulo(titulo){
    isbn = isbn;
    precioBase = 129;//precioBase;
    unidadesVendidas = unidadesVendidas;
}

Libro::Libro(const Libro& other){
    //copy ctor
}

Libro::~Libro(){
    //dtor
}

void Libro::setUnidadesVendidas(int valor){
    unidadesVendidas =  valor;
}

int Libro::getUnidadesVendidas(){
    return unidadesVendidas;
}

void Libro::setPrecioBase(float valor){
    precioBase = valor;
}

float Libro::getPrecioBase(){
    return precioBase;
}

void Libro::setTitulo(Cadena titulo){
    titulo = titulo;
}

Cadena Libro::getTitulo(){
    return titulo;
}

void Libro::setIsbn(long int isbn){
    isbn = isbn;
}

long int Libro::getIsbn(){
    return isbn;
}
