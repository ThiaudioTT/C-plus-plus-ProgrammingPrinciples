#include <iostream>
using namespace std;

class cars
{
public: // public access!
    string Manufacturer;
    string Model;
    int Year;

    void printCar() // class methods (functions who is inside of a class)
    {
        cout << "Manufacturer: " << Manufacturer << endl
             << "Model: " << Model << endl
             << "Year: " << Year << endl;
    }

    cars(string manufacturer, string model, int year) // constructor (Note that parameters vars are different from atribute)
    {
        Manufacturer = manufacturer;
        Model = model;
        Year = year;
        /*Pre-defined attributes goes here
         */
    }

}; // semicolon!

int main()
{ /*
     cars car1; //innitialized object

     car1.manufacturer = "VW";
     car1.year = 2003;
     car1.model = "Polo";
     car1.printCar();

     // Note that we need too write code too many only to initialize the atributes ^
     // The constructor, constructs the object:
 */
    cars car2("Fiat", "Palio", 2000);
    car2.printCar();
    return 0;
}