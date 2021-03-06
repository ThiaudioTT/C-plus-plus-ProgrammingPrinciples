#include <string>
#include <iostream>
using std::string;

// TODO: EXE 9

namespace Library
{

    enum Genre
    {
        fiction,
        nonfiction,
        periodical,
        biography,
        children
    };

    // MY ISBN: x-x-x...-x-n  --> x is an integer and n is a letter.
    // ex isbns: 4579A, 12B, 587129871265477C
    bool validISBN(const std::string &s) // helper function, I think
    {
        for (int i = 0; i < s.size() - 1; i++) // n-n-n-x
        {
            if (!isdigit(s[i]))
                return false;
        }

        const int lastN = s.size() - 1;
        if (!isdigit(s[lastN]) && !isalpha(s[lastN])) // if isnt alpha or digit
            return false;

        return true;
    }

    class Book
    {
    private:
        std::string _isbn, _title, _author;
        int _year;
        Genre _genre;

    public:
        Book(string isbn, string title, string author, int year, Genre genre);

        // output
        string getISBN() { return _isbn; }
        string getTitle() { return _title; }
        string getAuthor() { return _author; }
        int getYear() { return _year; }
        string getGenre();
    };

    Book::Book(string isbn, string title, string author, int year, Genre genre) : _isbn{isbn}, _title{title},
                                                                                  _author{author}, _year{year}, _genre{genre}
    {
        if (!validISBN(isbn))
        {
            std::cerr << "ISBN EXPECTED: " << isbn << std::endl;
            throw int{};
        }
    };

    string Book::getGenre()
    {
        switch (_genre)
        {
        case 0:
            return "fiction";
            break;
        case 1:
            return "nonfiction";
            break;
        case 2:
            return "periodical";
            break;
        case 3:
            return "biography";
            break;
        case 4:
            return "children";
            break;
        default:
            std::cerr << "getGenre expected";
            throw int{};
            break;
        }
    }

    // operators
    bool operator==(Book &a, Book &b)
    {
        // if(Book a == Book b) (we are defining a rule for the operator == for this)

        if (a.getISBN() == b.getISBN())
            return true;
        return false;
    }

    bool operator!=(Book &a, Book &b)
    {
        if (a.getISBN() != b.getISBN())
            return true;

        return false;
    }

    std::ostream &operator<<(std::ostream &os, Book b)
    {
        os << "\nTitle: " << b.getTitle()
           << "\nAuthor: " << b.getAuthor()
           << "\nGenre: " << b.getGenre()
           << "\nYear: " << b.getYear()
           << "\nISBN: " << b.getISBN()
           << std::endl;

        return os;
    }

    // Patron CLASS
    class Patron
    {
    private:
        std::string user;
        int card;
        double fee = 0;

    public:
        Patron(string _user, int _card) : user(_user), card(_card){};

        // returns functions
        int getCard() {return card;}
        double getFee() {return fee;}
        string getUser() {return user;}

        // modify functions
        int setFee(double p) {fee = p; return p;};
    };

    // helpers of class
    double calculateFee(int d) // d = days
    {
        return d * 0.5; // 0.5 per day
    }

    bool owesAFee(Patron user)
    {
        if(user.getFee() > 0)
            return true;
        
        return false;
    }


};


using namespace Library;
int main()
{
    /*
    Book animalFarm("23A", "Animal Farm", "George Orwell", 1970, Genre::fiction);
    Book revoBicho("23A", "A revolucao dos bichos", "George Owerll", 2003, Genre::fiction);

    if (animalFarm == revoBicho)
        std::cout << "\nThey are equal!" << std::endl;

    Book morte("2345L", "MORTE", "Hanada Keika", 2010, Genre::children);

    if (morte != animalFarm)
        std::cout << "\nThey are different!" << std::endl;

    std::cout << morte << std::endl;*/

    Patron thiago("Thiago Araujo", 22);

    std::cout << "Card: " << thiago.getCard() << '\n';
    std::cout << "Name: " << thiago.getUser() << '\n';
    std::cout << "Calculating fee: " << Library::calculateFee(3); // 3 days without giving the book;
    thiago.setFee(calculateFee(3));

    std::cout << "\n" << thiago.getUser() << " fee: " << thiago.getFee() << "\n";
}