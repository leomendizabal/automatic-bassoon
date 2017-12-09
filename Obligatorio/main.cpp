#include <iostream>
#include<stdio.h>
#include "menu.h"
#include "fachada.h"
#include "libros.h"
#include "libro.h"
#include "novela.h"
#include "texto.h"
#include "escolar.h"

using namespace std;

int main()
{

    //Declaraciones
    bool salir = false;
    int opcion = -1;
    Menu menu;
    Fachada fachada;

    /** Prueba de libros **/
    Fecha f(20, 12, 2016);
    Libro * novela = new Novela(1234, "prueba 1", 100, 0, "infantil");
    Libro * escolar = new Escolar(1111, "preba escolar", 1000, 1, "asdf", f, 1);
    Libro * texto = new Texto(1232, "prueba texto", 1000, 12, "asdf", f);

    fachada.registrarLibro(novela);
    fachada.registrarLibro(escolar);
    fachada.registrarLibro(texto);

    fachada.listarLibros();
    /** fin prueba libros **/

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
        case OPCION_MENU_4:

            break;
        case OPCION_MENU_5:

            break;
        case OPCION_MENU_6:

            break;
        case OPCION_MENU_7:

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
