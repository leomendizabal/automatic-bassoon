#ifndef LIBRO_H
#define LIBRO_H
#include <cadena.h>

enum Tipos {NOVELA, TEXTO, ESCOLAR};

class Libro
{
    public:


        /** Default constructor */
        Libro();
        Libro(long int, Cadena, float, int);
        /** Default destructor */
        virtual ~Libro();
        /** Copy constructor
         *  \param other Object to copy from
         */
        Libro(const Libro& other);

        /** Getter and Setter**/
        long int getIsbn();
        void setIsbn(long int);

        Cadena getTitulo();
        void setTitulo(Cadena);

        virtual float getPrecioBase();
        void setPrecioBase(float);

        int getUnidadesVendidas();
        void setUnidadesVendidas(int);

        virtual Tipos getTipo() = 0;

    protected:

    private:
        long int m_isbn;
        Cadena m_titulo;
        float m_precioBase;
        int m_unidadesVendidas;
};

#endif // LIBRO_H
