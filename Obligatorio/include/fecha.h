#ifndef FECHA_H
#define FECHA_H
#include "cadenautils.h"

class Fecha
{
    public:

        /** constructors and destructor */
        Fecha();
        Fecha(int,int,int);
        Fecha(const Fecha&);
        virtual ~Fecha();

        /** Operators override **/
        bool operator<(Fecha);
        bool operator==(Fecha);
        Fecha operator++();
        Fecha operator++(int);
        Fecha operator+(int);
        int operator-(Fecha);
        bool esValida();
        String toString();

        /** Getters and Setters **/
        int getDd();
        int getMm();
        int getAa();


    private:

        int dd,mm,aa;
        void incrementar();
};

#endif // FECHA_H
