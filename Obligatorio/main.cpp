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

int main(){

    //Declaraciones
    bool salir = false;
    int opcion = -1;
    Presentacion menu;
   /* Fachada fachada;

    /** Prueba de libros **/
    /*Fecha f(20, 12, 2016);
    Libro * novela1 = new Novela(1234, "prueba 1", 100, 0, "infantil");
    Libro * novela2 = new Novela(12345, "prueba 2", 100, 0, "infantil");
    Libro * escolar = new Escolar(1111, "preba escolar", 1000, 1, "asdf", f, 1);
    Libro * texto = new Texto(1232, "prueba texto", 1000, 12, "asdf", f);

    Autor * autor = new Autor(9999, String("autor1"), f);


    ((Novela *)novela2)->setAutor(autor);
    */
    /*Error e;
    fachada.registrarAutor(autor,e);
    fachada.registrarLibro(novela1, e);
    fachada.registrarLibro(novela2, e);
    fachada.registrarLibro(escolar, e);
    fachada.registrarLibro(texto, e);

    fachada.listarLibros();
    printf("Listar un libro: \n");
    fachada.listarLibro(12345);
    fachada.listarLibro(1234);
    fachada.listarLibro(1111);
    fachada.listarLibro(1232);*/


    /** fin prueba libros **/
    /*Seed s;
    fachada.setAutores(s.generarAutores(20));
    fachada.listarAutores();*/
    do
    {
        menu.menuPrincipal(opcion);
        switch(opcion) {
        case OPCION_MENU_1:{
                do{
                    menu.subMenu(opcion);
                    switch(opcion){
                        case OPCION_SUB_MENU_1:{
                                menu.registrarLibro(NOVELA);
                            }
                            break;
                         case OPCION_SUB_MENU_2:{
                                menu.registrarLibro(TEXTO);
                            }
                            break;
                         case OPCION_SUB_MENU_3:{
                                menu.registrarLibro(ESCOLAR);
                            }
                            break;
                         case OPCION_SUB_MENU_4:
                            salir = true;
                            break;
                         default:
                            break;
                    }
                }while(!salir);
            }
            break;
        case OPCION_MENU_2:
            menu.listarLibros();
            break;
        case OPCION_MENU_3:
            menu.detalleLibro();
            break;
        case OPCION_MENU_4:{
                menu.registrarAutor();
            }
            break;
        case OPCION_MENU_5:
            menu.listarAutores();
            break;
        case OPCION_MENU_6:
            menu.montoRecaudado();
            break;
        case OPCION_MENU_7:
            menu.registrarVenta();
            break;
        case OPCION_MENU_8:
            menu.consultarCantidadVendida();
            break;
        case OPCION_MENU_9:
            menu.listarLibroMasVendido();
            break;
        case OPCION_MENU_10:
            menu.consultarCantidadDeAutores();
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
