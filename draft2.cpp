#include <string>
#include <iostream>
#include <cmath>
#include <cassert>

class Figure {
public:
    Figure() = delete;
    virtual ~Figure() = default;

    virtual double calculateS() const = 0;
    virtual double calculateP() const = 0;

    std::string getName() const {
        return _name;
    }

protected:
    std::string _name;
};

class Triangle : public Figure {
public:
    Triangle(double a, double b, double c) {
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

    double calculateP() const override {
        return _a + _b + _c;
    }

    double calculateS() const override {
        const double p = calculateP() / 2;
        return std::sqrt(
            p * (p - _a)
              * (p - _b)
              * (p - _c)
        );
    }

protected:
    double _a, _b, _c;
};

class RTriangle : public Triangle {
public:
    RTriangle(double a, double b) 
        : Triangle(a, b, std::sqrt(a*a + b*b)) 
    {
        _name = "RTriangle";
    }
};

int main() {
    Figure *t = new Triangle(1, 1, 1);
    std::cout << t->getName() << std::endl;
    std::cout << t->calculateP() << std::endl;
    std::cout << t->calculateS() << std::endl;

    Triangle *rt = new RTriangle(1, 1);
    std::cout << rt->getName() << std::endl;
    std::cout << rt->calculateP() << std::endl;
    std::cout << rt->calculateS() << std::endl;
}
