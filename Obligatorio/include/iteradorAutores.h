#ifndef ITERADORAUTORES_H
#define ITERADORAUTORES_H
#include<iostream>
#include "autor.h"

class iteradorAutores
{
    public:
         iteradorAutores();
         // constructor por defecto
         void insertar (Autor *);
         // inserta un dueño en el iterador
         bool hayMasAutores ();
         // determina si quedan dueños por visitar en el iterador
         Autor * proximoAutor ();
         // retorna el proximo duenio por visitar en el iterador
        ~iteradorAutores();
         // destructor

    private:

        struct Nodo { Autor * info;
                       Nodo * sig;
                    };
        Nodo * prim;
        Nodo * ulti;
        Nodo * actual;

};

#endif // ITERADORAUTORES_H
