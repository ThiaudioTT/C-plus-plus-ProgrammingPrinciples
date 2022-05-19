#include <stdlib.h>
#include <iostream>
#include <vector>
#include <math.h> // I will use sqrt()!
using namespace std;

class invalidRoot
{
}; // class to report errors in negative roots

class invalidA
{
};

vector<double> quadraticEq(double a, double b, double c)
{
    vector<double> roots;
    if (a == 0)
        throw invalidA{}; // a != 0

    double x1, x2,
        delta = b * b - 4 * a * c;
    if (delta < 0)
        throw invalidRoot{}; // pre-condition to delta

    x1 = (-b + sqrt(delta)) / (2.0 * a); // without () on(2.0 * a) results in a bug

    x2 = (-b - sqrt(delta)) / (2.0 * a);

    roots.push_back(x1);
    roots.push_back(x2);
    return roots;
}

int main()
{
    try
    {

        // input
        double a, b, c;
        cout << "a: ";
        cin >> a;
        cout << "b: ";
        cin >> b;
        cout << "c: ";
        cin >> c;

        cout << "\nResult:";
        vector<double> roots = quadraticEq(a, b, c);
        cout << "[" << roots[0] << ", " << roots[1] << "]";

        // cout<<"b*b -4*a*c; : "<<b*b -4*a*c;
    }
    catch (invalidRoot)
    {
        cerr << "ERROR: Invalid root.\nYour equation gives a negative discriminant";
    }
    catch (invalidA)
    {
        cerr << "ERROR: 'a' must be greater than 0";
    }
    return 0;
}