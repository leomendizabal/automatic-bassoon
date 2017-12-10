#ifndef NOVELA_H
#define NOVELA_H

#include <Libro.h>
#include "Autor.h"


class Novela : public Libro
{
    public:

        /** constructors and destructor */
        Novela();
        Novela(long int, String, float, int, String);
        Novela(const Novela& other);
        virtual ~Novela();

        /** Operators override **/
        Novela& operator=(const Novela& other);

        /** Getters and Setters **/
        String getGenero();
        void setGenero(String);
        void setAutor(Autor *);

        tipoLibro getTipo();

        float getPrecio();

        Autor * getAutor();

        String toString();
        String toStringComplete();

    private:

        String genero;
        Autor * autor;
};

#endif // NOVELA_H
