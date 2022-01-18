#include "../std_lib_facilities.h"

int main(){
    string previous=" ";
    string current;
    int number_of_words = 0;

    while(cin>>current){
        /* no caso, "what he not what" não irá contar como repetido nesse algoritmo.
        Então, apenas palavras repetidas próximas entre si que irão constar como: "what did did what" did irá contar como repetida.*/
        ++number_of_words;
        if(previous==current)
            cout<<"word number: "<<number_of_words
                <<" repeated: "<<current<<"\n";
        // cout<<"\nCurrent: "<<current;
        previous=current;
        // cout<<"\ndepois Current: "<<current<<"\n";
    }
    return 0;
}
