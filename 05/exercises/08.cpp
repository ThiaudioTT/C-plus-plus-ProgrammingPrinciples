#include <stdlib.h>
#include <vector>
#include <iostream>
using namespace std;

class outOfRange{}; // to report out range errors

int main()
{
    int sumUntil = 0, input = 0, sum = 0;
    vector<int> numbers;

    cout << "Please enter the number of values you want to sum: ";
    cin >> sumUntil;

    cout << "Please enter some integers (press '|' to stop): " << endl;
    while (cin >> input)
        numbers.push_back(input);

    if(numbers.size()<sumUntil)
        throw outOfRange{};

    for (int i = 0; i < sumUntil; i++)
        sum += numbers[i];

    cout << "The sum of the first " << sumUntil << " numbers is " << sum << endl;
    return 0;
}