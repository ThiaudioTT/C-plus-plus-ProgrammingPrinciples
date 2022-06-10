#include <iostream>
#include <vector>
using namespace std;

// the program will calculate until one million...
int main()
{
    vector<string> unit = {
        " ones ", " tens ", " hundreds ", " thousands ",
        " tens of thousands ", " hundreds of thousands ", " millions ",
        " tens of millions ", " hundreds of millions "};

    string input;
    cin >> input;

    for (int i = 0; i < input.size(); i++) // verify bad input
    {
        if (input[i] < 48 || input[i] > 57)
        {
            throw int{};
        }
    }

    if (input.size() > unit.size())
    {
        cerr << "\nNumber greater than " << unit[unit.size() - 1] << endl;
        throw int{};
    }

    for (int i = 0; i < input.size(); i++)
    {
        int position = (input.size() - 1) - i;

        cout << input[i] << unit[position] << " | ";
    }
}