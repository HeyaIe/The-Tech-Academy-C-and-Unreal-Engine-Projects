#include "I_Printable.h"
#include "Account.h"
#include "Checking.h"
#include <vector>

std::ostream& operator<<(std::ostream& os, const I_Printable& obj)
{
    obj.Print(os);
    return os;
}

int main()
{
    Account* x = new Account();
    Account* y = new Checking();

    std::vector<Account*> accPtrs{ x, y };

    for (Account* acc : accPtrs)
    {
        std::cout << *acc << std::endl;
    }

    delete x;
    delete y;

    return 0;
}