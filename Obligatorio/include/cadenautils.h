#ifndef CADENAUTILS_H
#define CADENAUTILS_H
#include<stdio.h>
#include "cadena.h"
const int LENGTH = 1024;

class CadenaUtils
{
    public:
        CadenaUtils();
        virtual ~CadenaUtils();
        Cadena convetirACadena(float);
        Cadena convetirACadena(long int);
    protected:

    private:
};

#endif // CADENAUTILS_H
