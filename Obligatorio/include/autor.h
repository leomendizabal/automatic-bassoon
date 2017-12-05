#ifndef AUTOR_H
#define AUTOR_H


class Autor
{
    public:
        /** Default constructor */
        Autor();
        /** Default destructor */
        virtual ~Autor();
        /** Copy constructor
         *  \param other Object to copy from
         */
        Autor(const Autor& other);
        /** Assignment operator
         *  \param other Object to assign from
         *  \return A reference to this
         */
        Autor& operator=(const Autor& other);

    protected:

    private:
};

#endif // AUTOR_H
