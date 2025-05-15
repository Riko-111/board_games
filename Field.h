#pragma once
#include "Figure.h"
#include <vector>
#include <memory>


class Field {
public:
    Field(unsigned int x, unsigned int y);
    void effect();
private:
    unsigned int x;
    unsigned int y;
    std::vector<Figure> fieldFigures;
    void placeFigure(std::unique_ptr<Figure> figure);
    void removeFigure(std::unique_ptr<Figure> figure);
};