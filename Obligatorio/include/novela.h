#ifndef NOVELA_H
#define NOVELA_H

#include <Libro.h>
#include "Autor.h"


class Novela : public Libro
{
    public:

        /** constructors and destructor */
        Novela();
        Novela(long int, Cadena, float, int, Cadena);
        Novela(const Novela& other);
        virtual ~Novela();

        /** Operators override **/
        Novela& operator=(const Novela& other);

        /** Getters and Setters **/
        Cadena getGenero();
        void setGenero(Cadena);
        void setAutor(Autor *);

        tipoLibro getTipo();

        float getPrecio();
    private:

        Cadena genero;
        Autor * autor;
};

#endif // NOVELA_H
