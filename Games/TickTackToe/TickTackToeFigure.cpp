#include "TickTackToeFigure.h"
TickTackToeFigure::TickTackToeFigure(const int pos_x, const int pos_y, std::unique_ptr<Player>& owner)
    : Figure(pos_x, pos_y, std::move(owner), 0, 0) {

};