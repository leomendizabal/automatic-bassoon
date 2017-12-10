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
    snprintf(cadena, sizeof(cadena), "%d", valor);
    String result(cadena);
    return result;
}

String CadenaUtils::convetirACadena(long int valor){
    char * cadena = new char[LENGTH];
    snprintf(cadena, sizeof(cadena), "%ld", valor);
    String result(cadena);
    return result;
}

String CadenaUtils::convetirACadena(float valor){
    char * cadena = new char[LENGTH];
    snprintf(cadena, sizeof(cadena), "%.2f", valor);
    String result(cadena);
    return result;
}

