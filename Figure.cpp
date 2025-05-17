#include "Figure.h"
Figure::Figure(const int pos_x, const int pos_y, std::unique_ptr<Player> owner,
	const int movement_x, const int movement_y) :
	owner(std::move(owner)), position_x(pos_x), position_y(pos_y), movement_x(movement_x), movement_y(movement_y) {
};