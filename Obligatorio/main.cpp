#include <iostream>
#include<stdio.h>
#include "menu.h"
#include "libro.h"
#include "novela.h"
#include "texto.h"
#include "escolar.h"

int main()
{
    //Declaraciones
    bool salir = false;
    int opcion = -1;
    Menu menu;

    Fecha f(20, 12, 2016);

    Libro * test = new Novela(1234, "prueba 1", 100, 0, "infantil");
    float precioBase = test->getPrecioBase();
    float precio = test->getPrecio();
    int isbn = test->getIsbn();
    printf("Precio base: %f, Precio total: %f, ISBN: %d\n\n", precioBase, precio, isbn);

    Libro * escolar = new Escolar(1111, "preba escolar", 1000, 1, "asdf", f, 1);
    float precioEscolar = escolar->getPrecio();
    printf("precio escolar: %f\n", precioEscolar);

    Libro * texto = new Texto(1232, "prueba texto", 1000, 12, "asdf", f);
    float precioTexto = texto->getPrecio();
    printf("precio texto: %f", precioTexto);

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
