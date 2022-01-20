/*Write a program in C++ that converts from miles to kilometers. Your
program should have a reasonable prompt for the user to enter a number
of miles. Hint: There are 1.609 kilometers to the mile*/

#include "../../std_lib_facilities.h"

int main(){
    //input
    double miles=0;
    double kilometer=0;
    while(true){
        cout<<"\nWhat miles do you want to see in kilometers? R: ";
        cin>>miles;

        kilometer=miles*1.609;
        cout<<"\n\n"<<miles<<" miles is "<<kilometer<<" kilometers.";
    }
    return 0;
}
