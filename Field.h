#pragma once
#include <vector>
#include "Figure.h"
#include <memory>
#include <variant>

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