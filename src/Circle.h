#pragma once

#include "Ellipse.h"

class Circle : public Ellipse {
public:
	Circle(double r);
	
	double calculateP() const override;
};