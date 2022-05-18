/**
 * @file TryThisBleep.cpp
 * @author Thiago Araújo (ThiaudioTT)
 * @brief TryThis
 * @version 1.0.1
 * @date 2022-02-06 (YYYY-MM-DD)
 * 
 * @copyright Copyright (c) 2022
 * 
 */

/* 
Write a program that “bleeps” out words that you don’t like; that is, you 
read in words using cin and print them again on cout. If a word is among a 
few you have defined, you write out BLEEP instead of that word. Start with 
one “disliked word” such as 
string disliked = “Broccoli”;
When that works, add a few more.
*/

// Note: Se voce ver as palavras repetidas ANTES, sera melhor.

#include "../../std_lib_facilities.h"

int main(){
    vector<string> disliked = {"Whatsapp", "Refrigerante", "Broccoli"};
    vector<string> words;

    // algorithm
    cout<<"Insert the words:\n";
    
    // input
    // note: Ctrl+z closes the program in my compiler. I need to add a break.
    for(string temp; cin>>temp;){
        if(temp=="exit"){cout<<"\nThe words: \n"; break;}
        words.push_back(temp);
    }


    // compare and change
    for(int i=0; i<disliked.size(); i++){
        for(int j=0; j<words.size(); j++)
            if(disliked[i]==words[j])
                words[j]="BLEEP";
    
    }

    // print (without repitition)
    for (int i = 0; i<words.size(); ++i) 
        if (i==0 || words[i-1]!=words[i])
            cout << words[i] << "\n";

/*
    for(string x : words)
        cout<<x<<"\n";
*/
    return 0;
}