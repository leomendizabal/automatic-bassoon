#ifndef AUTORES_H
#define AUTORES_H
#include "autor.h"

class Autores
{
    public:
        Autores();
        virtual ~Autores();

        bool member(long int);

        void insert(Autor *);

        Autor * find(long int);

//      Implementar iterador
//        void listarAutores (Iterador &);

    protected:

    private:
        struct Nodo {
            Autor * info;
            Nodo * hizq;
            Nodo * hder;
        };
        Nodo * ABB;

        void destruirArbol(Nodo * &);

        bool perteneceEnArbol(Nodo *, long int);

        void insertarEnArbol(Nodo * &, Autor *);

        Autor * obtenerEnArbol(Nodo *, long int);

 //       void cargarIterador(Nodo *, Iterador &); // Falta implementar

};

#endif // AUTORES_H
