#include <iostream>
using namespace std;

class cars
{
private: // no more public access!
    string Manufacturer;
    string Model;
    int Year;
    // we can't access vars directly, only via methods.

public:
    cars(string manufacturer, string model, int year) // constructor (Note that parameters vars are different from atribute)
    {
        Manufacturer = manufacturer;
        Model = model;
        Year = year;
        /*Pre-defined attributes goes here
         */
    }

    void printCar() // class methods (functions who is inside of a class)
    {
        cout << "Manufacturer: " << Manufacturer << endl
             << "Model: " << Model << endl
             << "Year: " << Year << endl;
    }

    void changeModel(string model){ // methods that change atributes.
        Model = model;
    }
    
}; // semicolon!

int main()
{
    cars car1("VW", "Polo", 2003);
    // car1.Model = "Carrera"; // error Model is inaccessible
    car1.changeModel("Gol");
    car1.printCar();
}