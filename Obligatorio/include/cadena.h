#ifndef CADENA_H
#define CADENA_H
#include<string.h>

const int MAX_LARGO = 1024;

class Cadena
{
    public:

        Cadena();
        Cadena(char *);
        Cadena(const Cadena &);
        virtual ~Cadena();
        Cadena operator=(const Cadena &) ;
        bool operator==(Cadena) ;
        bool operator<(Cadena) ;
        Cadena operator+(Cadena) ;
        Cadena toLowerCase();
        char * getCadena();

    private:

        char * cadena;
};

#endif // CADENA_H
