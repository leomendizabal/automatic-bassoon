#include "iteradorLibros.h"

iteradorLibros::iteradorLibros(){

    prim = NULL;
    ulti = NULL;
    actual = NULL;

}

 void iteradorLibros::insertar (Libro * lib){

    Nodo * nuevo = new Nodo;
    nuevo -> info = lib;
    nuevo -> sig = NULL;
    if (prim == NULL)
    {
        prim = nuevo;
        ulti = nuevo;
        actual = nuevo;
    }
    else
    {
        ulti -> sig = nuevo;
        ulti = ulti -> sig;
    }

 }

bool iteradorLibros::hayMasLibros() {

     return (actual != NULL);

}

Libro * iteradorLibros::proximoLibro(){

     Libro * resu = actual -> info;
     actual = actual -> sig;
     return resu;
}

iteradorLibros :: ~iteradorLibros (){
     Nodo * aux = prim;
     while (aux != NULL)
     {
        prim = prim -> sig;
        delete aux;
        aux = prim;
     }

}


