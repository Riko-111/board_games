#pragma once
#include <vector>
#include <string>
#include "Figure.h"
#include "Game.h"
#include "Field.h"
#include <memory>
#include <utility>


class Board {
public:
  	Board(const std::unique_ptr<Game>& Game, std::unique_ptr<Figure> Figure) :
		playedGame(std::move(Game)) {};
    void rozgerajGre(std::string Game);
private:
  	const std::unique_ptr<Game>& playedGame;
    std::vector<std::vector<Field>> fields;
    std::vector<std::unique_ptr<Figure>> figures;
};




