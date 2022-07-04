/*
Write a function that finds the smallest and the largest element of a vector
argument and also computes the mean and the median. Do not use global
variables. Either return a struct containing the results or pass them back
through reference arguments. Which of the two ways of returning several
result values do you prefer and why?
R: I prefer the structs, it is better*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct answers
{
    double Smallest;
    double Largest;
    double Mean;
    double Median;

    answers(double smallest, double largest, double mean, double median)
    {
        Smallest = smallest;
        Largest = largest;
        Mean = mean;
        Median = median;
    }
};

answers info(vector<double> arr)
{

    // find largest and smallest and sort arr
    double smallest, largest;
    sort(arr.begin(), arr.end());
    smallest = arr[0];
    largest = arr[arr.size() - 1];

    // mean
    double sum = 0;
    for (int i = 0; i < arr.size(); i++)
        sum += arr[i];

    double mean = sum / arr.size();

    // meadian
    double median = -1;
    if (arr.size() % 2 == 0)
    {
        int index = arr.size() / 2; // index of middle
        double j = arr[index];
        double i = arr[index - 1];
        median = (j + i) / 2;
    }
    else
    {
        int i = arr.size() / 2;
        median = arr[arr.size() / 2];
    }

    return answers(smallest, largest, mean, median);
}

int main()
{
    vector<double> arr = {4, 5, 6, 22, 44, 1};

    answers t = info(arr);

    cout << "Smallest = " << t.Smallest << endl
         << "Largest = " << t.Largest << endl
         << "Mean = " << t.Mean << endl
         << "Median = " << t.Median << endl;

    return 0;
}