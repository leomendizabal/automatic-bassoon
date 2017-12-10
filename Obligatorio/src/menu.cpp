#include "menu.h"

Menu::Menu(){

}

Menu::~Menu(){

}

void Menu::menuPrincipal(int &opcion){
    printf("1. Ver requerimiento\n");
    printf("2. Ver requerimiento\n");
    printf("3. Ver requerimiento\n");
    printf("4. Ver requerimiento\n");
    printf("5. Ver requerimiento\n");
    printf("6. Ver requerimiento\n");
    printf("7. Ver requerimiento\n");
    printf("8. Salir del menu.\n");
    scanf("%d",&opcion);
}


void Menu::registrarAutor() {

}


void Menu::scan(Cadena &s) {
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


void Menu::print(Cadena s) {
    int i=0;
    while(s.getCadena()[i]!='\0')
    {
        printf("%c",s.getCadena()[i]);
        i++;
    }
}

