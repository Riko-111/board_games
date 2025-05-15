#pragma once
#include "Figure.h"
#include "Field.h"
#include <memory>
#include <vector>
#include <string>


class Board {
public:
  	Board(int width, int height, std::vector<std::unique_ptr<Figure>> Figures);
    void playGame(std::string Game);
private:
	unsigned int width;
	unsigned int height;
	std::vector<std::unique_ptr<Figure>> figures;
	std::vector<std::vector<Field>> fields;
};




