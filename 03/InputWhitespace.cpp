#include "../std_lib_facilities.h"
// see pag 97 Input and type
// If you enter "Carlos 22" on the first line of console, none of error will happen. Because:
// WhiteSpace is ignored by >> (Type enter in a cin)
int main(){
    cout<<"Please enter your first name and age\n";
    string first_name;
    int age;
    cin>>first_name;
    cin>>age;
    cout<<"Hello, "<<first_name<<" (age "<<age<<")\n";
    return 0;
}
