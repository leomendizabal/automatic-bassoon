#ifndef ESCOLAR_H
#define ESCOLAR_H

#include <Texto.h>


class Escolar : public Texto
{
    public:

        /** constructors and destructor */
        Escolar();
        Escolar(long int, Cadena, float, int, Cadena, Fecha, int);
        Escolar(const Escolar& other);
        virtual ~Escolar();

        /** Operators override **/
        Escolar& operator=(const Escolar& other);

        /** Getters and Setters **/
        int getAnioEscuela();
        void setAnioEscuela(int);

    private:

        int anioEscuela;
};

#endif // ESCOLAR_H
