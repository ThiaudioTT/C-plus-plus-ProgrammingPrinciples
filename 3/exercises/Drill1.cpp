#include "..\..\std_lib_facilities.h"

int main(){
    //vars
    string first_name, friend_name;
    char friend_sex = 'x';
    int age = 0;
    cout<<"Enter the name of the person you want to write to (followed by 'enter'):\n";
    cin >> first_name;
    cout<<"Dear " << first_name << ", How are you? I miss you. Are you Okay?\nWhat is your friend's name? ";
    cin>>friend_name;
    cout<<"\nHave you seen "<<friend_name<<" lately?";
    cout<<"\nWhat's your friend's sex? (m to male and f to female): ";
    cin>>friend_sex;
    if(friend_sex=='m'){
        cout<<"\nIf you see "<<friend_name<<" please ask him to call me.";
    } else if(friend_sex=='f'){
        cout<<"\nIf you see "<<friend_name<<" please ask her to call me.";
    }
    cout<<"\nNow, enter your age: ";
    cin>>age;
    if(age<=0 || age>=110){
        simple_error("You're kidding!");
     } else {
        cout<<"\nI hear you just had a birthday and you are "<<age<<" years old.\n";
        if(age<12){
            cout<<"Next year you will be "<<age+1<<".";
        } else if(age==17){
            cout<<"Next year you will be able to vote.";
        } else if(age>70){
            cout<<"I hope you are enjoying retirement.";
        }
     }
     cout<<"\nYours sincerely,\n\nThiago.";


}
