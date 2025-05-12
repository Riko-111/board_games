#pragma once
#include "Player.h"


class Figure {
public:
      Figure();
      virtual ~Figure() = default;
      virtual void move() = 0;

private:
  	Player owner;
    unsigned int position_x;
    unsigned int position_y;
    //ruch - ilosc kratek w danej wspolrzednej, po ktorych porusza sie figura
    //np.: kon w szachach: ruch_y = 2, ruch_x= 1
    unsigned int movement_x;
    unsigned int movement_y;
};



