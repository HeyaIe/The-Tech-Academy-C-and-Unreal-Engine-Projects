#pragma once
#include <string>
#include <string>

class Shape
{
private:
	std::string color;
public:
	Shape();
	Shape(std::string color);
	virtual double GetArea() = 0;
};

