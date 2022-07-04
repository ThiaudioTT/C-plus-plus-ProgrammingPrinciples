/*
Write a function maxv() that returns the largest element of a vector
argument.

Note: I will consider int.
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxv(vector<int> arr)
{
    sort(arr.begin(), arr.end());
    return arr[arr.size() - 1];
}

int main()
{
    vector<int> n = {7, 3, 4, 5, 222};
    cout << maxv(n) << endl;
    return 0;
}