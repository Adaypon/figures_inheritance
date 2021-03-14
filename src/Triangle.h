#pragma once

#include "Figure.h"

class Triangle : public Figure {
public:
    Triangle(double a, double b, double c);

    double calculateP() const override;

    double calculateS() const override;

protected:
    double _a, _b, _c;
};