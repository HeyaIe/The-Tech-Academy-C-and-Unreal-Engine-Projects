#pragma once
#include <string>

class Dog
{
private:
	std::string breed;
	std::string color;
	double height;
	double weight;

public:
	Dog();
	Dog(std::string breed, std::string color, double height, double weight);
	void Shake();
	void Sit();
	void LayDown();
};

