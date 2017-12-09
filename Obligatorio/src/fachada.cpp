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

void Fachada::registrarAutor(Autor * autor){
        long int ced = autor->getCedula();
        if (autores.member(ced))
            printf("Error , el autor ya existe");
        else
            autores.insert(autor);
}

void Fachada::listarLibro(long int cedula){

}

void Fachada::listarLibros(){

    IteradorLibros iterador = libros.listarLibros();

    while(iterador.hayMasLibros()){
        Libro * l = iterador.proximoLibro();
        switch(l->getTipo()){
        case NOVELA:
            printf("novela\n");
            break;
        case TEXTO:
            printf("texto\n");
            break;
        case ESCOLAR:
            printf("escolar\n");
            break;
        }
    }

    //TODO:
    //implementar esta funcion con el iterador

    /*Libro * novela = libros.find(1234);
    float precioNovela = novela->getPrecio();
    int isbn = novela->getIsbn();
    printf("Precio total: %f, ISBN: %d\n\n", precioNovela, isbn);

    Libro * e = libros.find(1111);
    float precioEscolar = e->getPrecio();
    printf("precio escolar: %f\n", precioEscolar);

    Libro * t = libros.find(1232);
    float precioTexto = t->getPrecio();
    printf("precio texto: %f", precioTexto);
    */
}

