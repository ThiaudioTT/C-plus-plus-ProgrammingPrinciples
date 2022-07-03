/*
Write versions of the functions from exercise 5, but with a vector<string>.
R: I just need to modify the type...
*/

#include <iostream>
#include <vector>
using namespace std;

vector<string> reverseArray(vector<string> n)
{
    int r = n.size() - 1;
    for(int l = 0; l < r; l++)
    {
        swap(n[l], n[r]);
        r--;
    }
    return n;
}

int main()
{
    vector<string> a = {"1,2,3,4,6,11"}; // {"1,2,3,4,6,11", "a23s"}; works too
    vector<string> b = a;
    b = reverseArray(a);
    for(string x : b)
        cout << x << " ";
    
    
    return 0;
}