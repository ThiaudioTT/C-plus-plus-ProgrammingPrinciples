/**
 * @file TryThisForLoop.cpp
 * @author Thiago Araújo (ThiaudioTT)
 * @brief Try this 4
 * @version 1
 * @date 2022-02-02 (YYYY-MM-DD)
 * 
 * @copyright Copyright (c) 2022
 * 
 */

/*
Rewrite the character value example from the previous Try this to use a 
for-statement. Then modify your program to also write out a table of the 
integer values for uppercase letters and digits.*/

#include "../../std_lib_facilities.h"

int main(){
    int i = 0;

    cout<<"\nYour ASCII table to decimal is: \n"
        <<"Ascii\tDecimal\n";

    // letters uppercase
    for(i=65;i<91;i++)
        cout<<char(i)<<"\t"<<i<<"\n";

    // letters lowercase
    for(i=97;i<123;i++)
        cout<<char(i)<<"\t"<<i<<"\n";

    //Digits
    for(i=48;i<58;i++)
        cout<<char(i)<<"\t"<<i<<"\n";

    return 0;
}
