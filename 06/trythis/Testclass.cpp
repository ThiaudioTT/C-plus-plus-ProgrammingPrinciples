/*
This is what we call object-oriented? ;)
*/

#include <iostream>

using namespace std;

class cars {
public:
    string brand;
    string model;
    int year = 2022;
};

int main() {
    cars bmw; // create an object
    bmw.brand = "BMW";
    cout << bmw.year;
    return 0;
}