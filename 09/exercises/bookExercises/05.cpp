#include <string>
//doing....
        

// MY ISBN: x-x-x...-x-n  --> x is an integer and n is a letter.
// ex isbns: 4579A, 12B, 587129871265477C
bool validISBN(const std::string& s)
{
    for(int i = 0; i < s.size() - 1; i++) // n-n-n-x
    {
        if(!isdigit(s[i]))
            return false;
    }

    const int lastN = s.size() - 1;
    if(!isdigit(s[lastN]) || !isalpha(s[lastN])) // if isnt alpha or digit
        return false;

    return true;
}

class book {
private:
    std::string isbn, title, author, date;

public:


};