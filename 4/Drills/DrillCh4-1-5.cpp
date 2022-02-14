/**
 * @file DrillCh4-1-5.cpp
 * @author Thiago Araújo (ThiaudioTT)
 * @brief That's the drill for the chapter 4
 * @version 1
 * @date 2022-02-07 (YYYY-MM-DD)
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "../../std_lib_facilities.h"
// drill 1-5
int main(){
    double a, b;

    cout<<"\nEnter two values: ";
    while(cin>>a>>b){
        cout<<"\nHere is your values: "<<a<<" and "<<b;

        //smaller and larger and equality
        if(a==b){ //equal
            cout<<"\nThe numbers are equals!\n";
        } else if(a<b){
            cout<<"\nThe smaller value is: "<<a<<"\nThe larger value is: "<<b<<"\n";
        } else{
            cout<<"\nThe smaller value is: "<<b<<"\nThe larger value is: "<<a<<"\n";
        }

        // is they almost equal? (error)
        if(a-b==1){
            cout<<"\nThey are almost equal!\n";
        }
    }

    return 0;
}