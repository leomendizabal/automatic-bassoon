#include "Presentacion.h"


Presentacion::~Presentacion(){

}

 Presentacion::Presentacion()
{
    //fachada = Fachada();
}



void Presentacion::menuPrincipal(int &opcion){
    printf("1.  Registrar nuevo libro\n");
    printf("2.  Listar libros registrados\n");
    printf("3.  Detalles de un libro\n");
    printf("4.  Registrar autor\n");
    printf("5.  Listar autores registrados\n");
    printf("6.  Monto recaudo\n");
    printf("7.  Registrar venta\n");
    printf("8.  Consultar cantidades vendidas\n");
    printf("9.  Listar libro mas vendido\n");
    printf("10. Consultar cantidad de autores\n");
    printf("11. Salir del Presentacion.\n");
    scanf("%d",&opcion);
}

void Presentacion::subMenu(int &op) {
    printf("1.  Novela\n");
    printf("2.  Texto\n");
    printf("3.  Texto escolar\n");
    printf("4.  Salir\n");
    scanf("%d",&op);
}




void Presentacion::registrarAutor() {
    //Cedula
    long int cedula;
    std::cout << "Cedula :";
    std::cin >> cedula;
    //Nombre
    std::cout << "Nombre :";
    String nombre;
    nombre.scan();
    //Fecha Nac
    int dd,mm,aa;
    std::cout << "Fecha :";
    std::cin >> dd >> mm >> aa;
    Fecha f(dd,mm,aa);
    Autor autor(cedula,nombre,f);
    //fachada.registrarAutor(autor);

    std::cout <<"Autor ingresado correctamente";autor.getNombre().print();
}

void Presentacion::registrarLibro(tipoLibro tipo){
    Texto * texto;
    Escolar * escolar;
    Novela * novela;
    long int isbn;
    std::cout << "ISBN :";
    std::cin >> isbn;
    //Nombre
    std::cout << "TITULO :";
    /*Cadena titulo;
    scan(titulo);*/
    float precio;
    std::cout << "ISBN :";
    std::cin >> precio;
    switch(tipo){
        case NOVELA:{
            std::cout << "Genero :";
            /*Cadena genero;
            scan(genero);
            novela = new Novela(isbn,titulo,precio,0,genero);*/
        }
        break;
        case TEXTO:
        break;
        case ESCOLAR:
        break;
    }
}







