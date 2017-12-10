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
    }
}

void Fachada::registrarAutor(Autor * autor){
    autores.insert(autor);
}

void Fachada::listarLibro(int isbn){
    bool existe = libros.member(isbn);

    if(existe){
        Libro * l = libros.find(isbn);
        std::cout << l->toStringComplete().getCadena();
    }else {
        printf("el libro NO existe");
    }
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

