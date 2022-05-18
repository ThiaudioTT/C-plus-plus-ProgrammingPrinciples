/*
I tried to fix the logic error in logicerror.cpp
*/

#include "../../std_lib_facilities.h"
int main()
{
    vector<double> temps; // temperatures
    for (double temp; cin>>temp; ) // read and put into temps
    temps.push_back(temp);
    if(temps.size() == 1) {cout<<"\nERROR: I need more inputs!"; return 45;} // exit();

    sort(temps);
    double sum = 0;
    double high_temp = temps[temps.size() - 1];
    double low_temp = temps[0];

    /*Possible solution:
    double high_temp = temps[0];
    double low_temp = temps[0];
    */

    /* I wont need this
    for (double x : temps)
    {
        if(x > high_temp) high_temp = x; // find high
        if(x < low_temp) low_temp = x; // find low
        sum += x; // compute sum
    }
    */

    for(int x : temps)
        sum+=x;
        
    cout << "High temperature: " << high_temp<< '\n';
    cout << "Low temperature: " << low_temp << '\n';
    cout << "Average temperature: " << sum/temps.size() << '\n';
}
