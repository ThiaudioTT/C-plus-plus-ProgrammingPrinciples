/**
 * @file 16.cpp
 * @author Thiago Araújo (ThiaudioTT)
 * @brief exercise 16, algorithm to search mode.
 * @version 1.0.1
 * @date 2022-03-14 (YYYY-MM-DD)
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/*
In the drill, you wrote a program that, given a series of numbers, found 
the max and min of that series. The number that appears the most times 
in a sequence is called the mode. Create a program that finds the mode of 
a set of positive integers.*/

#include <iostream>
#include <vector>
#include "../../std_lib_facilities.h"
using namespace std;

/**
 * @brief prints an array
 * 
 */
void printarray(vector<int>array)
{
    for(int x : array)
    {
        cout<<x<<"\t";
    }
}

/**
 * @brief Returns mode of an array
 * 
 * @param array 
 * @return int mode
 */
int findmode(vector<int> array)
{
    int mode = -444;
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

    return mode;
}

/**
 * @brief returns list of modes in an array
 * 
 * @param array 
 * @return vector<int> modes
 */
vector<int> findMultipleMode(vector<int> array)
{
    /*
    Possible_mode and times_mode is linked by the index. Possible_mode represents the element and the times_mode
    represents how many times that element have repeated. Mode is indeed the final mode.
    So, the index of the array is the same, what change is what data do you want (times repeated or the element)
    */
    vector<int> possible_mode, times_mode, mode;

    // time is the qtd of the number, to be a mode, the element need appear min 2 times (record = 2)
    int times = 0, record = 2, repeated_more = -11;
    sort(array); // sort array, this is important

    /* here we will search for possible modes.*/
    for(int i = 0; i<array.size(); i++)
    {
        times = 0;
        for(int j = 0; j < array.size(); j++) // calculate times a number appear in the array
        {
            if(array[i] == array[j])
            {
                times+=1;
            }
        }

        // if times is greater than record, this dada(times and the element) is added to possible_mode and times_mode
        if(times>=record)
        {
            /*this filter elements that should not be in here.
            i.e, if the element is the same as before, the program skip, if is different, the program adds. 
            If the mode is the first element(i==0) the program adds*/
            if(i == 0 || array[i] != array[i-1])
            {
                record = times;
                possible_mode.push_back(array[i]);
                times_mode.push_back(times);
            }
        }
    }

    /* sort and see who is repeated more (the greatest repeated number in times_mode -> this will search for pair
    like times_mode = {2,2,5,5,5,3,3,3,3,3} -> 5 is the repeated_more.
    */ 
    sort(times_mode); // sort will push the number to the final index
    repeated_more = times_mode[times_mode.size() - 1]; // the repeated more obviosly will be the final element in times_mode

    // search for the number who is repeated more in the array, and adds that element (who is in possible_mode) in mode.
    for(int i = 0; i<times_mode.size(); i++)
    {
        if(repeated_more == times_mode[i])
        {
            mode.push_back(possible_mode[i]);
        }
    }
    
    // vector mode will be empty if this happens.
    // if(mode.size() == 0)
    // {
    //     cout<<"\nERROR NO MODE FOUND";
    // }

    return mode;
}


int main()
{
    /*
    We can use more of findMultipleMode() because it returns the array with the mode elements.
    If it have 0, there's no mode.
    If it have 1 == normal mode.
    If it have 2 == bimodal
    If it have 3 == trimodal...  
    */
    vector<int> array1 = {1,2,3,4,5,5,5,6,6,6,6,6,6,6,6,6,7,2};
    int a = findmode(array1);

    vector<int> array2 = {2,2,4,4,3,3,22,24}; // array2 is bimodal
    vector<int> b = findMultipleMode(array2);
    cout<<"\na = "<<a;

    cout<<"\nb = ";
    printarray(b);

    cout<<"\nSIZE OF ARRAY2: "<<b.size();
    
    return 0;
}
