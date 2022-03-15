/**
 * @file 13.cpp
 * @author Thiago Araújo (ThiaudioTT)
 * @brief exe 13
 * @version 1
 * @date 2022-03-15 (YYYY-MM-DD)
 * 
 * @copyright Copyright (c) 2022
 * 
 */

/*
Create a program to find all the prime numbers between 1 and 100. There 
is a classic method for doing this, called the “Sieve of Eratosthenes.” If 
you don’t know that method, get on the web and look it up. Write your 
program using this method.*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{  
    constexpr int range = 100;
    vector<int> primes;
    vector<bool> is_prime(range, true); // the index of the elements will be the numbers
    is_prime[0] = is_prime[1] = false; // se the numbers 0 and 1 false, they are not prime


    for(int i = 2; i<=range; i++)
    {
        if(is_prime[i]) // if true
        {
            for(int j = 2; i*j<=range; j++)
            {
                is_prime[i*j] = false;
            }
            primes.push_back(i); // adds to primes.
        }
    }
    
    cout<<"Primes: \n";
    for(int x : primes)
    {
        cout<<x<<"\t";
    }
    return 0;
}
