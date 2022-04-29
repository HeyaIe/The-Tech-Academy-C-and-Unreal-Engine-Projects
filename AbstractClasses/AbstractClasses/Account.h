#pragma once
#include "I_Printable.h"

class Account : public I_Printable
{
public:
	virtual ~Account() {};

	virtual void Withdraw(double amount);
	virtual void Print(std::ostream& os) const override;
};

