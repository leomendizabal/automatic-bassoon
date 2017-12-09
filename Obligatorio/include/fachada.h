#ifndef FACHADA_H
#define FACHADA_H
#include "autores.h"

class Fachada
{
    public:
        /** Default constructor */
        Fachada();
        /** Default destructor */
        virtual ~Fachada();

        /** Requerimientos **/
        //void registrarLibro(Libro);
        void listarLibros();
        void listarLibro(long int);
        void registrarAutor(Autor);
        void listarAutores();
        float calcularMontoTotal();
        void registrarVenta(long int);
        void cantidadTotalVendida();
        void listarLibroMasVendido();
        void cantidadAutoresPosterior(Fecha);

    protected:

    private:
        Autores autores;
};

#endif // FACHADA_H
