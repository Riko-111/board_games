#pragma once
#include "Figure.h"
#include <vector>
#include <memory>

class Player {
public:
     virtual void startTurn() = 0;
     virtual void endTurn() = 0;
private:
    std::vector<std::unique_ptr<Figure>> figures;

};



