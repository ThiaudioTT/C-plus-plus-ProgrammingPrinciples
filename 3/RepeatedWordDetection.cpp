#include "../std_lib_facilities.h"

int main(){
    string previous=" ";
    string current;
    int number_of_words = 0;

    while(cin>>current){
        /* no caso, "what he not what" n�o ir� contar como repetido nesse algoritmo.
        Ent�o, apenas palavras repetidas pr�ximas entre si que ir�o constar como: "what did did what" did ir� contar como repetida.*/
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
