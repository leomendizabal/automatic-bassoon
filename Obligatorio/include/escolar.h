#ifndef ESCOLAR_H
#define ESCOLAR_H

#include <Texto.h>


class Escolar : public Texto
{
    public:
        /** Default constructor */
        Escolar();
        /** Default destructor */
        virtual ~Escolar();
        /** Copy constructor
         *  \param other Object to copy from
         */
        Escolar(const Escolar& other);
        /** Assignment operator
         *  \param other Object to assign from
         *  \return A reference to this
         */
        Escolar& operator=(const Escolar& other);

    protected:

    private:
};

#endif // ESCOLAR_H
