/*
Write a function that given two vector<double>s price and weight computes a value (an “index”)
that is the sum of all price[i]*weight[i]. Make
sure to have weight.size()==price.size().
*/

#include <iostream>
#include <vector>
using namespace std;

double sum(const vector<double> &price, const vector<double> &weight)
{
    if (price.size() != weight.size())
        throw int{};

    double sum = 0;
    for (int i = 0; i < price.size(); i++)
        sum = sum + (price[i] * weight[i]);

    return sum;
}

int main()
{
    vector<double> price = {3, 4, 5};
    vector<double> weight = {4, 6, 7};

    cout << sum(price, weight);
    return 0;
}