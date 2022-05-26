/**
 * @file 09.cpp
 * @author Thiago A. (`)
 * @brief exe 8, sends a error when isnt int
 * @version 0.1
 * @date 2022-05-21
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <stdlib.h>
#include <vector>
#include <iostream>
using namespace std;

class outOfRange
{
}; // to report out range errors

class narrowError
{
}; // do not use doubles !

int isNarrow(double a)
{
    int b = a; // truncate
    if (a != b)
        throw narrowError{};
    return b;
};

int main()
{
    int sumUntil = 0, sum = 0, 
        inputInt = 0;
    double inputDouble = 0.0;

    vector<int> numbers;

    cout << "Please enter the number of values you want to sum: ";
    cin >> sumUntil;

    cout << "Please enter some integers (press '|' to stop): " << endl;
    while (cin >> inputDouble)
    {
        inputInt = isNarrow(inputDouble);
        numbers.push_back(inputInt);
    }

    if (numbers.size() < sumUntil)
        throw outOfRange{};

    for (int i = 0; i < sumUntil; i++)
        sum += numbers[i];

    cout << "The sum of the first " << sumUntil << " numbers is " << sum << endl;
    return 0;
}