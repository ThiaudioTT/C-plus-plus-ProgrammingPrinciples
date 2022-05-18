/**
 * @file 10.cpp
 * @author Thiago Araújo (ThiaudioTT)
 * @brief exercise 10
 * @version 1
 * @date 2022-01-22 (YYYY-MM-DD)
 * 
 * @copyright Copyright (c) 2022
 * 
 */

/*Write a program that takes an operation followed by two operands and 
outputs the result. For example:
+ 100 3.14
* 4 5
 Read the operation into a string called operation and use an 
if-statement to figure out which operation the user wants, for example, 
if (operation=="+"). Read the operands into variables of type double. 
Implement this for operations called +, –, *, /, plus, minus, mul, and div 
with their obvious meanings*/

#include "../../std_lib_facilities.h"

int main(){
    string operation=" ";
    double a = 0;
    double b = 0;
    cout<<"Enter two numbers and an operator between them, do not forget the whitespace.\n(Example: 2 * 5):\n";
    cin>>a>>operation>>b;

    if(operation=="+"){
        cout<<"\n\nResult: "<<a+b<<"\n";
    } else if(operation=="-"){
        cout<<"\n\nResult: "<<a-b<<"\n";
    } else if(operation=="*"){
        cout<<"\n\nResult: "<<a*b<<"\n";
    } else if(operation=="/"){
        cout<<"\n\nResult: "<<a/b<<"\n";
    } else{
        cout<<"\nThis is not an operation that I know.";
    }
    return 0;
}