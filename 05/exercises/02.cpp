/**
 * @file 02.cpp
 * @author Thiago A. (`)
 * @brief exe 2
 * @version 0.1
 * @date 2022-05-18
 * @copyright Copyright (c) 2022
 * 
 
The following program takes in a temperature value in Celsius and converts it to Kelvin. This code has many errors in it. Find the errors, list 
them, and correct the code.
*/

#include "../../std_lib_facilities.h"

double ctok(double c) // converts Celsius to Kelvin
{
    double k = c + 273.15;
    return k;
}

int main()
{
    double c = 0;         // declare input variable
    cin >> c;             // retrieve temperature to input variable
    double k = ctok(c); // convert temperature
    cout << k << '\n';    // print out temperature
}
/* Errors list
return int -> return type int?
cin >> d;  -> undefined d
double k = ctok("c") -> type error, it is double, not char or string
Cout << k << '/n'; -> syntax error in C and /n

Logic errors

int k = c + 273.15; will return a int
*/