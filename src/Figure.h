#pragma once

#include <string>
#include <iostream>
#include <cmath>
#include <cassert>

class Figure {
public:
    Figure() = default;
    virtual ~Figure() = default;

    virtual double calculateS() const = 0;
    virtual double calculateP() const = 0;

    std::string getName() const;

protected:
    std::string _name;
};