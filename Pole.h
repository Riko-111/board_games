#pragma once
#include <vector>
#include "Figura.h"

class Pole {
public:
    void effect();
private:
    unsigned int x;
    unsigned int y;
    std::vector<Figura*> figuryNaPolu;
    void dodajFigure(Figura* figura);
    void usunFigure(Figura* figura);
};