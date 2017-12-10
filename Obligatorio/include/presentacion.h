#ifndef PRESENTACION_H_INCLUDED
#define PRESENTACION_H_INCLUDED
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include "str.h"
#include "fachada.h"
#include "error.h"
//Constants
const int OPCION_MENU_1 = 1;
const int OPCION_MENU_2 = 2;
const int OPCION_MENU_3 = 3;
const int OPCION_MENU_4 = 4;
const int OPCION_MENU_5 = 5;
const int OPCION_MENU_6 = 6;
const int OPCION_MENU_7 = 7;
const int OPCION_MENU_8 = 8;
const int OPCION_MENU_9 = 9;
const int OPCION_MENU_10 = 10;
const int OPCION_MENU_SALIR = 11;

const int OPCION_SUB_MENU_1 = 1;
const int OPCION_SUB_MENU_2 = 2;
const int OPCION_SUB_MENU_3 = 3;
const int OPCION_SUB_MENU_4 = 4;

enum MensajeExito{
    LIBRO_REGISTRADO, AUTOR_REGISTRADO, VENTA_REGISTRADA
};

class Presentacion {

    private:
        Fachada fachada;
        Error error;
        void imprimirError(TipoDeError codigo);
        void imprimirMensaje(MensajeExito);
    public:
        Presentacion();
        virtual ~Presentacion();
        void menuPrincipal(int &);
        void subMenu(int &);

        void registrarAutor();
        void registrarLibro(tipoLibro);
        void listarLibros();
        void detalleLibro();
        void listarAutores();
        void montoRecaudado();
        void registrarVenta();
        void consultarCantidadVendida();
        void listarLibroMasVendido();
        void consultarCantidadDeAutores();
};


#endif // PRESENTACION_H_INCLUDED
