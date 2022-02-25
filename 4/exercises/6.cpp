/**
 * @file 6.cpp
 * @author Thiago Araújo (ThiaudioTT)
 * @brief exercise 6
 * @version 1.0.1
 * @date 2022-02-25 (YYYY-MM-DD)
 * 
 * @copyright Copyright (c) 2022
 * 
 */

/*
Make a vector holding the ten string values "zero", "one", . . . "nine". 
Use that in a program that converts a digit to its corresponding 
spelled-out value; e.g., the input 7 gives the output seven. Have the same 
program, using the same input loop, convert spelled-out numbers into 
their digit form; e.g., the input seven gives the output 7
*/
#include "../../std_lib_facilities.h"

int main(){
    vector<string> values = {"zero","one","two","three","four","five",
    "six","seven","eight","nine"};
    int input = 0;

    cout<<"\nDigit a number(0-9): ";
    while(cin>>input){

        if(input>=0 && input<=9){
            cout<<input<<" is "<<values[input];
        } else{
            cout<<"\nEnter a valid value!!";
        }

        cout<<"\nAgain: ";
    }
    return 0;
}