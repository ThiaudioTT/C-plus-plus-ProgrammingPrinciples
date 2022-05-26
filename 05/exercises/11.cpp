/**
 * @file 11.cpp
 * @author Thiago A. (`)
 * @brief
 * @version 0.1
 * @date 2022-05-21
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <stdlib.h>
#include <iostream>
#include <vector>
using namespace std;

vector<int> Fn(int n)
{
    vector<int> numbers = {0, 1};
    int x;
    for (int i = 1; i <= n; i++)
    {
        x = numbers[i] + numbers[i - 1];
        numbers.push_back(x);
    }

    return numbers;
}

int main()
{
    int n = 0;
    cin>>n;
    vector<int> numbers = Fn(n);

    for(int i = 2; i<numbers.size(); i++)
        cout<<numbers[i]<<" ";


    return 0;
}