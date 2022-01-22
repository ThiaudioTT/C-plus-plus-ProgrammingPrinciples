/**
 * @file 8.cpp
 * @author Thiago Araújo (ThiaudioTT)
 * @brief exercise 8
 * @version 1
 * @date 2022-01-22 (YYYY-MM-DD)
 * 
 * @copyright Copyright (c) 2022
 * 
 */

/*Write a program to test an integer value to determine if it is odd or 
even. As always, make sure your output is clear and complete. In other 
words, don’t just output yes or no. Your output should stand alone, 
like The value 4 is an even number. Hint: See the remainder (modulo) 
operator in §3.4*/

#include "../../std_lib_facilities.h"

int main(){
    int x=0;
    cout<<"Enter a number: ";
    cin>>x;

    if(x%2==0){
        cout<<"\n"<<x<<" is an even number\n";
    } else {
        cout<<"\n"<<x<<" is an odd number\n";
    }
    return 0;
}