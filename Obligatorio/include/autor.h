#ifndef AUTOR_H
#define AUTOR_H
#include<str.h>
#include<fecha.h>

class Autor
{
    public:

        /** constructors and destructor */
        Autor();
        Autor(long int, String, Fecha);
        Autor(const Autor& other);
        virtual ~Autor();

        /** Operators override **/
        Autor& operator=(const Autor& other);

        /** Getters and Setters **/
        long int getCedula();
        void setCedula(long int);

        String getNombre();
        void setNombre(String);

        Fecha getFecNacimiento();
        void setFecNacimiento(Fecha);
        void listarInfoAutor();

    private:

        long int cedula;
        String nombre;
        Fecha fecNacimiento;
};

#endif // AUTOR_H
