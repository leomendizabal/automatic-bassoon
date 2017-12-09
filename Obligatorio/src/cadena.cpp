#include "cadena.h"

Cadena::Cadena()
{
    cadena = new char [1];
    cadena[0] = '\0';
}

/** @brief (one liner)
  *
  * (Constructor de copia)
  */
Cadena::Cadena(char * cad){
    int largo = strlen(cad); // cantidad de caracteres de la cadena
    cadena = new char [largo + 1]; // un lugar mas para el �\0�.
    strcpy(cadena, cad);
}

Cadena::~Cadena()
{
    //dtor
    delete [] cadena;
}

Cadena :: Cadena(const Cadena &otro) {
    int largo = strlen(otro.cadena); // cantidad de caracteres de la cadena
    cadena = new char [largo + 1]; // un lugar mas para el �\0�.
    strcpy (cadena, otro.cadena); // se copian los caracteres de la cadena
}

Cadena Cadena :: operator=(const Cadena &otro) {
    if (this != &otro) {
        delete [] cadena;
        int largo = strlen(otro.cadena);
        cadena = new char [largo + 1];
        strcpy (cadena, otro.cadena);
    }
    return (*this);
}

/** @brief (one liner)
  *
  * (compra si el string es menor)
  */
bool Cadena::operator<(Cadena input){
    // se puede usar strcmp(char*,char*),  menor (-1), mayor(1) o igual(0)
    int size_this = strlen(cadena),size_input = strlen(input.cadena);;
    int i = 0,j = 0;
    bool exit = false;
    while(( i < size_input && j < size_input) && !exit){
        if(cadena[i] < input.cadena[j]){
            exit=true;
        }else{
            i+=1;
            j+=1;
        }
    }
    return exit;


}
/** @brief (one liner)
  *
  * (Compara si dos string son iguales)
  */
bool Cadena::operator==(Cadena input){
    // se puede usar strcmp(char*,char*) == 0
    int size_this = strlen(cadena),size_input = strlen(input.cadena);
    bool result = false;
    if(size_this == size_input){
        int i = 0,j = 0;
        while(( i < size_input && j < size_input) && !result){
            if(cadena[i] ==input.cadena[j]){
                result=true;
            }else{
                i+=1;
                j+=1;
            }
        }
    }

    return result;
}

/** @brief (one liner)
  *
  * (Concatena dos string)
  */
Cadena Cadena::operator+(Cadena input){
    int size_this = strlen(cadena),size_input = strlen(input.cadena);
    Cadena str_result = new char[size_this + size_input + 1];
    int r = 0;
    for(int i = 0;i<size_this; i++){
        str_result.cadena[r]= cadena[i];
        r++;
    }
    for(int j = 0;j<size_input; j++){
        str_result.cadena[r]= input.cadena[j];
        r++;
    }
    str_result.cadena[r] = '\0';
    return str_result;
}

char* Cadena::getCadena(){
    return cadena;
}

Cadena Cadena::toLowerCase() {
    int largo = strlen(cadena) - 1;
    for(int i=0; i < largo; i++){
        if(cadena[i]>= 65 && cadena[i]<=90){
            cadena[i] += 32;
        }
    }
    return (*this);
}


