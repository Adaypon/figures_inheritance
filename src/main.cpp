#include "Figure.h"
#include "Triangle.h"
#include "RTriangle.h"
#include "ITriangle.h"
#include "ETriangle.h"
#include "Parallelogram.h"
#include "Rectangle.h"
#include "Square.h"
#include "Ellipse.h"
#include "Circle.h"

#include <iostream>

int main() {
	Figure *t = new Circle(2.5);
	std::cout << t->getName() << std::endl;
	std::cout << t->calculateP() << std::endl;
	std::cout << t->calculateS() << std::endl;
	
	return 0;
}