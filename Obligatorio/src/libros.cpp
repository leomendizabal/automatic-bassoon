#include "libros.h"

Libros::Libros(){
    for (int i=0; i < TAM; i++)
        crearLista(hash[i]);
}

Libros::~Libros(){
    for (int i=0; i < TAM; i++)
        destruirLista(hash[i]);
}

bool Libros::member(int num){
    int cubeta = h(num);
    return perteneceLista (hash[cubeta], num);
}

void Libros::insert(Libro * l){
    int num = l->getIsbn();
    int cubeta = h(num);

    insFrontEnLista(hash[cubeta], l);
}

Libro * Libros::find (int num){
    int cubeta = h(num);
    return obtenerEnLista(hash[cubeta], num);
}

bool Libros::esVacio(){
    bool vacio=true;
    int i=0;
    while ((i<TAM) && vacio){
        if (hash[i]==NULL)
            i++;
        else
            vacio=false;
    }
    return vacio;
}

void Libros::listarLibroMasVendido(){
            Libro * max;
            int i=0;
            while (hash[i]==NULL){ // busco el primer Libro
            i++;
            }
            max = hash[i]->info;
            for (int j=i+1; j < TAM; j++){ // comparo con los restantes
               if (hash[j]!=NULL)
                   if (hash[j]->info->getUnidadesVendidas() > max->getUnidadesVendidas())
                        max = hash[j]->info;
            }


}

int Libros::h(int num){
    return (num % TAM);
}

void Libros::crearLista(Nodo * &L){
    L = NULL;
}

void Libros::destruirLista(Nodo * &L){
    Nodo * aux = L;
    while (aux != NULL){
        L = aux->sig;
        delete (aux);
        aux = L;
    }

    L = aux;
}

bool Libros::perteneceLista(Nodo * L, int isbn){
    bool existe = false;
    while (!existe && L != NULL)
        if (L->info->getIsbn() == isbn)
            existe = true;
        else
            L = L->sig;

    return existe;
}

void Libros::insFrontEnLista(Nodo * &L, Libro * lib){
    Nodo * aux = new Nodo;
    aux->info = lib;
    aux->sig = L;
    L = aux;
}

Libro * Libros::obtenerEnLista(Nodo * L, int isbn){
    while (L->info->getIsbn() != isbn)
        L = L->sig;

    return (L->info);
}

IteradorLibros Libros::listarLibros(){
    IteradorLibros iterador;

    for(int i=0; i<TAM; i++){
        while(hash[i] != NULL){
            iterador.insertar(hash[i]->info);
            hash[i] = hash[i]->sig;
        }
    }

    return iterador;
}
