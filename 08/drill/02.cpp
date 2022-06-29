#include <iostream>
using namespace std;

void swap_v(int a, int b)
{
    int temp;
    temp = a, a = b;
    b = temp; // only change variables inside swap_v !
}

void swap_r(int &a, int &b)
{
    int temp;
    temp = a, a = b;
    b = temp;
}

/*
void swap_cr(const int &a, const int &b)
{
    int temp;
    temp = a, a = b; // modifying constant value?
    b = temp;
}
*/

#define print(x, y) cout << "\nx = " << x << "\ny = " << y << endl;

int main()
{
    int x = 7;
    int y = 9;

    swap_r(x, y);
    // swap_r(7, 9);

    print(x, y);

    const int cx = 7;
    const int cy = 9;
    // swap_r(cx, cy);
    // swap_r(7.7, 9.9); // will be truncated. double to int.

    print(cx, cy);

    double dx = 7.7;
    double dy = 9.9;
    // swap_r(dx, dy);
    // swap_r(7.7, 9.9);

    print(dx, dy);

    return 0;
}

// conclusion:
/*
Only swap_r works. And only in non-const int variables*/