#include "fecha.h"

using namespace std;

Fecha::Fecha()
{
    //ctor
    this->dd = 0;
    this->mm = 0;
    this->aa = 0;
}

Fecha::Fecha(int dd,int mm,int aa){
    this->dd = dd;
    this->mm = mm;
    this->aa = aa;
}

Fecha :: Fecha (const Fecha &otra){
     this->dd = otra.dd;
     this->mm = otra.mm;
     this->aa = otra.aa;
}

Fecha::~Fecha()
{
    //dtor
}

//Get and set

int Fecha::getAa(){
    return this->aa;
}

int Fecha::getMm(){
    return this->mm;
}

int Fecha::getDd(){
    return this->dd;
}

void Fecha::incrementar()
{

    switch(mm)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        if(dd==31)
        {
            dd=1;
            if(mm==12)
            {
                mm=1;
                aa++;
            }
            else
            {
                mm++;
            }
        }
        else
        {
            dd++;
        }
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        if(dd==30)
        {
            dd=1;
            mm++;
        }
        else
        {
            dd++;
        }
        break;

    case 2:
        if(((aa% 4 == 0)&&(aa%100!=0))|| (aa%400 == 0))
        {
            if(dd==29)
            {
                dd=1;
                mm++;
            }
            else
            {
                dd++;
            }
        }
        else if(dd == 28)
        {
            dd=1;
            mm++;
        }
        else
        {
            dd++;
        }

        break;
    }
}

Fecha Fecha::operator+(int dias){
    Fecha aux = (*this);
    for(int i=0;i<dias;i++){
        aux.incrementar();
    }
    return aux;
}

bool Fecha::operator<(Fecha otra){
    bool menor = false;

    if(this->aa < otra.aa){
        menor = true;
    } else if(this->aa == otra.aa){
        if(this->mm < otra.mm){
            menor = true;
        } else if (this->mm == otra.mm && this->dd < otra.dd){
            menor = true;
        }
    }

    return menor;
}

bool Fecha::operator==(Fecha f){
    return (this->aa == f.getAa()) && (this->mm == f.getMm()) && (this->dd == f.getDd());
}

Fecha Fecha::operator++(){
    this->incrementar();
    return(*this);
}
Fecha Fecha::operator++(int){
    Fecha temp = (*this);
    this->incrementar();
    return temp;
}

int Fecha::operator-(Fecha f){
    return 0;
}

bool Fecha::esValida(){
    bool esDdValido = (this->dd > 0 && this->dd < 31);
    bool esMmValido = (this->mm > 0 && this->mm < 13);
    bool esAaValido = (this->aa > 1990);

    return esDdValido && esMmValido && esAaValido;
}


String Fecha::toString(){
    String strfech;
    String separador("/");

    strfech = CadenaUtils::convetirACadena(this->dd)+separador+CadenaUtils::convetirACadena(this->mm)+separador+CadenaUtils::convetirACadena(this->aa);

    return strfech;
}

void Fecha::print(){
    cout << dd <<"/"<< mm <<"/"<< aa;
}

void Fecha::scan() {
    cout << "dia: ";cin >> dd;
    cout << "mes: ";cin >> mm;
    cout << "anio: ";cin >> aa;
}




