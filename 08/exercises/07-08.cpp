/*
07 Read five names into a vector<string> name, then prompt the user for 
the ages of the people named and store the ages in a vector<double> age. 
Then print out the five (name[i],age[i]) pairs. Sort the names (sort(name
.begin(),name.end())) and print out the (name[i],age[i]) pairs. The tricky 
part here is to get the age vector in the correct order to match the sorted 
name vector. Hint: Before sorting name, take a copy and use that to 
make a copy of age in the right order after sorting name. 

08. Then, do that exercise again but allowing an arbitrary number of names.
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<string> name;
    vector<int> age;
    
    cout << "\nHow many people will you catalog? ";
    int n;
    cin >> n;
    cout << "\nWrite " << n << " names: ";
    while (n--)
    {
        string nameInput;
        cin >> nameInput;
        name.push_back(nameInput);
    }
    n = name.size();
    cout << endl << "Write " << name.size() << " ages for that names: ";
    while (n--)
    {
        int ageInput;
        cin >> ageInput;
        age.push_back(ageInput);
    }

    vector<string> sortedName = name;
    sort(sortedName.begin(), sortedName.end());
    vector<int> sortedAge(age.size());

    for (int i = 0; i < name.size(); i++)
        for (int j = 0; j < name.size(); j++)
            if (sortedName[i] == name[j])
                sortedAge[i] = age[j];

    for (int i = 0; i < sortedName.size(); i++)
        cout << "Name: " << sortedName[i] << " | Age: " << sortedAge[i] << endl;

    return 0;
}