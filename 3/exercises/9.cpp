/**
 * @file 10.cpp
 * @author Thiago Araújo (ThiaudioTT)
 * @brief exe 10
 * @version 1
 * @date 2022-01-22 (YYYY-MM-DD)
 * 
 * @copyright Copyright (c) 2022
 * 
 */

/*Write a program that converts spelled-out numbers such as “zero” and 
“two” into digits, such as 0 and 2. When the user inputs a number, the 
program should print out the corresponding digit. Do it for the values 0, 
1, 2, 3, and 4 and write out not a number I know if the user enters something 
that doesn’t correspond, such as stupid computer!.*/


#include "../../std_lib_facilities.h"

int main(){
    string strnum=" ";

    cout<<"Type a number spelled-out (do not use caps):\n";
    cin>>strnum;

    if(strnum=="zero"){
        cout<<"\n"<<strnum<<" is 0\n";
    } else if(strnum=="one"){
        cout<<"\n"<<strnum<<" is 1\n";
    } else if(strnum=="two"){
        cout<<"\n"<<strnum<<" is 2\n";
    } else if(strnum=="three"){
        cout<<"\n"<<strnum<<" is 3\n";
    } else if(strnum=="four"){
        cout<<"\n"<<strnum<<" is 4\n";
    } else{
        cout<<"\nNot a number that I know. Sorry!\n";
    }
    return 0;
}