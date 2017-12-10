#ifndef AUTOR_H
#define AUTOR_H

#include<cadena.h>
#include<fecha.h>

class Autor
{
    public:

        /** constructors and destructor */
        Autor();
        Autor(long int, Cadena, Fecha);
        Autor(const Autor& other);
        virtual ~Autor();

        /** Operators override **/
        Autor& operator=(const Autor& other);

        /** Getters and Setters **/
        long int getCedula();
        void setCedula(long int);

        Cadena getNombre();
        void setNombre(Cadena);

        Fecha getFecNacimiento();
        void setFecNacimiento(Fecha);
        void listarInfoAutor();

    private:

        long int cedula;
        Cadena nombre;
        Fecha fecNacimiento;
};

#endif // AUTOR_H
