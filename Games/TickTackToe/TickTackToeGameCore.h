#pragma once
#include "../../Game.h"
#include "../../Board.h"


constexpr auto BOARD_WIDTH = 3;
constexpr auto BOARD_HEIGHT = 3;
constexpr auto FIGURE_COUNT = 9;

class TickTackToeGameCore: public Game {
public:
    void mainLoop();
    void startGame() override;
    void endGame() override;
    bool isWin() override;
    void nextTurn() override;
    void placeFigure(std::unique_ptr<Figure> figure, size_t x, size_t y);
    void playGame(std::string game);
    void setPlayer(std::unique_ptr<Player> player);
    void setBoard(std::unique_ptr<Board> board);

private:
    Board gameBoard;

};



