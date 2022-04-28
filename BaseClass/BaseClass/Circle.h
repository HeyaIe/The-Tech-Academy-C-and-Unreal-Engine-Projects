#pragma once
#include "Shape.h"
class Circle : public Shape
{
private:
	double radius;
public:
	Circle(double radius);

	virtual double GetArea() override;
};

