#include "cadenautils.h"

CadenaUtils::CadenaUtils()
{
    //ctor
}

CadenaUtils::~CadenaUtils()
{
    //dtor
}

String CadenaUtils::convetirACadena(int valor){
    char * cadena = new char[LENGTH];
    snprintf(cadena, 16, "%d", valor);
    String result(cadena);
    return result;
}

String CadenaUtils::convetirACadena(long int valor){
    char * cadena = new char[LENGTH];
    snprintf(cadena, 16, "%ld", valor);
    String result(cadena);
    return result;
}

String CadenaUtils::convetirACadena(float valor){
    char * cadena = new char[LENGTH];
    snprintf(cadena, 16, "%.2f", valor);
    String result(cadena);
    return result;
}

