#ifndef TEXTO_H
#define TEXTO_H

#include <Libro.h>


class Texto : public Libro
{
    public:
        /** Default constructor */
        Texto();
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

    protected:

    private:
};

#endif // TEXTO_H
