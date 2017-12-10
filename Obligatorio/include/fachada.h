#ifndef FACHADA_H
#define FACHADA_H
#include <stdio.h>
#include <iostream>
#include "error.h"
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
        void setAutores();
        void setLibros();

        /** Requerimientos **/
        void registrarLibro(Libro *, Error&);
        void listarLibros();
        void listarLibro(long int,String&,Error&);
        void registrarAutor(Autor *,Error&);
        void listarAutores(iteradorAutores &);
        float calcularMontoTotal();
        void registrarVenta(long int, Error&);
        void cantidadTotalVendida(int, int, int);
        void listarLibroMasVendido(Error&);
        int cantidadAutoresPosterior(Fecha);

        /** auxiliares **/
        bool existeAutor(long int ci);
        Autor * obtenerAutor(long int ci);

    private:
        Autores autores;
        Libros libros;
};

#endif // FACHADA_H
