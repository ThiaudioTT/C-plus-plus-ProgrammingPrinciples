#include "../std_lib_facilities.h"

int main(){
    //safe conversion

    char c = 'x';
    int i1=c; //go to int
    int i2='x'; // Int!!
    char c2=i1; //go to char

    cout<<c<<" -- "<<i1<<" -- "<<c2<<"\n";
    // expected output:
    // x -- 120 -- x


    //unsafe conversion/narrowing
    // note: May be this code run in a compiler or other...
    cout<<"Here goes the narrowing\n\n";
    int a=20000;
    char c=a; //trying to put 20000 into a char
    int b=c;
    if(a!=b)
        cout<<"oops!: "<<a<<"!="<<b<<"\n";
    else
        cout<<"Wow! We have large characters\n";
    return 0;
}
