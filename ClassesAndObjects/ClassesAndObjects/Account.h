#pragma once
#include <string>
#include <iostream>

class Account
{
	friend std::ostream& operator<<(std::ostream& os, const Account& account);
private:
	static constexpr const char* defName = "Unnamed Account";
	static constexpr double defBalance = 0.0;
protected:
	std::string name;
	double balance;
public:
	Account(std::string name = defName, double balance = defBalance);
	
	bool Deposit(double amount);
	bool Withdraw(double amount);

	double GetBalance() const;
};

