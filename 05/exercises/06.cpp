/**
 * @file 06.cpp
 * @author Thiago A. (`)
 * @brief 
 * @version 0.1
 * @date 2022-05-18
 * 
 * @copyright Copyright (c) 2022
 * Write a program that converts from Celsius to Fahrenheit and from Fahrenheit to Celsius (formula in §4.3.3). Use estimation (§5.8) to see if your 
results are plausible
 */

#include "../../std_lib_facilities.h"

class invalidTemp
{
}; // class to report errors to invalid temperatures

/**
 * @brief 
 * 
 * @param c 
 * @return double fahrenheit 
 * 
 * only values > -273.15
 */
double ctof(double c){
    if(c<-273.15) throw invalidTemp{}; //precondition
    double f = c * 1.8 + 32;
    return f;
}

double ftoc(double f){
    if(f<-459.67) throw invalidTemp{};
    double c = (f-32) / 1.8;
    return c;
}

int main()
{
    try{

    cout<<ftoc(100);
    cout<<ftoc(0);
    } catch (invalidTemp){
        cout<<"ERROR: invalid temperature.";
    }
}
