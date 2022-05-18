#include "../../std_lib_facilities.h"


/* Try This:
Find a pair of values so that the pre-condition of this version of area holds, but 
the post-condition doesn’t
*/

int area(int length, int width)
// calculate area of a rectangle;
// pre-conditions: length and width are positive
// post-condition: returns a positive value that is the area
{
    if (length<=0 || width <=0) error("area() pre-condition");
    int a = length*width;
    if (a<=0) error("area() post-condition");
    return a;
}

int main() 
{
    cout<<area(500, 100);
    return 0;
}