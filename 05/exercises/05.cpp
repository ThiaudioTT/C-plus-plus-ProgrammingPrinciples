/**
 * @file 05.cpp
 * @author Thiago A. (`)
 * @brief
 * @version 0.1
 * @date 2022-05-18
 *
 * @copyright Copyright (c) 2022
 * Add to the program so that it can also convert from Kelvin to Celsius.
 */

#include "../../std_lib_facilities.h"

class invalidTemp
{
}; // class to report errors to invalid temperatures

double ctok(double c) // converts Celsius to Kelvin
// double values greather than -273.15
{
    if (c < -273.15)
        throw invalidTemp{};
    double k = c + 273.15;
    return k;
}

double ktoc(double k) // converts Celsius to Kelvin
// double values greather than 0
{
    if (k < 0)
        throw invalidTemp{};
    double c = k - 273.15;
    return c;
}

int main()
{
    try
    {
        while (true)
        {
            int option = 0;
            while (option != 1 && option != 2)
            {
                cout << "1: celsius to Kelvin\n2: kelvin to celsius\n";
                cin >> option;
            }

            int temp = 0;
            cout << "\nEnter your input ";
            cin >> temp;
            switch (option)
            {
            case 1: // celsius to kelvin
                cout << "\ncelsius to kelvin: " << ctok(temp)<<'\n';
                break;
            case 2: // kelvin to celsius
                cout << "\nkelvin to celsius: " << ktoc(temp)<<'\n';
                break;
            default:
                cout << "\nUnknown error.";
                break;
            }
        }
    }
    catch (invalidTemp)
    {
        cerr << "Error: invalid temperature";
    }
}
