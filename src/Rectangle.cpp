#include "Rectangle.h"

Rectangle::Rectangle(double a, double b) : Parallelogram(a, b, 90)
{
	_name = "Rectangle";
}

double Rectangle::calculateS() const {
	return _a * _b;
}