/**
 * @file ranged-for-loops.cpp
 * @author Thiago Araújo (ThiaudioTT)
 * @brief Demonstration of range for loops
 * @version 1
 * @date 2022-02-06 (YYYY-MM-DD)
 * 
 * @copyright Copyright (c) 2022
 * 
 */


/*
Definition:

Executes a for loop over a range.
Used as a more readable equivalent to the traditional \
for loop operating over a range of values, such as all elements in a container.
*/
#include "../std_lib_facilities.h"

int main(){
    vector<int> num = {10, 30, 40, 50, 60, 70, 80, 90};

    for(int var : num) // we read: "for each var in num"
        cout<<var<<"\t";
    
    // that code above is like:
    cout<<"\nthat code above is like:\n";

    for(int var=0; var<num.size(); var++)
        cout<<num[var]<<"\t"; // note: num[var] instead of var

    return 0;
}

// see more in:
// https://www.programiz.com/cpp-programming/ranged-for-loop
// https://en.cppreference.com/w/cpp/language/range-for