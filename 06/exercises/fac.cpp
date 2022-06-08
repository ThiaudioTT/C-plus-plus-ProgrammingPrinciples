#include <iostream>
using namespace std;

int factorial(int x)
{
    if (x < 0)
        return 0; // put error
    if (x == 1 || x == 0) // precondition
        return 1;

    int value = x;
    for (int i = 1; (x - i) != 1; i++)
        value = value * (x - i);

    return value;
}

int main()
{
    int n;
    cout << "Enter: ";
    cin >> n;
    cout << factorial(n);
    return 0;
}