#include "cadenautils.h"

CadenaUtils::CadenaUtils()
{
    //ctor
}

CadenaUtils::~CadenaUtils()
{
    //dtor
}

Cadena CadenaUtils::convetirACadena(int valor){
    char * cadena = new char[LENGTH];
    snprintf(cadena, sizeof(cadena), "%d", valor);
    Cadena result(cadena);
    return result;
}

Cadena CadenaUtils::convetirACadena(long int valor){
    char * cadena = new char[LENGTH];
    snprintf(cadena, sizeof(cadena), "%ld", valor);
    Cadena result(cadena);
    return result;
}

Cadena CadenaUtils::convetirACadena(float valor){
    char * cadena = new char[LENGTH];
    snprintf(cadena, sizeof(cadena), "%.2f", valor);
    Cadena result(cadena);
    return result;
}

