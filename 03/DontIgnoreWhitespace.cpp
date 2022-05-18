#include "../std_lib_facilities.h"
// As you have seen in InputWhitespace.h, >> ignores whitespace.
// But how to read more than a word? C++ have many ways to do this...
// One:
int main(){
    cout<<"Please enter your first and second name and your age\n";
    string first_name = "???"; // not string first_name; means "don't know the name
    string second_name = "???";
    int age = 0; // not int age; means: don't know the age
    cin>>first_name>>second_name>>age;
    cout<<"Hello, "<<first_name<<" "<<second_name<<" (age "<<age<<")\n";
    return 0;
}
// Other way:
// https://stackoverflow.com/questions/4825483/code-for-getting-multiple-words-in-a-string-from-user
