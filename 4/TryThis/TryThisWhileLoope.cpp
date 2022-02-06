/**
 * @file TryThisWhileLoope.cpp
 * @author Thiago Araújo (ThiaudioTT)
 * @brief Try This 3
 * @version 1.0.1
 * @date 2022-02-02 (YYYY-MM-DD)
 * 
 * @copyright Copyright (c) 2022
 * 
 */

/*
The character 'b' is char('a'+1), 'c' is char('a'+2), etc. Use a loop to write out 
a table of characters with their corresponding integer values:
a 97
b 98
. . .
z 122*/

// Foi utilizado: https://web.fe.up.pt/~ee96100/projecto/Tabela%20ascii.htm

#include "../../std_lib_facilities.h"
// z = 122
int main(){
    int i = 97;

    cout<<"\nYour ASCII table to decimal is: \n";
    while(i<123){
        cout<<char(i)<<"\t"<<i<<"\n";
        i++;
    }

    return 0;
}
