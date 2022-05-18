/*Modify the program above to ask the user to enter floating-point values
and store them in double variables. Compare the outputs of the two programs for some inputs of your choice. Are the results the same? Should
they be? What�s the difference?*/

#include "../../std_lib_facilities.h"

// That's some difference we can note. Now we can see the ratio, because its double, previously,
// the result was some like 0,2... (int values).
// In addition, we can now enter float values.
int main(){
    // I named va1 and va2 because it is more easy to me.
    double va1=0;
    double va2=0;
    cout<<"Enter the two values: ";
    cin>>va1>>va2;

    // check the smaller and larger
    if(va1<va2){
        cout<<va1<<" is smaller than "<<va2<<"."
        <<"\nAnd:\n"<<va2<<" is larger than "<<va1<<".";

    } else {
        cout<<va2<<" is smaller than "<<va1<<"."
        <<"\nAnd:\n"<<va1<<" is larger than "<<va2<<".";
    }

    //The sum, difference, product and ratio.
    cout<<"\nThe sum of these numbers is: "<<va1+va2
        <<"\nDifference: "<<va1-va2<<"\nProduct: "
        <<va1*va2<<"\nRatio: "<<va1<<"/"<<va2<<" = "<<va1/va2; // As now is double, we can visualize the ratio. That's the principal diff.

    return 0;
}
