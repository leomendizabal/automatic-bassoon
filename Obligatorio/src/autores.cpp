#include "autores.h"


 //public
 Autores::~Autores() {
    destruirArbol(ABB);
 }

 Autores::Autores() {
    ABB = NULL;
 }

 Autor* Autores::find(long int clave){
    return obtenerEnArbol(ABB, clave);
 }

 void Autores::insert(Autor * info){
    insertarEnArbol(ABB, info);
 }

 bool Autores::member(long int clave){
    return perteneceEnArbol(ABB, clave);
 }

//Implementar
/*void Autores :: listarAutores(Iterador &iter){
    cargarIterador(ABB, iter);
}*/


 //private
 Autor* Autores::obtenerEnArbol(Nodo *a, long int cedula) {
    while (cedula != a->info->getCedula()){
        if (cedula < a->info->getCedula()){
           a = a->hizq;
        } else {
           a = a->hder;
        }
    }
    return (a->info);
 }

 void Autores::insertarEnArbol(Nodo * &a, Autor * autor) {
    if (a == NULL) {
        a = new Nodo;
        a -> info = autor;
        a -> hizq = NULL;
        a -> hder = NULL;
    } else {
          if (autor->getCedula() < a->info->getCedula()){
            insertarEnArbol(a->hizq, autor);
          } else {
            insertarEnArbol(a->hder, autor);
          }
    }

 }

 bool Autores::perteneceEnArbol(Nodo * a , long int cedula){
    bool encontre = false;
    while (!encontre && a != NULL){
      if (cedula == a->info->getCedula()){
           encontre = true;
        } else {
            if (cedula < a->info->getCedula()){
                a = a->hizq;
            } else {
                a = a->hder;
            }
        }
    }

    return encontre;
 }

 void Autores::destruirArbol(Nodo * &a){
    if (a != NULL) {
        destruirArbol(a->hizq);
        destruirArbol(a->hder);
        delete (a->info);
        delete (a);
        a = NULL;
    }
 }
