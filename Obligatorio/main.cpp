#include <iostream>
#include<stdio.h>
#include "menu.h"
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

    //pruebas
    Libros * coleccionLibros = new Libros();

    Fecha f(20, 12, 2016);

    Libro * novela = new Novela(1234, "prueba 1", 100, 0, "infantil");
    //float precioBase = novela->getPrecioBase();
    //float precio = novela->getPrecio();
    //int isbn = novela->getIsbn();
    //printf("Precio base: %f, Precio total: %f, ISBN: %d\n\n", precioBase, precio, isbn);

    Libro * escolar = new Escolar(1111, "preba escolar", 1000, 1, "asdf", f, 1);
    //float precioEscolar = escolar->getPrecio();
    //printf("precio escolar: %f\n", precioEscolar);

    Libro * texto = new Texto(1232, "prueba texto", 1000, 12, "asdf", f);
    //float precioTexto = texto->getPrecio();
    //printf("precio texto: %f", precioTexto);

    coleccionLibros->insert(novela);
    coleccionLibros->insert(escolar);
    coleccionLibros->insert(texto);

    Libro * n = coleccionLibros->find(1234);
    float precioNovela = n->getPrecio();
    int isbn = n->getIsbn();
    printf("Precio total: %f, ISBN: %d\n\n", precioNovela, isbn);

    Libro * e = coleccionLibros->find(1111);
    float precioEscolar = e->getPrecio();
    printf("precio escolar: %f\n", precioEscolar);

    Libro * t = coleccionLibros->find(1232);
    float precioTexto = texto->getPrecio();
    printf("precio texto: %f", precioTexto);

   /* Cadena c("HOLA");
    cout << "Hola"<< c.toLowerCase().getCadena();
*/
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
