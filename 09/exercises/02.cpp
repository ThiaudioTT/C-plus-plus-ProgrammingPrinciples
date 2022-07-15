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

*/

#include <iostream>
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
    names.read_names();
    names.read_ages();
}

void Name_pairs::read_names() {
    std::string s;
    while(std::cin >> s) // ctrl + d to stop
        name.push_back(s);
}

void Name_pairs::read_ages() {
    double n;
    while(std::cin >> n)
        age.push_back(n);
}