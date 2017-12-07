#ifndef NOVELA_H
#define NOVELA_H

#include <Libro.h>


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

        tipoLibro getTipo();

        float getPrecio();
    private:

        Cadena genero;
};

#endif // NOVELA_H
