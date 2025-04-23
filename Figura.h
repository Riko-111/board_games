#pragma once


class Figura {
public:
    // moze byc implementowana razem z argumentami, jezeli rusza sie np. krolowa
    // ale moze byc tez bez, jezeli rusza sie kon (jedna mozliwosc ruchu)
    virtual void rusz() = 0;
private:
    unsigned int x;
    unsigned int y;
    //ruch - ilosc kratek w danej wspolrzednej, po ktorych porusza sie figura
    //np.: kon w szachach: ruch_y = 2, ruch_x= 1
    unsigned int ruch_x;
    unsigned int ruch_y;
};



