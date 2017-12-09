#ifndef CADENAUTILS_H
#define CADENAUTILS_H
#include<stdio.h>
#include "cadena.h"
const int LENGTH = 1024;

class CadenaUtils{

    public:

        CadenaUtils();
        virtual ~CadenaUtils();
        static Cadena convetirACadena(float);
        static Cadena convetirACadena(long int);

    private:
};

#endif // CADENAUTILS_H
