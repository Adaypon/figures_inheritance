#pragma once

#include "Figure.h"

class Ellipse : public Figure {
public:
	Ellipse(double a, double b);
	
	double calculateP() const override;

	double calculateS() const override;

protected:
	double _a, _b;
};