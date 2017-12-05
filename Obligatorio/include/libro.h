#ifndef LIBRO_H
#define LIBRO_H


class Libro
{
    public:
        /** Default constructor */
        Libro();
        /** Default destructor */
        virtual ~Libro();
        /** Copy constructor
         *  \param other Object to copy from
         */
        Libro(const Libro& other);
        /** Assignment operator
         *  \param other Object to assign from
         *  \return A reference to this
         */
        Libro& operator=(const Libro& other);

    protected:

    private:
};

#endif // LIBRO_H
