#ifndef ERROR_H
#define ERROR_H

enum TipoDeError{
    SIN_ERROR,
    LIBRO_YA_EXISTE,
    NO_EXISTE_LIBRO,
    NO_EXISTE_AUTOR,
    DICCIONARIO_VACIO,
    AUTOR_YA_EXISTE,
};

class Error{
    public:

        Error();
        Error(bool,TipoDeError);
        virtual ~Error();

        bool hayError();
        TipoDeError getTipoError();

        void setError(bool);
        void setNumeroError(TipoDeError);
    private:

        bool hay_error;
        TipoDeError tipo_error;
};

#endif // ERROR_H
