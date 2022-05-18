/**
 * @file TryThisConversionWSwitch.cpp
 * @author Thiago Araújo (ThiaudioTT)
 * @brief Try this 2
 * @version 1
 * @date 2022-02-02 (YYYY-MM-DD)
 * 
 * @copyright Copyright (c) 2022
 * 
 */


/*
Rewrite your currency converter program from the previous Try this to use a 
switch-statement. Add conversions from yuan and kroner. Which version of 
the program is easier to write, understand, and modify? Why?
*/

#include "../../std_lib_facilities.h"

int main(){
    constexpr double conv_yen = 0.00871;
    constexpr double conv_kroner = 0.11302;
    constexpr double conv_pounds = 1.35020;
    constexpr double conv_yuan = 0.15721;

    double coin = 1;  
    char unit = ' '; 

    cout<< "Please enter your money followed by a unit:\ny, k, p or u. (Yen, kroner, pound and yuan, respectively): ";
    cin >> coin >> unit;

    switch(unit){
        case 'y':
            cout << coin << "¥ == " << coin*conv_yen << "$\n";
            break;
        case 'k':
            cout << coin << "kr$ == " << coin*conv_kroner << "$\n";
            break;
        case 'p':
            cout << coin << "£ == " << coin*conv_pounds << "$\n";
            break;
        case 'u':
            cout << coin << "¥CNY == " << coin*conv_yuan << "$\n";
            break;
        default:
            cout<<"I don't know this kind of currency.\n";
            break;
    }   
        
    return 0;
}
/*
R: Both versions are good. But the switch statemment looks more good and easy to see, write and understand.*/
