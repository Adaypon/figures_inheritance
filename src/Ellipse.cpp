#include "Ellipse.h"

const double PI = 3.1415;

Ellipse::Ellipse(double a, double b) {
	_name = "Ellipse";
	_a = a;
	_b = b;
}

double Ellipse::calculateP() const {
	return 4 * (calculateS() + (_a - _b))/(_a + _b);
}

double Ellipse::calculateS() const {
	return PI * _a * _b;
}