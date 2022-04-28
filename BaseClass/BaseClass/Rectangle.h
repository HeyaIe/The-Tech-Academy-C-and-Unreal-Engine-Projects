#pragma once
#include "Shape.h"
class Rectangle : public Shape
{
private:
	double height;
	double width;
public:
	Rectangle(double height, double width);
	Rectangle(std::string color, double height, double width);
	virtual double GetArea() override;
};

