#include "Board.h"
#include "Validator.h"
#include "Figure.h"
#include "Player.h"
#include <vector>

Board::Board(const int width, const int height) : width(width), height(height) {
	Validator::validateDimensions(width, height);
}

void Board::place(const std::unique_ptr<Figure> &placedFigure, const size_t x, const size_t y) {
	Validator::areCoordinatesInBounds(this, x, y);
	if (fields[x][y].isOccupied()) {
		throw std::runtime_error("Field is already occupied");
	}
	fields[x][y].placeFigure(placedFigure);
}