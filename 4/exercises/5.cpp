/**
 * @file 5.cpp
 * @author Thiago Araújo (ThiaudioTT)
 * @brief exercise 5 from ch4
 * @version 1
 * @date 2022-02-23 (YYYY-MM-DD)
 * 
 * @copyright Copyright (c) 2022
 * 
 */

/*Write a program that performs as a very simple calculator. Your calculator 
should be able to handle the four basic math operations — add, subtract, 
multiply, and divide — on two input values. Your program should prompt 
the user to enter three arguments: two double values and a character to 
represent an operation. If the entry arguments are 35.6, 24.1, and '+', the 
program output should be The sum of 35.6 and 24.1 is 59.7. In Chapter 6 
we look at a much more sophisticated simple calculator.
*/

#include "../../std_lib_facilities.h"

int main(){
    double a = 0, b = 0;
    char operation = '0';
    cout<<"\nEnter 2 numbers and a operation: ";

    while(cin>>a>>b>>operation){
        switch(operation){
            case '+':
                cout<<"\nThe sum of "<<a<<" and "<<b<<" is "<<a+b;
                break;
            case '-':
                cout<<"\nThe difference of "<<a<<" and "<<b<<" is "<<a-b;
                break;
            case '*':
                cout<<"\nThe product of "<<a<<" and "<<b<<" is "<<a*b;
                break;
            case '/':
                cout<<"\nThe quotient of "<<a<<" and "<<b<<" is "<<a/b;
                break;
            default:
                cout<<"\nEnter a valid operation!\n";
                break;
        }
        cout<<"\nAgain: "; 
    }

    return 0;
}