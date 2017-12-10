#ifndef AUTORES_H
#define AUTORES_H
#include<iostream>
#include "autor.h"
#include "iteradorAutores.h"

class Autores
{
    public:
        Autores();
        virtual ~Autores();

        bool member(long int);

        void insert(Autor *);

        Autor * find(long int);

        void listarAutores (iteradorAutores &);

        bool esVacio();

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

        void cargarIterador(Nodo *, iteradorAutores &);

};

#endif // AUTORES_H
