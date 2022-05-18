/**
 * @file 15.cpp
 * @author Thiago Araújo (ThiaudioTT)
 * @brief exercise 15
 * @version 1
 * @date 2022-03-14 (YYYY-MM-DD)
 * 
 * @copyright Copyright (c) 2022
 * 
 * @enum 
Write a program that takes an input value n and then finds the first n
primes.
 */


#include <iostream>
#include <vector>
using namespace std;


int main()
{
    vector<int> primes = {2};
    int range = 0;
    while(true)
    {
        cout<<"\nHow many primes? ";
        cin>>range;
        if(range<1) // verify bad input
        {
            cout<<"\nEnter a valid option.";
            break;
        }

        // search for primes
        for(int i = 2; primes.size()<range; i++) // i is the possible prime number
        {
            for(int j = 2; j<i; j++)
            {
                if(i % j == 0) // the core of the algo, will check if "i" is a divisor.
                {
                    break;
                } else if(i - 1 == j) // check if is on the final number.
                    {
                        primes.push_back(i);
                    }
        
                
            }
        }

        // print
        cout<<"\nYour primes: \n";
        for(int i = 0; i<range; i++)
        {
            cout<<primes[i]<<"\t";
        }
        cout<<"\nTotal calculated: "<<primes.size()<<"\n";
    }

    return 0;
}
