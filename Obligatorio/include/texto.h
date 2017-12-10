#ifndef TEXTO_H
#define TEXTO_H

#include <Libro.h>
#include <fecha.h>

class Texto : public Libro
{
    public:

        /** constructors and destructor */
        Texto();
        Texto(long int, String, float, int, String, Fecha);
        Texto(const Texto& other);
        virtual ~Texto();

        /** Operators override **/
        Texto& operator=(const Texto& other);

        /** Getters and Setters **/
        String getMateria();
        void setMateria(String);

        Fecha getFecha();
        void setFecha(Fecha);

        float getPrecio();
        tipoLibro getTipo();

        String toString();
        String toStringComplete();
    private:

        String materia;
        Fecha fechaPublicado;
};

#endif // TEXTO_H
