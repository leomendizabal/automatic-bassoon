#include "iteradorLibros.h"

IteradorLibros::IteradorLibros(){

    prim = NULL;
    ulti = NULL;
    actual = NULL;

}

 void IteradorLibros::insertar(Libro * lib){

    Nodo * nuevo = new Nodo;
    nuevo -> info = lib;
    nuevo -> sig = NULL;
    if (prim == NULL){
        prim = nuevo;
        ulti = nuevo;
        actual = nuevo;
    }else{
        ulti -> sig = nuevo;
        ulti = ulti -> sig;
    }

 }

bool IteradorLibros::hayMasLibros(){

     return (actual != NULL);

}

Libro * IteradorLibros::proximoLibro(){

     Libro * resu = actual -> info;
     actual = actual -> sig;
     return resu;
}

IteradorLibros::~IteradorLibros(){
     Nodo * aux = prim;
     while (aux != NULL){
        prim = prim -> sig;
        delete aux;
        aux = prim;
     }

}

