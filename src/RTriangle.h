#pragma once

#include "Triangle.h"

class RTriangle : public Triangle {
public:
    RTriangle(double a, double b);
	
	double calculateS() const override;
};