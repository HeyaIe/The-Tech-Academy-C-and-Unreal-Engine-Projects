#include <iostream>
#include "I_Printable.h"
#include "Account.h"
#include "Checking.h"

int main()
{
    Account* x = new Account();
    std::cout << *x << std::endl;

    delete x;
}