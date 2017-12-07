#ifndef AUTOR_H
#define AUTOR_H

#include<cadena.h>
#include<fecha.h>

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

        long int getCedula();
        void setCedula(long int);

        Cadena getNombre();
        void setNombre(Cadena);

        Fecha getFecNacimiento();
        void setFecNacimiento(Fecha);

    protected:

    private:
        long int m_cedula;
        Cadena m_nombre;
        Fecha m_fec_nacimiento;
};

#endif // AUTOR_H
