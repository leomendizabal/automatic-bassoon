#include "fachada.h"

Fachada::Fachada(){
    this->libros = Libros();
    this->autores = Autores();
}

Fachada::~Fachada(){
    //dtor
}

void Fachada::registrarLibro(Libro * l){
    libros.insert(l);
}

void Fachada::cantidadAutoresPosterior(Fecha fecha){

}

void Fachada::listarLibroMasVendido(){

}

void Fachada::cantidadTotalVendida(){

}

void Fachada::registrarVenta(long int cedula){

}

float Fachada::calcularMontoTotal(){

}

void Fachada::listarAutores(){

}

void Fachada::registrarAutor(Autor autor){

}

void Fachada::listarLibro(long int cedula){

}

void Fachada::listarLibros(){

    IteradorLibros iterador = libros.listarLibros();

    while(iterador.hayMasLibros()){
        Libro * l = iterador.proximoLibro();
        std::cout << l->toString().getCadena();
    }
}

