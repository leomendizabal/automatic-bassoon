#include "cadenautils.h"

CadenaUtils::CadenaUtils()
{
    //ctor
}

CadenaUtils::~CadenaUtils()
{
    //dtor
}


Cadena CadenaUtils::convetirACadena(long int valor){
    char cadena[LENGTH];
    snprintf(cadena, sizeof(cadena), "%d", valor);
    char * pchar = cadena;
    Cadena result(pchar);
    return result;
}

Cadena CadenaUtils::convetirACadena(float valor){
    char cadena[LENGTH];
    snprintf(cadena, sizeof(cadena), "%.2f", valor);
    char * pchar = cadena;
    Cadena result(pchar);
    return result;
}

