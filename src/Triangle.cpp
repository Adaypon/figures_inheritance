#include "Triangle.h"

Triangle::Triangle(double a, double b, double c) {
	_name = "Triangle";
	_a = a;
	_b = b;
	_c = c;

	assert(
		(a + b > c)
		&& (a + c > b)
		&& (b + c > a)
	);
}

double Triangle::calculateP() const {
    return _a + _b + _c;
}

double Triangle::calculateS() const {
	const double p = calculateP() / 2;
	return std::sqrt(
		p * (p - _a)
		  * (p - _b)
		  * (p - _c)
	);
}