#include "Parallelogram.h"

const double PI = 3.1415;

Parallelogram::Parallelogram(double a, double b, double angle) {
	_name = "Parallelogram";
	_a = a;
	_b = b;
	_angle = angle;

	// TODO assert 0 < angle < 180 
}

double Parallelogram::calculateP() const {
    return 2 * (_a + _b);
}

double Parallelogram::calculateS() const {
	return _a * _b * sin(_angle * PI / 180);
}