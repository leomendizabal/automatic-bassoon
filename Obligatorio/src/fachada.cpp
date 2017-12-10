#include "fachada.h"
#include"seed.h"
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

void Fachada::registrarLibro(Libro * l, Error &e){
    if(libros.member(l->getIsbn())){
        e.setError(true);
        e.setNumeroError(LIBRO_YA_EXISTE);
    }else {
        libros.insert(l);
    }
}

void Fachada::cantidadTotalVendida(int novelas, int texto, int escolar){
    IteradorLibros iter;
    libros.listarLibros(iter);
    while(iter.hayMasLibros()){
        Libro * lib = iter.proximoLibro();
        switch(lib->getTipo()){
            case NOVELA:
                novelas += lib->getUnidadesVendidas();
                break;
            case TEXTO:
                texto += lib->getUnidadesVendidas();
                break;
            case ESCOLAR:
                escolar += lib->getUnidadesVendidas();
                break;
        }
    }
}

void Fachada::listarLibroMasVendido(Error &e){
       if (libros.esVacio()){

        e.setError(true);
        e.setNumeroError(DICCIONARIO_VACIO);
       }
       else{
            Libro * l=libros.obtenerLibroMasVendido();
            l->toStringComplete().print();

            if(l->getTipo() == NOVELA){
                   Autor * autor = ((Novela*)l)->getAutor();

            if(autor){
                autor->toString().print();
            }
        }
       }


}

void Fachada::registrarVenta(long int isbn, Error &e){
     bool consulta = libros.member(isbn);
     if(consulta){
         Libro * vendido = libros.find(isbn);
         int cantidad = vendido->getUnidadesVendidas() + 1;
         vendido ->setUnidadesVendidas(cantidad);
     } else {
        e.setError(true);
        e.setNumeroError(NO_EXISTE_LIBRO);
     }
}

float Fachada::calcularMontoTotal(){
    float resultado = 0;
    IteradorLibros iter;
    libros.listarLibros(iter);
    while (iter.hayMasLibros()) {
        Libro * libro = iter.proximoLibro();
        resultado += libro->getPrecio();
    }
    return resultado;
}

void Fachada::listarAutores(iteradorAutores &iter){
    autores.listarAutores(iter);
}

void Fachada::registrarAutor(Autor * autor,Error &e){

        long int ced = autor->getCedula();
        if (autores.member(ced)){
            e.setError(true);
            e.setNumeroError(AUTOR_YA_EXISTE);
        }
        else
            autores.insert(autor);

}

void Fachada::listarLibro(long int isbn,String &result, Error &e){
    bool existe = libros.member(isbn);

    if(existe){
        Libro * l = libros.find(isbn);
        result = l->toStringComplete();

        if(l->getTipo() == NOVELA){
            Autor * autor = ((Novela*)l)->getAutor();

            if(autor){
                result = result + autor->toString();
            }
        }
    }else {
            e.setError(true);
            e.setNumeroError(NO_EXISTE_LIBRO);
    }
}

void Fachada::listarLibros(IteradorLibros &iter){
    libros.listarLibros(iter);
}

void Fachada::setLibros()
{
    Seed s;
    s.generarLibros(5,libros);

}

void Fachada::setAutores()
{
    Seed s;
    s.generarAutores(autores,5);

}

bool Fachada::existeAutor(long int ci){
    return autores.member(ci);
}

Autor * Fachada::obtenerAutor(long int ci){
    return autores.find(ci);
}
