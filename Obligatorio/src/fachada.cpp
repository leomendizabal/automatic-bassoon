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

void Fachada::registrarLibro(Libro * l){
    libros.insert(l);
}

void Fachada::cantidadTotalVendida(int novelas, int texto, int escolar){
    IteradorLibros iter = libros.listarLibros();
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

void Fachada::listarLibroMasVendido(){
       if (libros.esVacio())
            printf("Error , No hay ningun libro registrado");
       else{

       }


}

void Fachada::registrarVenta(long int isbn){
     bool consulta = libros.member(isbn);
     if(consulta){
         Libro * vendido = libros.find(isbn);
         int cantidad = vendido->getUnidadesVendidas() + 1;
         vendido ->setUnidadesVendidas(cantidad);
     } else {
        //mensaje de error
     }
}

float Fachada::calcularMontoTotal(){
    float resultado = 0;
    IteradorLibros iter = libros.listarLibros();
    while (iter.hayMasLibros()) {
        Libro * libro = iter.proximoLibro();
        resultado += libro->getPrecio();
    }
    return resultado;
}

void Fachada::listarAutores(){
    iteradorAutores i;
    autores.listarAutores(i);
    while(i.hayMasAutores()){
        Autor * aux = i.proximoAutor();
        std::cout << "Autor: "<< aux->getCedula() << "\n";
    }
}

void Fachada::registrarAutor(Autor * autor){

        long int ced = autor->getCedula();
        if (autores.member(ced))
            printf("Error , el autor ya existe");
        else
            autores.insert(autor);

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

void Fachada::setLibros()
{
    Seed s;
    libros = s.generarLibros(5);

}

void Fachada::setAutores()
{
    //Seed s;
    //s.generarAutores(autores,5);

}

