/**
 * @file 11.cpp
 * @author Thiago Araújo (ThiaudioTT)
 * @brief exercise 11
 * @version 1
 * @date 2022-03-09 (YYYY-MM-DD)
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "../../std_lib_facilities.h"
/*
Create a program to find all the prime numbers between 1 and 100. One 
way to do this is to write a function that will check if a number is prime 
(i.e., see if the number can be divided by a prime number smaller than 
itself) using a vector of primes in order (so that if the vector is called 
primes, primes[0]==2, primes[1]==3, primes[2]==5, etc.). Then write a 
loop that goes from 1 to 100, checks each number to see if it is a prime, 
and stores each prime found in a vector. Write another loop that lists the 
primes you found. You might check your result by comparing your vector
of prime numbers with primes. Consider 2 the first prime */

/*
Resume
Create a program to find all the prime numbers between 1 and 100*/

// This was hardy!
int main()
{
    vector<int> primes = {2};
    int until_where = 0;
    cout<<"\nUntil what number? ";
    cin>>until_where;

    for(int i = 2; i<=until_where; i++) // i is the possible prime number
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

    cout<<"\nYour primes: \n";
    for(int x : primes)
    {
        cout<<x<<"\t";
    }
    cout<<"\nTotal: "<<primes.size();
    return 0;
}
