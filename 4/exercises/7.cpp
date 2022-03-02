/**
 * @file 7.cpp
 * @author Thiago Araújo (ThiaudioTT)
 * @brief exe 7 ch4
 * @version 1
 * @date 2022-02-26 (YYYY-MM-DD)
 * 
 * @copyright Copyright (c) 2022
 * 
 */

/*
Modify the “mini calculator” from exercise 5 to accept (just) single-digit 
numbers written as either digits or spelled out
*/

/*
Note: This could be much easier with the errors statement, but I won't use it, because
the book still not teached it.
*/

/* Note: 
In this exercise I tried: 
return 2 values in a function.
Do for 2 times with the same logic.
Returned wrong vars. And more.
I tried convert a and b simultaneously. 

Many lines of code. But the final result was simple and good.
*/

#include "../../std_lib_facilities.h"

/**
 * @brief converts string into an int
 * 
 * @param str
 * @return int
 */
int StrToInt(string str){
    int digit = -1;
    vector<string> numbers_spelled = {"zero","one","two","three","four","five",
                                        "six","seven","eight","nine"}; 
    vector<string> numbers = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};

    for(int i = 0; i<numbers.size(); i++){ // see numbers.size == 10;
        if(str==numbers_spelled[i] || str==numbers[i]){
            digit = i; break;
        }
    }

    return digit;
}

int main(){
    string a = " ", b = " "; // this will be the input
    int x = 0, y = 0; // this will be the numbers (converted)
    char operation = '0';

    cout<<"\nEnter 2 numbers and a operation(exe: 3 + 6): ";

    while(cin>>a>>operation>>b){ // read strings a, operation and b.

        //converts into int and adds in x and y.
        x = StrToInt(a);
        y = StrToInt(b);
        
        if(x == -1 || y == -1){ //verify bad input
            cout<<"\nEnter a valid input: 0<=x<=9"; // print message and go for the next loop.
        } else { // If is not bad input, the program will continue
            switch(operation){ // calculate
                case '+':
                    cout<<"\nThe sum of "<<x<<" and "<<y<<" is "<<x+y;
                    break;
                case '-':
                    cout<<"\nThe difference of "<<x<<" and "<<y<<" is "<<x-y;
                    break;
                case '*':
                    cout<<"\nThe product of "<<x<<" and "<<y<<" is "<<x*y;
                    break;
                case '/':
                    cout<<"\nThe quotient of "<<x<<" and "<<y<<" is, aproximately: "<<x/y;
                    break;
                default: // bad operation
                    cout<<"\nEnter a valid operation!\n";
                    break;
            }

        }
        
        cout<<"\nAgain: "; 
    }

    return 0;
}
