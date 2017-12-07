#include <iostream>
#include<stdio.h>
#include "menu.h"
#include "libro.h"
#include "novela.h"

int main()
{
    //Declaraciones
    bool salir = false;
    int opcion = -1;
    Menu menu;

    /*
    Libro * test = new Novela(1234, "prueba 1", 200, 0, "fantasia");
    float precioBase = test->getPrecioBase();
    float precio = test->getPrecio();
    printf("Precio base: %f, Precio total: %f", precioBase, precio);
    */

    do
    {
        menu.menuPrincipal(opcion);
        switch(opcion)
        {
        case OPCION_MENU_1:

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
