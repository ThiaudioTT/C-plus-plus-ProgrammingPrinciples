#include <iostream>
using namespace std;

int factorial(int x)
{
    if (x < 0)
        return 0;         // put error
    if (x == 1 || x == 0) // precondition
        return 1;
    int value = x;
    for (int i = 1; (x - i) != 1; i++)
        value = value * (x - i);
    return value;
}

int permutation(int a, int b)
{
    if (a < b || a < 1 || b < 1)
        throw int{};
    return factorial(a) / factorial(a - b);
}

int combination(int a, int b)
{
    return permutation(a, b) / factorial(b);
}

int main()
{
    cout << "Enter two integers: ";
    int a, b;
    cin >> a >> b;
    cout << "\nP for permutation, C for combination and B for both: ";
    char option;
    cin >> option;

    bool permut = false;
    bool combinat = false;

    switch (option)
    {
    case 'p':
        permut = true;
        break;
    case 'c':
        combinat = true;
        break;
    case 'b':
        permut = true;
        combinat = true;
        break;

    default:
        cerr<<"\nInvalid option" << endl;
        throw char{};
        break;
    }

    if (permut) cout << "P(" << a << ',' << b << ") = " << permutation(a,b) << '\n';

	if (combinat) cout << "C(" << a << ',' << b << ") = " << combination(a,b) << '\n';
}