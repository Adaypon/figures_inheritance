#include "RTriangle.h"

RTriangle::RTriangle(double a, double b) 
	: Triangle(a, b, std::sqrt(a*a + b*b))
{
	_name = "RTriangle";
}

double RTriangle::calculateS() const {
	return _a * _b / 2;
}