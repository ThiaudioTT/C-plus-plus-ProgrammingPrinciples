/**
 * @file 6.cpp
 * @author Thiago Araújo (ThiaudioTT)
 * @brief exercise 6 from ch 3.
 * @version 1
 * @date 2022-01-18 (YYYY-MM-DD)
 * 
 * @copyright Copyright (c) 2022
 * 
 */

/*Write a program that prompts the user to enter three integer values, and
then outputs the values in numerical sequence separated by commas. So,
if the user enters the values 10 4 6, the output should be 4, 6, 10. If two
values are the same, they should just be ordered together. So, the input
4 5 4 should give 4, 4, 5.*/

/*Note: 
    There are many different ways to do this, but I will do based on the book knowledge.
    That is, according what I learned from now. And probably this is the hardest way, and I know it.
    I will refactor in the future.*/

#include "../../std_lib_facilities.h"

int main (){
    int x1,x2,x3, smallest, midterm, larger;
    cout<<"Enter three integer numbers:\n";
    cin>>x1>>x2>>x3;

    /**
     * @brief Here goes the algorithm
     */
    //larger x1
    if(x1>=x2 && x1>=x3){
        larger=x1;

        // verify the other numbers x2, x3
        if(x2>x3){
            midterm=x2;
            smallest=x3;
        } else {
            midterm=x3;
            smallest=x2;
        }
    //midterm x1
    } else if(x1>=x2 && x1<=x3 || x1<=x2 && x1>=x3){
        midterm=x1;

        //verifyOthers
        if(x2>x3){
            larger=x2;
            smallest=x3;
        } else {
            larger=x3;
            smallest=x2;
        }
    //smallest x1
    } else if(x1<=x2 && x1<=x3){
        smallest=x1;

        //verifyOthers
        if(x2>x3){
            larger=x2;
            midterm=x3;
        } else{
            larger=x3;
            midterm=x2;
        }
    }

    //print
    cout<<"\nSmallest = "<<smallest<<"\nMidterm = "<<midterm<<"\nLarger = "<<larger;
    return 0;
}
