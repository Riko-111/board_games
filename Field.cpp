#include "Field.h"
#include <algorithm>

Field::Field(Field &&other)  noexcept : x(other.x), y(other.y), figureLimit(other.figureLimit), fieldFigures(std::move(other.fieldFigures)) {
    other.x = 0;
    other.y = 0;
    other.figureLimit = 0;
    const auto it = std::ranges::remove_if(fieldFigures,
        [](const std::unique_ptr<Figure>& figure) { return figure == nullptr; }).begin();
    fieldFigures.erase(it, fieldFigures.end());
}

void Field::placeFigure(const std::unique_ptr<Figure> &figure) {
    if (fieldFigures.size() >= figureLimit) {
        throw std::runtime_error("Field can't hold more figures than it's limit");
    }
    fieldFigures.push_back(figure);
}

void Field::removeFigure()