#ifndef CADENAUTILS_H
#define CADENAUTILS_H
#include<stdio.h>
#include "str.h"

const int LENGTH = 1024;

class CadenaUtils{

    public:

        CadenaUtils();
        virtual ~CadenaUtils();
        static String convetirACadena(int);
        static String convetirACadena(float);
        static String convetirACadena(long int);

    private:
};

#endif // CADENAUTILS_H
