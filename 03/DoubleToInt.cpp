#include "../std_lib_facilities.h"

int main(){
    double x=2.7;
    int y=x; // y becomes 2, because is always rounded to 0.(The fraction is eliminated)

    int a = x + y; // x becomes 2.

    cout<<"x= "<<x<<"\ny= "<<y<<"\na= "<<a;
    // expected output:
    /*
    x= 2.7
    y= 2
    a= 4
    */
    return 0;
}

