#pragma once
#include <iostream>

class I_Printable
{
	friend std::ostream& operator<<(std::ostream& os, const I_Printable& obj);
public:
	// Pure virtual functions
	virtual void Print(std::ostream& os) const = 0;
};

