#ifndef SEED_H
#define SEED_H
#include<stdlib.h>
#include<time.h>

#include"libros.h"
#include"autores.h"

#include"texto.h"
#include"escolar.h"
#include"novela.h"

class Seed
{
    public:
        Seed();
        virtual ~Seed();
        Libros generarLibros(int);
        void generarAutores(Autores&,int);
    protected:

    private:
        Autores aut_diccionario;
        Libros lib_diccionario;

        Libro * generarLibro();
        Autor * generarAutor();

        int randomNumber(int,int);
        Fecha randomFecha();

};

#endif // SEED_H
