/**
 * @file 18.cpp
 * @author Thiago Araújo (ThiaudioTT)
 * @brief exe 18
 * @version 1
 * @date 2022-03-19 (YYYY-MM-DD)
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/*Write a program to solve quadratic equations*/
#include <math.h>
#include <iostream>
using namespace std;

int main(){
    double a = 0, b = 0, c = 0, 
        delta = 0, x1 = 0, x2 = 0;

    while(a == 0)
    {
        cout<<"Enter values for a solution for quadratic equations like: ax^2 + bx + c = 0"
        <<"\nEnter value for:\na = "; cin>>a;
        cout<<"\nb = "; cin>>b;
        cout<<"\nc = "; cin>>c;

        // warn  bad inputs
        if(a == 0)
        {
            cout<<"\nTo be a quadratic equations 'a' needs to be different from 0\nError: a = 0\n";
        }
    }




    // algorithm
    delta = b*b - (4*a*c);
    if(delta<0)
    {
        cout<<"\nYour result is from complex numbers!\nThis algorithm does not support complex numbers."
        <<"\nResult: D = "<<delta<<"\nErro: Equation does not have real root.";
    } else {
        // ajusting 
        delta = sqrt(delta);
        b = -b;

        // calculating
        x1 = (b + delta) / (2*a);
        x2 = (b - delta) / (2*a);

        cout<<"\nx1 = "<<x1<<"\nx2 = "<<x2;
    }



    return 0;    
}