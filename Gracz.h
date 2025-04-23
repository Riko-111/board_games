#pragma once
#include "Figura.h"
#include <vector>

class Gracz {
public:
     virtual void rozpocznijTure() = 0;
     virtual void zakonczTure() = 0;
private:
    std::vector<Figura*> figury;

};



