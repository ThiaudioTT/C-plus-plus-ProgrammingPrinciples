/**
 * @file TryThisConversion.cpp
 * @author Thiago Araújo (ThiaudioTT)
 * @brief Try This exercise
 * @version 1
 * @date 2022-02-01 (YYYY-MM-DD)
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "../../std_lib_facilities.h"


/*Use the example above as a model for a program that converts yen ('y'), 
kroner ('k'), and pounds ('p') into dollars. If you like realism, you can find 
conversion rates on the web.*/

int main(){
    constexpr double conv_yen = 0.00871;
    constexpr double conv_kroner = 0.11302;
    constexpr double conv_pounds = 1.35020;

    double coin = 1;  
    char unit = ' '; 

    cout<< "Please enter your money followed by a unit:\ny, k or p. (Yen, kroner and pound, respectively): ";
    cin >> coin >> unit;

    if (unit == 'y')
        cout << coin << "¥ == " << coin*conv_yen << "$\n";
    else if (unit == 'k')
        cout << coin << "kr$ == " << coin*conv_kroner << "$\n";
    else if(unit == 'p')
        cout << coin << "£ == " << coin*conv_pounds << "$\n";
    else{
        cout<<"I don't know this kind of currency.\n";
    }
        
    return 0;
}
