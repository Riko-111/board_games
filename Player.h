#pragma once
#include "Figure.h"
#include <vector>
#include <memory>

class Figure;

class Player {
public:
    explicit Player(std::vector<std::shared_ptr<Figure>> figures);
    virtual void startTurn() = 0;
    virtual void endTurn() = 0;
    virtual ~Player() = default;
private:
    std::vector<std::unique_ptr<Figure>> figures;

};



