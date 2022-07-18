/*
Design and implement a Name_pairs class holding (name,age) pairs where
name is a string and age is a double . Represent that as a vector<string>
(called name ) and a vector<double> (called age ) member. Provide an in-
put operation read_names() that reads a series of names. Provide a read_
ages() operation that prompts the user for an age for each name. Provide
a print() operation that prints out the ( name[i] , age[i] ) pairs (one per line)
in the order determined by the name vector. Provide a sort() operation
that sorts the name vector in alphabetical order and reorganizes the age
vector to match. Implement all “operations” as member functions. Test
the class (of course: test early and often).

Todo:
Namepairs classe holding name and age as vectors.

Input operations who will add names read_names

read_ages() will do the same as above

output print  will print the name and age X

sort() will sort the age and name vector

Note: the program wont check if already exists one name in it. This is one problem.
*/

#include <iostream>
#include <algorithm>
#include <vector>

class Name_pairs
{
private:
    std::vector<std::string> name;
    std::vector<double> age;

public:
    // input
    void read_names();
    void read_ages();

    // output
    void print(int i) {std::cout << name[i] << "\n" << age[i] << std::endl;};

    //modify
    void sort();
};


int main()
{
    Name_pairs names;
    std::cout << "Enter all names: ";
    names.read_names();

    std::cout << "\nNow, enter all ages for that names in order: ";
    names.read_ages();

    std::cout << "\nPrinting 1" << std::endl;
    names.print(1);

    std::cout<< "\nSorting...";
    names.sort();

    std::cout << "\nPrinting again: " << std::endl;
    names.print(1);
}

void Name_pairs::read_names() {
    std::string s;
    while(std::cin >> s)
    {
        if(s == "stop")
            return;
        name.push_back(s);
    }
}

void Name_pairs::read_ages() {
    double n;
    for(int i = 0; i < name.size(); i++)
    {
        std::cin >> n;
        age.push_back(n);
    }
}

void Name_pairs::sort() {
    std::vector<std::string> Sname = name;
    std::sort(Sname.begin(), Sname.end());

    std::vector<double> Sage = age;

    for(int i = 0; i < Sname.size(); i++)
    {
        for(int j = 0; j < name.size(); j++)
        {
            if(Sname[i] == name[j])
            {
                Sage[i] = age[j];
            }
        }
    }

    name = Sname;
    age = Sage;
}