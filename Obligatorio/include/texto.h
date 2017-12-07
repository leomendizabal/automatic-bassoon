#ifndef TEXTO_H
#define TEXTO_H

#include <Libro.h>
#include <fecha.h>

class Texto : public Libro
{
    public:

        /** Default constructor */
        Texto();

        Texto(long int, Cadena, float, int, Cadena, Fecha);
        /** Default destructor */
        virtual ~Texto();
        /** Copy constructor
         *  \param other Object to copy from
         */
        Texto(const Texto& other);
        /** Assignment operator
         *  \param other Object to assign from
         *  \return A reference to this
         */
        Texto& operator=(const Texto& other);

        Cadena getMateria();
        void setMateria(Cadena);

        Fecha getFecha();
        void setFecha(Fecha);

        float getPrecioBase();
    protected:

    private:
        Cadena m_materia;
        Fecha m_fechaPublicado;
};

#endif // TEXTO_H
