#pragma once
#include "Account.h"

class Checking : public Account
{
public:
	virtual ~Checking();

	virtual void Withdraw(double amount);
	virtual void Print(std::ostream& os) const override;
};

