#include "Figure.h"
Figure::Figure(int pos_x, int pos_y, std::unique_ptr<Player> owner, int movement_x, int movement_y) :
	position_x(pos_x), position_y(pos_y), owner(std::move(owner)), movement_x(movement_x), movement_y(movement_y) {
};