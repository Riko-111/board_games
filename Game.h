#pragma once
#include "Player.h"
#include <vector>
#include <memory>

class Game {

public:
  	virtual ~Game();
    virtual void startGame() = 0;
    virtual void endGame() = 0;
    virtual void isWin() = 0;
    virtual void nexTurn() = 0;

public:
    unsigned int width;
    unsigned int height;
    std::vector<std::unique_ptr<Player>> players;
};




