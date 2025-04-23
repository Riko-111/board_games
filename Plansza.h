#pragma once
#include <vector>
#include <string>
#include "Figura.h"
#include "Gra.h"

class Plansza {
public:
    Figura pola[rozgrywanaGra.getWysokosc()][rozgrywanaGra.getSzerokosc()];
private:
    std::vector<Figura*> figury;
    //tu w nawias podajemy nazwe gry
    void rozgerajGre(std::string Gra);
};




