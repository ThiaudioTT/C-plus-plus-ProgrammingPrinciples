/**
 * @file 17.cpp
 * @author Thiago Araújo (ThiaudioTT)
 * @brief exe 17
 * @version 1
 * @date 2022-03-19 (YYYY-MM-DD)
 * 
 * @copyright Copyright (c) 2022
 * 
 */

/*
Write a program that finds the min, max, and mode of a sequence of 
strings

Note: This time I won't do bimodal.
*/

#include <iostream>
#include <vector>
#include "../../std_lib_facilities.h"
using namespace std;

/**
 * @brief return an array with the min, mode and max in a array of type string.
 * @param array 
 * @return array 
 */
vector<string> FindMinModeMax(vector<string> array)
{
    vector<string> values; // vector to return

    string mode = "0";
    sort(array);

    int times = 0, record = 2; // times is the times that an element appears, record needs to be 2.
    for(int i = 0; i<array.size(); i++) // read string
    {
        times = 0;
        for(int j = 0; j < array.size(); j++)
        {
            if(array[i] == array[j])
            {
                times+=1;
            }
        }

        if(times>=record)
        {
            record = times;
            mode = array[i];
        }
    }

    //atributing the values, array is already sorted
    values.push_back(array[0]);
    values.push_back(mode);
    values.push_back(array[array.size() - 1]); // last element
    return values;
}

int main()
{
    vector<string> abc = {"acaro", "bola", "cachorro", "cachorro", "dado", "elastico", "whatzap"};

    vector<string> values = FindMinModeMax(abc);
    
    cout<<"\nYour values: ";
    for(string x : values)
    {
        cout<<x<<"\t";
    }
    return 0;
}