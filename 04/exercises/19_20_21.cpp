/**
 * @file 19&20&21.cpp
 * @author Thiago Araújo (ThiaudioTT)
 * @brief exe 19, 20 and 21
 * @version 1
 * @date 2022-03-19 (YYYY-MM-DD)
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/*Write a program where you first enter a set of name-and-value pairs, such 
as Joe 17 and Barbara 22. For each pair, add the name to a vector called 
names and the number to a vector called scores (in corresponding positions, so that if names[7]=="Joe" then scores[7]==17). Terminate input 
with NoName 0. Check that each name is unique and terminate with an 
error message if a name is entered twice. Write out all the (name,score) 
pairs, one per line.
*/
#include <vector>
#include <iostream>
using namespace std;

int main()
{
    vector<string> names;
    vector<int> scores;

    string name = " ";
    int score = -1;
    bool repeated = false, found = false;


    // add to names and scores.
    while(true)
    {
        repeated = false;
        cout<<"\nEnter a name and a score: ";
        cin>>name>>score;
        
        // verify if the name is already in vector
        for(int i = 0; i<names.size(); i++)
        {
            if(name == names[i])
                repeated = true;
        }

        //
        if (repeated == true)
        {
            cout<<"\nThe name "<<name<<" is already in our database.";
        } else if(name == "noname" && score == 0) // ends input 
        {
            cout<<"\nInput terminated.";
            break;
        } else 
        {
            names.push_back(name);
            scores.push_back(score);
        }
    }

    cout<<"\nYour vector: \n";
    for(int i = 0; i<names.size(); i++)
        cout<<"Name = "<<names[i]<<" | Score = "<<scores[i]<<"\n";

   
    // search using name
    cout<<"\nSearch for a score using a name!\nEnter a name: ";
    cin>>name;
    for(int i = 0; i<names.size(); i++)
    {
        if(name == names[i])
        {
            cout<<"\nName found: "<<names[i]<<" | Score = "<<scores[i];
            found = true;
        } 
    }
    if(found == false)
        cout<<"\nName not found.\n";
    

    // search using score
    cout<<"\nNow, search using a score: ";
    cin>>score;

    cout<<"\nYour result: ";
    found = false;
    for(int i = 0; i<names.size(); i++)
    {
        if(score == scores[i])
        {
            cout<<"\nName: "<<names[i]<<" | Score = "<<scores[i];
            found = true;
        }
    }

    if(found == false)
        cout<<"\nScore does not match with no one in our database.";
    return 0;
}