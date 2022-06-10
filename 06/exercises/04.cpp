/**
 * @file 04.cpp
 * @author Thiago A. (`)
 * @brief
 * @version 0.1
 * @date 2022-06-09
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <vector>
#include <iostream>
using namespace std;

class Name_value
{
private:
    string Name;
    int Value;

public:

    void getinfo()
    {
        cout << Name << " " << Value;
    }


    // void getNameValue() // read input

    Name_value() // constructor will read input
    {
        string name;
        int value;

        cin>>name>>value;
        Name = name;
        Value = value;
        // Name_value(name, value);
    }

    string name(){return Name;}
    int value(){return Value;}
};

int main()
{
    vector<Name_value> names;

    //creating vars
    int score = -1;
    bool repeated = false, found = false;

    // add to names and scores.
    cout<<"Enter 'noname 0' for break";
    while (true)
    {
        repeated = false;
        cout << "\nEnter a name and a score: ";
        Name_value name;


        // verify if the name is already in vector
        for (int i = 0; i < names.size(); i++)
        {
            if (name.name() == names[i].name())
                repeated = true;
        }

        //
        if (repeated == true)
        {
            cout << "\nThe name " << name.name() << " is already in our database.";
        }
        else if (name.name() == "noname" && name.value() == 0) // ends input
        {
            cout << "\nInput terminated.";
            break;
        }
        else
        {
            names.push_back(name);
        }
    }

    cout << "\nYour vector: \n";
    for (int i = 0; i < names.size(); i++)
        cout << "Name = " << names[i].name() << " | Score = " << names[i].value() << "\n";
    return 0;
}