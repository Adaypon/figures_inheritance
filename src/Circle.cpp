#include "Circle.h"

const double PI = 3.1415;

Circle::Circle(double r) : Ellipse(r, r) 
{
	_name = "Circle";
}

double Circle::calculateP() const {
    return 2 * PI * _a;
}
