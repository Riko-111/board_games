#include "Board.h"
#include "Validator.h"
#include <vector>

Board::Board(int width, int height) {
	auto validator = Validator();
	validator.validateDimensions(width, height);
}