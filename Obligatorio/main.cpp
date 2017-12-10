#include <iostream>
#include<stdio.h>
#include "presentacion.h"
#include "fachada.h"
#include "libros.h"
#include "libro.h"
#include "novela.h"
#include "texto.h"
#include "escolar.h"
#include"seed.h"
using namespace std;

int main()
{

    //Declaraciones
    bool salir = false;
    int opcion = -1;
    Presentacion menu;
    Fachada fachada;

    char myString[128];
    int i = 123;
    snprintf(myString, sizeof(myString), " %d", i);

    /** Prueba de libros **/
    Fecha f(20, 12, 2016);
    Libro * novela1 = new Novela(1234, "prueba 1", 100, 0, "infantil");
    Libro * novela2 = new Novela(12345, "prueba 2", 100, 0, "infantil");
    Libro * escolar = new Escolar(1111, "preba escolar", 1000, 1, "asdf", f, 1);
    Libro * texto = new Texto(1232, "prueba texto", 1000, 12, "asdf", f);

    fachada.registrarLibro(novela1);
    //fachada.registrarLibro(novela2);
    //fachada.registrarLibro(escolar);
    //fachada.registrarLibro(texto);

    fachada.listarLibros();
    fachada.listarLibro(1234);

    /** fin prueba libros **/
    /*Seed s;
    fachada.setAutores(s.generarAutores(20));
    fachada.listarAutores();*/
    do
    {
        menu.menuPrincipal(opcion);
        switch(opcion)
        {
        case OPCION_MENU_1:
            {Cadena c;
            menu.scan(c);
            menu.print(c);
            }
            break;
        case OPCION_MENU_2:

            break;
        case OPCION_MENU_3:

            break;
        case OPCION_MENU_4:{
                menu.registrarAutor();
            }
            break;
        case OPCION_MENU_5:
            break;
        case OPCION_MENU_6:

            break;
        case OPCION_MENU_7:

            break;
        case OPCION_MENU_8:

            break;
        case OPCION_MENU_9:

            break;
        case OPCION_MENU_10:

            break;
        case OPCION_MENU_SALIR:
            salir = true;
            break;
        default:
            printf("Opcion no implementada\n");
            break;
        }


    }
    while(!salir);
}
