#include "ETriangle.h"

ETriangle::ETriangle(double a) : ITriangle(a, a)
{
	_name = "ETriangle";
}

double ETriangle::calculateS() const {
	return std::sqrt(3) *_a * _a / 4;
}