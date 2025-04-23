#pragma once
#include "Gracz.h"
#include <vector>

class Gra {

public:
    virtual void rozpocznijGre() = 0;
    virtual void zakończGre() = 0;
    virtual void czyWygrana() = 0;
    virtual void nastepnaTura() = 0;

public:
    unsigned int szerokosc;
    unsigned int wysokosc;
    std::vector<Gracz*> gracze;
};




