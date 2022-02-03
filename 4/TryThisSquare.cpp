/**
 * @file TryThisSquare.cpp
 * @author Thiago Araújo (ThiaudioTT)
 * @brief Try this 5
 * @version 1
 * @date 2022-02-03 (YYYY-MM-DD)
 * 
 * @copyright Copyright (c) 2022
 * 
 */


/*
Implement square() without using the multiplication operator; that is, do the 
x*x by repeated addition (start a variable result at 0 and add x to it x times). 
Then run some version of “the first program” using that square()
*/

/* Note:
This exercise was a little hard. But I achieved it.*/

#include "../std_lib_facilities.h"

int msquare(int n){
    int result = 0;
    for(int i=0;i<n;i++) result+=n;
    return result;
}

int main(){
    int square = 0;
    cout<<"Hello World!\n";
    while(true){
        cout<<"\nWhat square do you want? ";
        cin>>square;
        cout<<"\nYour square is: "<<msquare(square)<<"\n";
    }

    return 0;
}
