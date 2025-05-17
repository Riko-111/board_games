#pragma once
#include <stdexcept>


class Validator {
public:
    template<typename T, typename POS>
    static bool areCoordinatesInBounds(const T& board, POS x, POS y) {
        if (board.getWidth() <= x || board.getHeight() <= y) {
            throw std::out_of_range("Coordinates are out of bounds");
        }
        return true;
    }
    template<typename T>
    static bool validateDimensions(const T& width, const T& height) {
        if (width <= 0 || height <= 0) {
            throw std::out_of_range("Dimensions can't be negative");
        }
        return true;
    }
};
