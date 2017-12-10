#ifndef LIBRO_H
#define LIBRO_H
#include <cadena.h>
#include <string.h>
#include "cadenautils.h"

enum tipoLibro {NOVELA, TEXTO, ESCOLAR};
const float DESCUENTO_NOVELA_INFANTIL = 0.20;
const float DESCUENTO_LIBRO_ANTIGUO = 0.25;
const float DESCUENTO_ESCOLAR = 0.10;

class Libro{
    public:

        /** constructors and destructor */
        Libro();
        Libro(long int, Cadena, float, int);
        Libro(const Libro& other);
        virtual ~Libro();

        /** Getters and Setters **/
        long int getIsbn();
        void setIsbn(long int);

        Cadena getTitulo();
        void setTitulo(Cadena);

        float getPrecioBase();
        void setPrecioBase(float);

        virtual float getPrecio() = 0;

        int getUnidadesVendidas();
        void setUnidadesVendidas(int);

        virtual tipoLibro getTipo() = 0;
        virtual Cadena toString();
        virtual Cadena toStringComplete();
    private:

        long int isbn;
        Cadena titulo;
        float precioBase;
        int unidadesVendidas;
};

#endif // LIBRO_H
