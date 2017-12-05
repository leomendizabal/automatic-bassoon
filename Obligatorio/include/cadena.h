#ifndef CADENA_H
#define CADENA_H
#include<string.h>

class Cadena
{
    public:
       public:
        Cadena();
        Cadena(char *);
        Cadena(const Cadena &);
        virtual ~Cadena();
        Cadena operator=(const Cadena &) ;
        bool operator==(Cadena) ;
        bool operator<(Cadena) ;
        Cadena operator+(Cadena) ;

        char * getCadena();

    protected:

    private:
        char * cadena;
};

#endif // CADENA_H
