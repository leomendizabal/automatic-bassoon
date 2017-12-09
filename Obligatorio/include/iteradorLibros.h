#ifndef ITERADORLIBROS_H
#define ITERADORLIBROS_H
#include "libro.h"


class iteradorLibros
{
    public:
         iteradorLibros();
         // constructor por defecto
         void insertar (Libro *);
         // inserta un dueño en el iterador
         bool hayMasLibros ();
         // determina si quedan dueños por visitar en el iterador
         Libro * proximoLibro ();
         // retorna el proximo duenio por visitar en el iterador
        ~iteradorLibros();
         // destructor

    private:

        struct Nodo { Libro * info;
                       Nodo * sig;
                    };
        Nodo * prim;
        Nodo * ulti;
        Nodo * actual;
};

#endif // ITERADORLIBROS_H
