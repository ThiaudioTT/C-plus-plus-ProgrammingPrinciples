/**
 * @file 8.cpp
 * @author Thiago Araújo (ThiaudioTT)
 * @brief exercise 8
 * @version 1
 * @date 2022-03-03 (YYYY-MM-DD)
 * 
 * @copyright Copyright (c) 2022
 * 
 */

/*
There is an old story that the emperor wanted to thank the inventor of 
the game of chess and asked the inventor to name his reward. The inventor 
asked for one grain of rice for the first square, 2 for the second, 4 for 
the third, and so on, doubling for each of the 64 squares. That may sound 
modest, but there wasn’t that much rice in the empire! Write a program to 
calculate how many squares are required to give the inventor at least 1000 
grains of rice, at least 1,000,000 grains, and at least 1,000,000,000 grains. . [...]
*/

#include "../../std_lib_facilities.h"

/**
 * @brief returns the index of the number you want to search in a array.
 * (greater or equal)
 * @param array where the values are
 * @param val the number where you want to search the index of.
 * @return int index of the array where val is (greater or equal)
 */
int ReturnIndexSquare(vector<int> array, int val){
    int index = -5;
    for(int i = 0; i<array.size(); i++){
        if(array[i] >= val){
            index = i;
            break;
        }
    }
    return index;
}

int main(){
    int ratio = 2, rice = 1;
    int constexpr thousand = 1000, million = 1000000, billion = 1000000000;
    int sthousand = 0, smillion = 0, sbillion = 0; // square thousand, square million, square ""

    vector<int> squares; // where the rices will be.

    for(int square = 1; square<=64; square++){ // prints and adds the rice on squares
        cout<<"\nSquare: "<<square<<"\tRice: "<<rice<<"g";
        squares.push_back(rice); // adds the values rice into squares.

        if(rice>=billion){ // verify the limit of int and break the loop
            cout<<"\n\nBREAK ON SQUARE: "<<square;
            break;
        }

        rice*=ratio; // adds rice for next loop
    }

    // add the square index of the array to print later
    sthousand = ReturnIndexSquare(squares, thousand) + 1;
    smillion = ReturnIndexSquare(squares, million) + 1;
    sbillion = ReturnIndexSquare(squares, billion) + 1;

    // prints
    cout<<"\nOn square "<<sthousand<<" -> rice is equal or greather than a thousand"
        <<"\nOn square "<<smillion<<" -> rice is equal or greather than a million"
        <<"\nOn square "<<sbillion<<" -> rice is equal or greather than a billion";

    return 0;
}
