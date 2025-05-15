#pragma once
#include <sys/types.h>
#include <stdexcept>
#include "Player.h"


class Validator {
public:
    template<typename T, typename POS>
    static bool areCoordinatesValid(const T& figure, POS x, POS y) {
        if (figure.getPositionX() > x || figure.getPositionY() > y) {
            throw std::out_of_range("Coordinates are out of bounds");
        }
        return true;
    }
    template<typename T>
    static bool validateDimensions(const T& width, const T& height) {
        bool valid{};
        width <= 0 || height <= 0 ? throw std::out_of_range("Dimensions can't be negative") : valid = true;
        return valid;
    }
};
