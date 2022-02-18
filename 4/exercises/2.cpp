/**
 * @file 2.cpp
 * @author Thiago Araújo (ThiaudioTT)
 * @brief Stroustrup code modified for exercise 2.
 * @version 1
 * @date 2022-02-18 (YYYY-MM-DD)
 * 
 * @copyright Copyright (c) 2022
 * @enum:
 * If we define the median of a sequence as “a number so that exactly as 
many elements come before it in the sequence as come after it,” fix the 
program in §4.6.3 so that it always prints out a median. Hint: A median 
need not be an element of the sequence
 */

#include "../../std_lib_facilities.h"

int main(){
    double median = 0;
    double sum = 0;

    vector<double> temps; // temperatures
    for (double temp; cin>>temp;) // read into temp
        temps.push_back(temp); // put temp into vector

    if(temps.size()<=1) //verify if no values are listed
        cout<<"\nERROR! INSERT MORE VALUES!\n";
    
    // compute sum of temperature (for mean)
    for (double x : temps) sum += x;
 
    // compute median temperature:
    sort(temps); // sort temperatures
    if(temps.size() % 2 == 0){ // even
        double v1, v2;
        v2 = temps[temps.size()/2];
        v1 = temps[temps.size()/2 - 1];
        
        median = (v1 + v2)/2;
        // median = (temps.size()/2 - 1 + temps.size()/2)/2;

    } else { // odd
        median = temps[(temps.size()-1) / 2];
    }

    // prints
    cout << "Average temperature: " << sum/temps.size() 
        << "\nMedian temperature: " << median << '\n';

    return 0;
}