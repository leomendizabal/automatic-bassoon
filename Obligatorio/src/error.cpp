#include "error.h"


Error::Error(bool hayError, TipoDeError tipoError) {
    hay_error = hayError;
    tipo_error = tipoError;
}

Error::Error()
{
    hay_error = false;
    //ctor
}

Error::~Error()
{
    //dtor
}

void Error::setError(bool e){
    hay_error = e;
}

void Error::setNumeroError(TipoDeError t){
    tipo_error = t;
}

TipoDeError Error::getTipoError(){
    return tipo_error;
}

bool Error::hayError(){
    return hay_error;
}


