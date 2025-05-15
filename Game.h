#pragma once
#include "Board.h"
#include "Player.h"
#include <vector>
#include <memory>

class Game {
public:
    Game();
  	virtual ~Game();
    virtual void startGame() = 0;
    // V maybe the same as destructor???
    virtual void endGame() = 0;
    virtual bool isWin() = 0;
    virtual void nexTurn() = 0;

private:
    std::vector<std::unique_ptr<Player>> players;
    Board board;
};




