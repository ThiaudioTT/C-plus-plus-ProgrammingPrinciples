/**
 * @file DrillCh4-5-11.cpp
 * @author Thiago Araújo (ThiaudioTT)
 * @brief Drills 5-11 in ch4
 * Note: There's a bug here and stroustrup do not explained well what the pogram will do.
 * @version 1
 * @date 2022-02-11 (YYYY-MM-DD)
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "../../std_lib_facilities.h"

int main(){
    double num = 0;
    double sum_num = 0;
    string unit = " ";
    vector<double> values;

    //constants
    constexpr double cmto_m = 0.01;
    constexpr double into_m = 0.0254;
    constexpr double ftin_m = 0.3048;

    double smallest = 0;
    double largest = 0;
    cout<<"\nEnter values for the smallest and largest number in meters: ";
    cin>>smallest>>largest;

    cout<<"\nEnter values followed by a unit: ";

    // There's a bug here, c++ can't compare 2 small numbers.
    while(cin>>num>>unit){
        cout<<"\nEnter the numbers: ";
        /**
         * @brief if statemment who identifys num and
         * converts the unit to meters.
         * // "Accept the four units: cm, m, in, ft"
         */
        if(unit == "cm"){
            // num = num/100;
            num = num*cmto_m;
        } else if(unit == "m"){
            continue;
        } else if(unit == "in"){
            // num = num/39.37;
            num = num*into_m;
        } else if(unit == "ft"){
            // num = num/3.281;
            num = num*ftin_m;
        } else{
            cout<<"\nI dont know this kind of unity!\nError: unknow unity";
            break;
        }

        /**
         * @brief sum the values each time around the loop
         */
        sum_num += num;

        /**
         * @brief adds num to the vector (converted)
         */
        values.push_back(num);

/*

            This was the alg to see the smallest and largest, although comparing two smaller
            numbers in c++ is complicated. So, it is better to use the vector.
        **
         * @brief See the smallest and largest and change them (if is the smallest so far)
         * 
         *
        if(num>largest){
            cout<<"\nThe largest so far!\n";
            largest = num;
        } else if(num<smallest){
            cout<<"\nThe smallest so far!\n";
            smallest = num;
        }// else{
        //     cout<<"\nA normal number...\n";
        // }
*/
    }


    /**
     * @brief this algo see the largest and smallest in vector values
     */
    for(int i=0; i<values.size(); i++){
        if(values[i]>largest){largest=values[i];}
        else if(values[i]<smallest){smallest=values[i];}
    }


    /**
     * @brief Prints info about the input
     * 
     */
    cout<<"\nSmallest: "<<smallest<<"\nLargest: "<<largest
        <<"\nNumber of values: "<<values.size()<<"\nSum of values (in meters): "<<sum_num;

    sort(values);
    cout<<"\nThe all values you digited (in meters): \n";



    for(int i=0; i<values.size();i++)
        cout<<values[i];
    
/*
    for(int x : values)
        cout<<x<<"\t";
*/   


    return 0;
}