#include <stdlib.h>
#include <iostream>
using namespace std;

int main(){

    const char a = 'a';
    switch (a)
    {
    case 'a':
        // {
        int z = 23; // error must be in brackets
        cout<<z;
        // }
        break;
    case 'b':
        break;
    default:
        break;
    }
    
    return 0;
}

// https://stackoverflow.com/questions/11578936/getting-a-bunch-of-crosses-initialization-error