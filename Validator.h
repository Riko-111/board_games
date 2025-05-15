#pragma once
#include <sys/types.h>
#include <stdexcept>
#include "Player.h"


class Validator {
    template<typename T>
    static bool areCoordinatesValid(const T& figure, unsigned int width, unsigned int height) {
        if (figure.getPositionX() > width || figure.getPositionY() > height) {
            throw std::out_of_range("Coordinates are out of bounds");
        }
        return true;
    }

};
