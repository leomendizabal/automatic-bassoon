#include "error.h"


Error::Error(bool hayError, TipoDeError tipoError) {
    hay_error = hayError;
    tipo_error = tipoError;
}

Error::Error()
{
    //ctor
}

Error::~Error()
{
    //dtor
}

TipoDeError Error::getTipoError(){
    return tipo_error;
}

bool Error::hayError(){
    return hay_error;
}


