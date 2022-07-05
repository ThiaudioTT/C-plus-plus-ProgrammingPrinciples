#include <iostream>
#include <vector>
using namespace std;

void print_until_s(vector<string> v, string quit)
{
    for (string s : v)
    {
        if (s == quit)
            return;
        cout << s << '\n';
    }
}

int main()
{
    vector<string> s = {"addfsdff", "22"};

    print_until_s(s, "22");
    return 0;
}