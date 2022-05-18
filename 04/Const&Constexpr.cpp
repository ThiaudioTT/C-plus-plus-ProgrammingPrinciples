#include "../std_lib_facilities.h"

/*
constexpr needs constant values at compile time and won't change the value
const won't change the values.*/

/*
"constexpr creates a compile-time constant; const simply means that value cannot be changed."
*/
int main(){
    /*const*/ int var = 5;

    // This will give a error because the compiler can't recognize var (var isn't a const expression)
    constexpr int a = var + 100;
    cout<<a;

    // This won't return a error because const allow it.
    const int a = var + 100;
    cout<<a; //output: 105

}
/*
"The principal difference between const and constexpr is the time when their 
initialization values are known (evaluated). While the values of const variables 
can be evaluated at both compile time and runtime, constexpr are always 
evaluated at compile time."

See more in: 

https://stackoverflow.com/questions/14116003/difference-between-constexpr-and-const?rq=1

*/

