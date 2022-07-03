/*
Write two functions that reverse the order of elements in a vector<int>. 
For example, 1, 3, 5, 7, 9 becomes 9, 7, 5, 3, 1. The first reverse function 
should produce a new vector with the reversed sequence, leaving its original vector unchanged. The other reverse function should reverse the 
elements of its vector without using any other vectors (hint: swap)
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> reverseArray(vector<int> n);

int main()
{
    vector<int> a = {1,2,3,4,6,11};
    vector<int> b = a;
    b = reverseArray(a);
    for(int x : b)
        cout << x << " ";
    
    
    return 0;
}

vector<int> reverseArray(vector<int> n)
{
    int r = n.size() - 1;
    for(int l = 0; l < r; l++)
    {
        swap(n[l], n[r]);
        r--;
    }
    return n;
}