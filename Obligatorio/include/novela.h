#ifndef NOVELA_H
#define NOVELA_H

#include <Libro.h>


class Novela : public Libro
{
    public:
        /** Default constructor */
        Novela();
        /** Default destructor */
        virtual ~Novela();
        /** Copy constructor
         *  \param other Object to copy from
         */
        Novela(const Novela& other);
        /** Assignment operator
         *  \param other Object to assign from
         *  \return A reference to this
         */
        Novela& operator=(const Novela& other);

    protected:

    private:
};

#endif // NOVELA_H
