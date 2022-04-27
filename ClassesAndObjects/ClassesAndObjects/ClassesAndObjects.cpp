#include <iostream>
using std::cout;

#include <string>
using std::string;

#include <vector>
using std::vector;

#include "Account.h"
#include "SavingsAccount.h"
#include "AccountUtil.h"

int main()
{
    cout.precision(2);
    cout << std::fixed;

    vector<Account> accounts{ Account {} };
    accounts.push_back(Account{ "Alexa" });
    Display(accounts);

    vector<SavingsAccount> savAccounts{ SavingsAccount{} };
    savAccounts.push_back(SavingsAccount{ "Kyle" });
    Deposit(savAccounts, 5000);
    Display(savAccounts);
}
