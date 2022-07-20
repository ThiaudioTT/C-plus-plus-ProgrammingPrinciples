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
    int getSize() {return name.size();}
    std::string getName(int& i){return name[i];}
    int getAge(int& i){return age[i];}

    //modify
    void sort();
};

// << overload
std::ostream& operator <<(std::ostream& os, Name_pairs& n)
{
    for(int i = 0; i < n.getSize(); i++)
    {
        os << "Name: " << n.getName(i) << ", Age: " << n.getAge(i) << std::endl;
    }
    return os;
}

int main()
{
    Name_pairs names;
    std::cout << "Enter all names: ";
    names.read_names();

    std::cout << "\nNow, enter all ages for that names in order: ";
    names.read_ages();

    std::cout << "\nPrinting: " << std::endl;
    std::cout << names;

    std::cout<< "\nSorting...";
    names.sort();

    std::cout << "\nPrinting again: " << std::endl;
    std::cout << names;
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