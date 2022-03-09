/**
 * @file 10.cpp
 * @author Thiago Araújo (ThiaudioTT)
 * @brief exercise 10
 * @version 1
 * @date 2022-03-06 (YYYY-MM-DD)
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "../../std_lib_facilities.h"
/*
Write a program that plays the game “Rock, Paper, Scissors.” If you are not 
familiar with the game do some research (e.g., on the web using Google). 
Research is a common task for programmers. Use a switch-statement to 
solve this exercise. Also, the machine should give random answers (i.e., 
select the next rock, paper, or scissors randomly). Real randomness is too 
hard to provide just now, so just build a vector with a sequence of values 
to be used as “the next value.” If you build the vector into the program, 
it will always play the same game, so maybe you should let the user enter 
some values. Try variations to make it less easy for the user to guess 
which move the machine will make next.
*/

/*
This can be super optimized, but I won't do for now. 
*/


/**
 * @brief Return the string of the choice Rock Paper Scissors
 * 
 * @param a 
 * @return string 
 */
string StrChoice(int a){
    if(a == 1){
        return "Rock";
    } else if(a == 2){
        return "Paper";
    } else if(a == 3){
        return "Scissors";
    } else{
        return "ERROR-1";
    }
}

int main(){
    // 1 == Rock; 2 == paper; 3 == Scissors
    vector<int> values = {1, 2, 3}; // The "random" of computer
    int user = 0, computer = 0, // Choices
        comp = 0; // Ratio

    while(true){
        cout<<"\n\nChoose: 1 == Rock;\t2 == paper;\t3 == Scissors\n";
        cin>>user;

        if(user>3 || user<1){ // verify bad input
            cout<<"\nEnter a valid input!";
        } else {
            computer = values[comp]; // atribute the choice of the computer
            cout<<"\nYour play: "<<StrChoice(user)<<"\nComputer: "<<StrChoice(computer);

            // the mechanic
            if(user == computer){
                cout<<"\nBoth players have the same choice! A tie!";
            } else if(user == 1){ // user is rock
                if(computer == 2){
                    cout<<"\nComputer win!";
                } else {
                    cout<<"\nPlayer win!";
                }
            } else if(user == 2){ // user is paper
                if(computer == 3){
                    cout<<"\nComputer win!";
                } else {
                    cout<<"\nPlayer win!";
                }
            } else if(user == 3){ // user is scissors
                if(computer == 1){
                    cout<<"\nComputer win!";
                } else {
                    cout<<"\nPlayer win!";
                }
            }
            // this give a sensation of randoness
            comp+=1;
            values.push_back(user); // adds the choice of the user for the computer use later
        }

    }

    return 0;
}
