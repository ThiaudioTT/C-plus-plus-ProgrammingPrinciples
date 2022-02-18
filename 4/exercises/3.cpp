/**
 * @file 2.cpp
 * @author Thiago Araújo (ThiaudioTT)
 * @brief exercise 3
 * @version 1
 * @date 2022-02-18 (YYYY-MM-DD)
 * 
 * @copyright Copyright (c) 2022
 * 
 * @enum:
Read a sequence of double values into a vector. Think of each value as 
the distance between two cities along a given route. Compute and print 
the total distance (the sum of all distances). Find and print the smallest 
and greatest distance between two neighboring cities. Find and print the 
mean distance between two neighboring cities
 */



#include "../../std_lib_facilities.h"

int main(){

    double distance = 0, sum = 0, smallest = 0,
            greatest = 0, mean = 0;

    vector<double> values;

    // read the values
    while(cin>>distance)
        values.push_back(distance);
    

    // find the sum of values
    for(double x : values)
        sum += x;
    
    //find the smallest and greatest
    sort(values);
    smallest = values[0];
    greatest = values[values.size()-1];

    // find the mean
    mean = sum/values.size();

    // print the info
    cout<<"\nSum: "<<sum<<"\nSmallest: "<<smallest<<"\nGreatest: "<<greatest
        <<"\nMean: "<<mean;

    return 0;
}