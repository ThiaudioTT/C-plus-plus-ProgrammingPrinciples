#include <stdlib.h>
#include <iostream>
#include <vector>
#include "../../std_lib_facilities.h"
using namespace std;

class badInput
// input must be 4 different integers and its size equal to 4
{
}; // class to report badinput errors.

int main()
{
    int seed = 0;
    cin>>seed;
    seed_randint(seed);

    int i = 0;
    while (i < 100)
    {
        cout << randint(2);
        i++;
    }
}