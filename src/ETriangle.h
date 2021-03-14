#pragma once

#include "ITriangle.h"

class ETriangle : public ITriangle {
public:
	ETriangle(double a);
	
	double calculateS() const override;
};