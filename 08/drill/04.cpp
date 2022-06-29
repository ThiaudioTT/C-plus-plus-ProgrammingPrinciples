#include <iostream>
using namespace std;

namespace X {
    int var = -1;

    void print(){
        std::cout << std::endl << "var = " << X::var << std::endl;
    }
}

namespace Y{
    int var = -1;

    void print(){
        std::cout << std::endl << "var = " << Y::var << std::endl;
    }
}

namespace Z{
    int var = -1;

    void print(){
        std::cout << std::endl << "var = " << Z::var << std::endl;
    }
}

int main()
{
    X::var = 7;
    X::print(); // print X’s var
    using namespace Y;
    var = 9;
    print(); // print Y’s var
    {
        using Z::print;
        using Z::var;
        var = 11;
        print(); // print Z’s var
    }
    print();    // print Y’s var
    X::print(); // print X’s var
}