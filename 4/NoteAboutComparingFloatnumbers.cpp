/* When I was doing the drill, I found this.

Comparing minor values like 0.01 can be a problem because the values are imprecise.
See ch 24.2
*/
#include "../std_lib_facilities.h"

int main(){
    double a1 = 1.02;
    double a2 = 1.01;

    // cin>>a1>>a2;

    if(a1-a2==0.01){ //this do not run.
        cout<<"ASDSAUIDSAUDHAU";
    } else {
        cout<<"deuruim"; // this runs
    }

    cout<<"\nThe difference: "<<a1-a2; // and this delivery the right value.
    return 0;
}

/* see:
https://stackoverflow.com/questions/6837007/comparing-float-double-values-using-operator
https://bitbashing.io/comparing-floats.html
https://stackoverflow.com/questions/4915462/how-should-i-do-floating-point-comparison
https://bowenli86.github.io/2016/08/27/best%20practices/How-to-compare-float-numbers/
https://docs.microsoft.com/en-us/cpp/build/why-floating-point-numbers-may-lose-precision?view=msvc-170
https://stackoverflow.com/questions/21895756/why-are-floating-point-numbers-inaccurate
https://www.quora.com/Why-are-floating-point-numbers-defined-as-float-instead-of-real
https://docs.python.org/3/tutorial/floatingpoint.html
https://levelup.gitconnected.com/why-floating-point-numbers-are-not-always-accurate-9a57e812ace1
https://qastack.com.br/programming/21895756/why-are-floating-point-numbers-inaccurate
https://www.answerlib.com/pt/question/5035/why-are-floating-point-numbers-inaccurate.html
*/
