#include <stdlib.h>
#include <iostream>
using namespace std;

class outOfInt
{
}; // class to report erros

int fibonacci(int x)
{
    if (x < 0)
        throw int{};
    else if (x == 1 || x == 0) // base condition
        return x;

    return fibonacci(x - 1) + fibonacci(x - 2);
}

int main()
{
    try
    {
        for (int i = 0; i < 100; i++)
        {
            if (fibonacci(i) < 0)
            {
                cout << "\nLargest int: " << i - 1 << "th"; // break at i
                throw outOfInt{};
            }
            cout << fibonacci(i) << " : " << i << "th" << endl;
        }
    }
    catch (outOfInt)
    {
        cout << "\nMax Int!";
    }
}