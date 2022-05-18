/**
 * @file 4.cpp
 * @author  ( ---)
 * @brief 
 * @version 0.1
 * @date 2022-01-18
 * 
 * @copyright Copyright (c) 2022
 * 
 */

/*Write a program that prompts the user to enter two integer values. Store
these values in int variables named val1 and val2. Write your program to
determine the smaller, larger, sum, difference, product, and ratio of these
values and report them to the user.*/

#include "../../std_lib_facilities.h"

int main(){
    // I named va1 and va2 because it is more easy to me.
    int va1=0;
    int va2=0;
    cout<<"Enter the two values: ";
    cin>>va1>>va2;

    // check the smaller and larger
    if(va1<va2){
        cout<<va1<<" is smaller than "<<va2<<"."
        <<"\nAnd:\n"<<va2<<" is larger than "<<va1<<".";

    } else {
        cout<<va2<<" is smaller than "<<va1<<"."
        <<"\nAnd:\n"<<va1<<" is larger than "<<va2<<".";
    }

    //The sum, difference, product and ratio.
    cout<<"\nThe sum of these numbers is: "<<va1+va2
        <<"\nDifference: "<<va1-va2<<"\nProduct: "
        <<va1*va2<<"\nRatio: "<<va1<<"/"<<va2;

    return 0;
}
