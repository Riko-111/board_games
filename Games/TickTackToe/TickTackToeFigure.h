#pragma once
#include "../../Figure.h"
#include <memory>

class TickTackToeFigure : public Figure {
    TickTackToeFigure(int pos_x, int pos_y, std::unique_ptr<Player>& owner);
};
