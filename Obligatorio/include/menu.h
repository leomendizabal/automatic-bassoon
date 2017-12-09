#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include "cadena.h"

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

class Menu {

    private:

    public:
        Menu();
        virtual ~Menu();
        void menuPrincipal(int &);
        void registrarAutor();
        void scan(Cadena &);
        void print(Cadena);
};


#endif // MENU_H_INCLUDED
