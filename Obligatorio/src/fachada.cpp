#include "fachada.h"
#include<stdio.h>
Fachada::Fachada(){
    this->libros = Libros();
    this->autores = Autores();
}

Fachada::~Fachada(){
    //dtor
}


int Fachada::cantidadAutoresPosterior(Fecha fecha){
    iteradorAutores i;
    int result = 0;
    autores.listarAutores(i);
    while(i.hayMasAutores()) {
        Autor * aut = i.proximoAutor();
        if(aut->getFecNacimiento() < fecha){
            result+=1;
        }
    }
    return result;
}

void Fachada::registrarLibro(Libro * l){
    libros.insert(l);
}

int Fachada::cantidadTotalVendida(){

}

void Fachada::listarLibroMasVendido(){


}

void Fachada::registrarVenta(long int cedula){

}

float Fachada::calcularMontoTotal(){

}

void Fachada::listarAutores(){
    iteradorAutores i;
    autores.listarAutores(i);
    while(i.hayMasAutores()){
        Autor * aux = i.proximoAutor();
        printf("%ld",aux->getCedula()) ;
    }
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

void Fachada::setLibros(Libros)
{

}

void Fachada::setAutores(Autores diccionario)
{
    autores = diccionario;
}

