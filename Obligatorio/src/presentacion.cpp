#include "Presentacion.h"


 Presentacion::~Presentacion()
{

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


void Presentacion::registrarAutor() {
    //Cedula
    long int cedula;
    std::cout << "Cedula :";
    std::cin >> cedula;
    //Nombre
    std::cout << "Nombre :";
    Cadena nombre;
    scan(nombre);
    //Fecha Nac
    int dd,mm,aa;
    std::cout << "Fecha :";
    std::cin >> dd >> mm >> aa;
    Fecha f(dd,mm,aa);
    Autor autor(cedula,nombre,f);
    //fachada.registrarAutor(autor);
    std::cout <<"Autor ingresado correctamente"<<"\n";
}


void Presentacion::scan(Cadena &s) {
    int i=0;
    char c;
    char * saux = new char[MAX_LARGO];
    fflush(stdin);
    scanf("%c",&c);
    while(c!='\n'&& i < MAX_LARGO - 1)
    {
        saux[i]  = c;
        i++;
        scanf("%c",&c);
    }
    saux[i]='\0';
    Cadena cscan(saux);
    s = cscan;
}


void Presentacion::print(Cadena s) {
    int i=0;
    while(s.getCadena()[i]!='\0')
    {
        printf("%c",s.getCadena()[i]);
        i++;
    }
}

