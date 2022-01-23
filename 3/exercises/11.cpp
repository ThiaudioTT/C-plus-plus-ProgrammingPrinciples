/**
 * @file 11.cpp
 * @author Thiago Araújo (ThiaudioTT)
 * @brief exercise 11
 * @version 1
 * @date 2022-01-23 (YYYY-MM-DD)
 * 
 * @copyright Copyright (c) 2022
 * 
 */

/*Write a program that prompts the user to enter some number of pennies (1-cent coins), 
nickels (5-cent coins), dimes (10-cent coins), quarters (25-cent coins), half dollars 
(50-cent coins), and one-dollar coins (100-cent coins). Query the user separately for the number of each size
coin, e.g., “How many pennies do you have?” Then your program should 
print out something like this:
You have 23 pennies.
You have 17 nickels.
You have 14 dimes.
You have 7 quarters.
You have 3 half dollars.
The value of all of your coins is 573 cents
Make some improvements: if only one of a coin is reported, make the 
output grammatically correct, e.g., 14 dimes and 1 dime (not 1 dimes). 
Also, report the sum in dollars and cents, i.e., $5.73 instead of 573 cents*/

#include "../../std_lib_facilities.h"

int main(){
    int pennies=1;
    int nickels=5;
    int dimes=10;
    int quarters=25;
    int half=50;
    double total=0;

    //input
    cout<<"\nHow many pennies do you have? ";
    cin>>pennies;
    cout<<"\nHow many nickels do you have? ";
    cin>>nickels;
    cout<<"\nHow many dimes do you have? ";
    cin>>dimes;
    cout<<"\nHow many quarters do you have? ";
    cin>>quarters;
    cout<<"\nHow many half-dollars do you have? ";
    cin>>half;

    //singular
    if(pennies==1){
        cout<<"\nYou have 1 pennie.\n";
    } else{
    // plural
        cout<<"\nYou have "<<pennies<<" pennies.\n";
    }
    if(nickels==1){
        cout<<"You have 1 nickel.\n";
    } else{
    // plural
        cout<<"You have "<<nickels<<" nickels.\n";
    }
    if(dimes==1){
        cout<<"You have 1 dime.\n";
    } else{
    // plural
        cout<<"You have "<<dimes<<" dimes.\n";
    }
    if(quarters==1){
        cout<<"You have 1 quarter.\n";
    } else{
    // plural
        cout<<"You have "<<quarters<<" quarters.\n";
    }
    if(half==1){
        cout<<"You have 1 half-dollar.\n";
    } else{
    // plural
        cout<<"You have "<<half<<" half-dollars.\n";
    }

    total= pennies + (5*nickels) + (10*dimes) + (25*quarters) + (50*half);
    cout<<"\nThe value of all your coins is $"<<total/100; // divide 100 will turn in dollars.
    return 0;
}