#include <stdlib.h>
#include <iostream>
#include <vector>
#include "../../std_lib_facilities.h"
using namespace std;

class badInput
// input must be 4 different integers and its size equal to 4
{
}; // class to report badinput errors.

int main()
{
    cout << "Welcome to Bulls and Cows\n";
    int bull, cow, n, seed;
    vector<int> numbers = {}, input;
    while (true)
    {
        // reset for new game
        bull = 0;
        numbers = {};

        cout << "Now, enter a seed (integer number) for a new game: ";
        cin >> seed;
        seed_randint(seed);

        // put the random numbers in vector numbers
        for (int i = 0; i < 4; i++) // Is used 4 rather than numbers.size()
        {
            numbers.push_back(randint(9));
            
            // no repetition is allowed. Obs: the this part of the program wasnt tested
            for (int j = 0; j < numbers.size(); j++)
            {
                if (j == i)
                {
                    break;
                }
                else if (numbers[i] == numbers[j])
                {
                    numbers[i] = randint(9);
                }
            }
        }

        while (bull < 4)
        {
            cout << "----------------\n"
                 << "Enter 4 numbers, separated by a space.\n";
            // reset vars for the next loop
            bull = 0;
            cow = 0;
            input = {};

            try
            {

                // read the input
                for (int i = 0; i < numbers.size(); i++)
                { // input 1 3 4 6
                    cin >> n;
                    if (n > 9 || n < 0) // check bad input
                    {
                        throw badInput{};
                    }

                    input.push_back(n);
                }

                // (optional) checks if the all numbers in input is different
                for (int i = 0; i < input.size(); i++)
                {
                    for (int j = 0; j < input.size(); j++)
                    {
                        if (i == j)
                        {
                            break;
                        }
                        else if (input[i] == input[j])
                            throw badInput{};
                    }
                }

                // verify
                for (int i = 0; i < numbers.size(); i++)
                {
                    for (int j = 0; j < numbers.size(); j++)
                    {
                        if (input[i] == numbers[j])
                        {
                            if (i == j) // podem ter a mesma posicao, mas serem elementos diferentes.
                            {
                                bull++;
                            }
                            else
                            {
                                cow++;
                            }
                        }
                    }
                }

                cout << "\n"
                     << bull << " bull and " << cow << " cow." << endl;
            }
            catch (badInput)
            {
                cerr << "\nERROR: inputs must be 4 differents integers and in the range 0 to 9" << endl;
            }
            catch (...)
            {
                cerr << "\nERROR: Unknow;" << endl;
            }
        }
    }

    return 0;
}