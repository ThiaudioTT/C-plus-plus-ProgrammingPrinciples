#include "../std_lib_facilities.h"

// Declaration
int msquare(int);

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


int msquare(int n){ // declaration

    // definition: (the body)
    int result = 0;
    for(int i=0;i<n;i++) result+=n;
    return result;
}

// See more in https://www.w3schools.com/cpp/cpp_functions.asp
