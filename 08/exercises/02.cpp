#include <iostream>
#include <vector>
using namespace std;

void print(const string &s, const vector<int> &n)
{
    cout << s << ':' << endl;
    for (int x : n)
    {
        cout << x << " ";
    }
}

int main()
{
    vector<int> numbers = {1, 2, 3, 4};

    print("Hai", numbers);
    return 0;
}