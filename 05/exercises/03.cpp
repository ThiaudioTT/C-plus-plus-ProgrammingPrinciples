/**
 * @file 03.cpp
 * @author Thiago A. (`)
 * @brief
 * @version 0.1
 * @date 2022-05-18
 *
 * @copyright Copyright (c) 2022
 *
 */
/*
Absolute zero is the lowest temperature that can be reached; it is –273.15°C,
or 0K. The above program, even when corrected, will produce erroneous results when given a temperature below this. Place a check in the
main program that will produce an error if a temperature is given below
–273.15°C.
So, the main deals with the bad inputs.
*/
#include "../../std_lib_facilities.h"

double ctok(double c) // converts Celsius to Kelvin
{
    double k = c + 273.15;
    return k;
}

int main()
{
    try
    {

        double c = 0; // declare input variable
        cin >> c;     // retrieve temperature to input variable

        /*Main deals with bad input*/
        if (c < -273.15)
            throw c;
        double k = ctok(c); // convert temperature
        cout << k << '\n';  // print out temperature
    }
    catch (double c)
    {
        cerr << "Error, celsius temperature must be greater than -273.15\nYour input: "
             << c;
    }
}