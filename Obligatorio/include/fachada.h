#ifndef FACHADA_H
#define FACHADA_H
#include <stdio.h>
#include <iostream>
#include "autores.h"
#include "libros.h"
#include "libro.h"
#include "novela.h"
#include "texto.h"
#include "escolar.h"

class Fachada{
    public:
        /** Default constructor */
        Fachada();

        /** Default destructor */
        virtual ~Fachada();

        /**Get and set**/
        void setAutores(Autores);
        void setLibros(Libros);

        /** Requerimientos **/
        void registrarLibro(Libro *);
        void listarLibros();
        void listarLibro(long int);
        void registrarAutor(Autor *);
        void listarAutores();
        float calcularMontoTotal();
        void registrarVenta(long int);
        void cantidadTotalVendida(int, int, int);
        void listarLibroMasVendido();
        int cantidadAutoresPosterior(Fecha);

    private:
        Autores autores;
        Libros libros;
};

#endif // FACHADA_H
