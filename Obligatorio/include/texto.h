#ifndef TEXTO_H
#define TEXTO_H

#include <Libro.h>
#include <fecha.h>

class Texto : public Libro
{
    public:

        /** constructors and destructor */
        Texto();
        Texto(long int, Cadena, float, int, Cadena, Fecha);
        Texto(const Texto& other);
        virtual ~Texto();

        /** Operators override **/
        Texto& operator=(const Texto& other);

        /** Getters and Setters **/
        Cadena getMateria();
        void setMateria(Cadena);

        Fecha getFecha();
        void setFecha(Fecha);

        float getPrecioBase();

    private:

        Cadena materia;
        Fecha fechaPublicado;
};

#endif // TEXTO_H
