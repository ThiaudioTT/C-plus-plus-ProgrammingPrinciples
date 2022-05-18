#include "../../std_lib_facilities.h"

/*
Try to calculate the number of rice grains that the inventor asked for in 
exercise 8 above. You’ll find that the number is so large that it won’t fit 
in an int or a double. Observe what happens when the number gets too 
large to represent exactly as an int and as a double. What is the largest 
number of squares for which you can calculate the exact number of 
grains (using an int)? What is the largest number of squares for which 
you can calculate the approximate number of grains (using a double)?
*/


/*My response:
We can see the limit in 8.cpp, and is around 2 billion (int = 2147483647).

Here, the double can fullfil all the squares because the limit is 1.7976931348623157E+308.

This is called range and is associate with the physics of the computer.

*/
int main(){
    int ratio = 2;
    
    double rice = 1; // change the type of rice here.


    for(int square = 1; square<=64; square++){ // prints the rice and calculates for next loop.
        cout<<"\nSquare: "<<square<<"\tRice: "<<rice<<"g";
        rice*=ratio; // adds rice for next loop
    }
    return 0;
}