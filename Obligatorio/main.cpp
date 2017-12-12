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
    bool atras = false;
    int opcion = -1;
    Presentacion menu;

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
                                atras = true;
                            }
                            break;
                         case OPCION_SUB_MENU_2:{
                                menu.registrarLibro(TEXTO);
                                atras = true;
                            }
                            break;
                         case OPCION_SUB_MENU_3:{
                                menu.registrarLibro(ESCOLAR);
                                atras = true;
                            }
                            break;
                         case OPCION_SUB_MENU_4:
                            atras = true;
                            break;
                         default:
                            break;
                    }
                }while(!atras);
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
            std:cout << "Opcion no implementada" << "\n";
            break;
        }

    }
    while(!salir);
}
