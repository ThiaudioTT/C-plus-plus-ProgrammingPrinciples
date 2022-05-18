/**
 * @file 14.cpp
 * @author Thiago Araújo (ThiaudioTT)
 * @brief exercise 14
 * @version 1
 * @date 2022-03-14 (YYYY-MM-DD)
 * 
 * @copyright Copyright (c) 2022
 * 
 */

/*
 Modify the program described in the previous exercise to take an input 
value max and then find all prime numbers from 1 to max. 
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{  
    int range = 0;
    cout<<"Enter a range: ";
    while(true)
        {
            cin>>range;
            if(range <= 1) // verify bad input
            {
                cout<<"\nEnter a valid option!";
                break;
            }
            

            // set values
            vector<int> primes = {};
            vector<bool> is_prime(range, true); // the index of the elements will be the numbers
            is_prime[0] = is_prime[1] = false; // se the numbers 0 and 1 false, they are not prime


            // to search for primes
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
            

            // print
            cout<<"Primes: \n";
            for(int x : primes)
            {
                cout<<x<<"\t";
            }

            cout<<"\nAgain: ";
        }
    return 0;
}
