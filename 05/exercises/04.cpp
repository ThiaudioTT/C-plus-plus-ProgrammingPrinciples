/**
 * @file 04.cpp
 * @author Thiago A. (`)
 * @brief
 * @version 0.1
 * @date 2022-05-18
 *
 * @copyright Copyright (c) 2022
    Do exercise 3 again, but this time handle the error inside ctok(). *
 */

#include "../../std_lib_facilities.h"

double ctok(double c) // converts Celsius to Kelvin
// double values greather than -273.15
{
    if (c < -273.15)
        throw c;
    double k = c + 273.15;
    return k;
}


int main()
{
    try
    {
        double c = 0;       // declare input variable
        cin >> c;           // retrieve temperature to input variable
        double k = ctok(c); // convert temperature
        cout << k << '\n';  // print out temperature
    } catch (double c)
    {
        cerr << "Error, celsius temperature must be greater than -273.15\nYour input: "
             << c;
    }
}