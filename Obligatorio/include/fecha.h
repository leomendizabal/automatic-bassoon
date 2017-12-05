#ifndef FECHA_H
#define FECHA_H


class Fecha
{
    public:
        Fecha();
        Fecha(int,int,int);
        Fecha(const Fecha&);
        virtual ~Fecha();
        //Get and set
        int getDd();
        int getMm();
        int getAa();

        //Sobrecarga
        bool operator<(Fecha);
        bool operator==(Fecha);
        Fecha operator++();
        Fecha operator++(int);
        Fecha operator+(int);
        int operator-(Fecha);
        bool esValida();


    protected:

    private:
        int dd,mm,aa;
        void incrementar();
};

#endif // FECHA_H
