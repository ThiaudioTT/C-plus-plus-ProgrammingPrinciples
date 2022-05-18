#include "../../std_lib_facilities.h"

int main()
{
    double d = 0;

    cout<<"enter a bad input for double d: ";
    cin>>d;
    if(!cin){cout<<"Error: bad input! Enter a double value\n";}

/* The 
    if(d){
        cout<<"ok";
    } else{
        cout<<"error";
    }
*/
    cout<<"\n*Normal code here*";
}