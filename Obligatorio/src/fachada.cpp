#include "fachada.h"

Fachada::Fachada()
{
    //ctor
}

Fachada::~Fachada()
{
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

void Fachada::listarLibroMasVendido()
{

}

int Fachada::cantidadTotalVendida()
{

}

void Fachada::registrarVenta(long int cedula)
{

}

float Fachada::calcularMontoTotal()
{

}

void Fachada::listarAutores()
{

}

void Fachada::registrarAutor(Autor autor)
{

}

void Fachada::listarLibro(long int cedula)
{

}

void Fachada::listarLibros()
{

}

/*void Fachada::registrarLibro(Libro)
{

}
*/
