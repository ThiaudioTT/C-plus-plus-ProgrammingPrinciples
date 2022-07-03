/*
Create a vector of Fibonacci numbers and print them using the function
from exercise 2. To create the vector, write a function, fibonacci(x,y,v,n),
where integers x and y are ints, v is an empty vector<int>, and n is the
number of elements to put into v; v[0] will be x and v[1] will be y.
A Fibonnacci number is one that is part of a sequence where each element is the
sum of the two previous ones. For example, starting with 1 and 2, we get
1, 2, 3, 5, 8, 13, 21, . . . . Your fibonacci() function should make such a
sequence starting with its x and y arguments.
*/

#include <iostream>
#include <vector>
using namespace std;

void print(const string &s, const vector<int> &n);
vector<int> fibonacci(int a, int b, vector<int> arr, int n);

int main()
{
    vector<int> arr;
    arr = fibonacci(0, 1, arr, 10);

    print("Array", arr);
    return 0;
}

vector<int> fibonacci(int a, int b, vector<int> arr, int n)
{
    arr.push_back(a);
    arr.push_back(b);
    for (int i = 1; i < n; i++)
    {
        int sum = arr[i - 1] + arr[i];
        arr.push_back(sum);
    }
    return arr;
}

void print(const string &s, const vector<int> &n)
{
    cout << s << ':' << endl;
    for (int x : n)
    {
        cout << x << " ";
    }
}