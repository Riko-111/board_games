#pragma once
#include "Figure.h"
#include <vector>
#include <memory>


class Field {
public:
    Field(unsigned int x, unsigned int y, unsigned int figureLimit);
    Field(const Field &other) = delete;
    Field& operator=(const Field &other) = delete;
    Field(Field &&other);
    virtual void effect();
    bool isOccupied();
    void placeFigure(const std::unique_ptr<Figure> &figure);
    void removeFigure(std::unique_ptr<Figure> figure);
    virtual ~Field() = default;
private:
    unsigned int x;
    unsigned int y;
    unsigned int figureLimit;
    std::vector<std::unique_ptr<Figure>> fieldFigures;};