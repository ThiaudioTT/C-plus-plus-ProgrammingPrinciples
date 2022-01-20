/**
 * @file 7.cpp
 * @author Thiago Araújo (ThiaudioTT)
 * @brief exercise 7.
 * @version 1
 * @date 2022-01-20 (YYYY-MM-DD)
 * @copyright Copyright (c) 2022
 * 
 * @note THIS FILE IS BASED ON 6.cpp
 */

/*7. Do exercise 6, but with three string values. So, if the user enters the values Steinbeck, Hemingway, Fitzgerald, the output should be Fitzgerald, 
Hemingway, Steinbeck.*/

/*
See ansi char to understand this exercise:
http://www.alanwood.net/demos/ansi.html

Ansi char are a topic for study later, not now. So, comparing strings (like less than or more than) is possible.

You can see more here:

https://stackoverflow.com/questions/7087811/why-is-one-string-greater-than-the-other-when-comparing-strings-in-javascript
https://javascript.info/comparison#string-comparison
https://en.wikipedia.org/wiki/Lexicographic_order
https://stackoverflow.com/questions/45950646/what-is-lexicographical-order

*/
#include "../../std_lib_facilities.h"

int main(){


    string x1,x2,x3; // , smallest, midterm, larger;
    cout<<"Enter three names separated by a space:\n";
    cin>>x1>>x2>>x3;

    // always define a var.
    string smallest=" ";
    string midterm=" ";
    string largest=" ";
    /**
     * @brief Here goes the algorithm
     */
    //largest x1
    if(x1>=x2 && x1>=x3){
        largest=x1;

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
            largest=x2;
            smallest=x3;
        } else {
            largest=x3;
            smallest=x2;
        }
    //smallest x1
    } else if(x1<=x2 && x1<=x3){
        smallest=x1;

        //verifyOthers
        if(x2>x3){
            largest=x2;
            midterm=x3;
        } else{
            largest=x3;
            midterm=x2;
        }
    }

    //print
    cout<<"\nFirst = "<<smallest<<"\nSecond = "<<midterm<<"\nThird = "<<largest;


    return 0;
}