#include <iostream>
#include "chrono.h"

int main()
{
    chrono::Date today(chrono::Month::jul, 07, 2022);
    // chrono::Date today();

    std::cout << today.ryear() << std::endl;

    chrono::Date defau;

    std::cout << defau.ryear() << std::endl;

    return 0;
}
