#pragma once
#include "Figure.h"
#include "Field.h"
#include <memory>
#include <vector>
#include <string>


class Board {
public:
	Board(int width, int height);
  	Board(int width, int height, std::vector<std::unique_ptr<Figure>> Figures);
    void playGame(std::string Game);
	void place(const std::unique_ptr<Figure> &placedFigure, size_t x, size_t y);
private:
	unsigned int width;
	unsigned int height;
	std::vector<std::unique_ptr<Figure>> figures;
	std::vector<std::vector<Field>> fields;
};




