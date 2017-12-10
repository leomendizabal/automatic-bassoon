#include "fachada.h"

Fachada::Fachada() : autores(), libros(){

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

void Fachada::listarLibro(long int isbn){
    bool existe = libros.member(isbn);

    if(existe){
        Libro * l = libros.find(isbn);
        l->toStringComplete().print();

        if(l->getTipo() == NOVELA){
            Autor * autor = ((Novela*)l)->getAutor();

            if(autor){
                autor->toString().print();
            }
        }
    }else {
        printf("el libro NO existe");
    }
}

void Fachada::listarLibros(){

    IteradorLibros iterador = libros.listarLibros();

    while(iterador.hayMasLibros()){
        Libro * l = iterador.proximoLibro();
        l->toString().print();
    }
}

void Fachada::setLibros(Libros)
{

}

void Fachada::setAutores(Autores diccionario)
{
    autores = diccionario;
}

