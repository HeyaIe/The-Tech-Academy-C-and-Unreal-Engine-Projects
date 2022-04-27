#include <iostream>
#include "Dog.h"

int main()
{
    Dog Heyale;
    Heyale.Sit();

    Dog Lin{ "Hound", "Brown", 2, 60 };
    Lin.LayDown();
    Lin.Shake();
}