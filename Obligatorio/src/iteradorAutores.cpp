#include "iteradorAutores.h"

iteradorAutores::iteradorAutores(){

    prim = NULL;
    ulti = NULL;
    actual = NULL;

}

 void iteradorAutores::insertar (Autor * aut){

    Nodo * nuevo = new Nodo;
    nuevo -> info = aut;
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

bool iteradorAutores::hayMasAutores(){

     return (actual != NULL);

}

Autor * iteradorAutores::proximoAutor(){

     Autor * resu = actual -> info;
     actual = actual -> sig;
     return resu;
}

iteradorAutores :: ~iteradorAutores (){
     Nodo * aux = prim;
     while (aux != NULL)
     {
        prim = prim -> sig;
        delete aux;
        aux = prim;
     }

}
