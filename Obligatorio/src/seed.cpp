#include "seed.h"

Seed::Seed()
{
    srand(time(NULL));
}

Seed::~Seed()
{
    //dtor
}


//private

Autor* Seed::generarAutor()
{
    return new Autor(randomNumber(12345678,87654321),"Nombre",randomFecha());
}

void Seed::generarLibros(int cant,Libros &ls) {
    for(int i = 0; i < cant; i++){
        Libro * lib = generarLibro();
        ls.insert(lib);
    }
}

void Seed::generarAutores(Autores &as,int cant){
    for(int i = 0; i < cant; i++){
        as.insert(generarAutor());
    }
}




Libro * Seed::generarLibro(){
    int categoria = randomNumber(1,3);
    int isbn = randomNumber(1000,9000);
    int precio = randomNumber(1,100);
    switch (categoria) {
        case 1:
             return new Texto(isbn, "prueba texto", precio, 0, "genero", randomFecha());
        case 2:
             if (randomNumber(0,1) == 0 ){
                return new Novela(isbn, "prueba novela", precio, 0,"infantil");
             } else {
                return new Novela(isbn, "prueba novela", precio, 0,"otros");
             }

        case 3:
             return new Escolar(isbn, "preba escolar", precio, 0, "asdf", randomFecha(), randomNumber(1,6));
        default:break;
    }

}

Fecha Seed:: randomFecha(){
    Fecha f(randomNumber(1,30),randomNumber(1,12),randomNumber(1990,2030));
    return f;
}

int Seed::randomNumber(int minNum,int maxNum){
    return rand() % maxNum + minNum;
}


