#include "../std_lib_facilities.h"

class badarea{};

int main()
{
        // throw badarea{};
    throw int();
    /*try
    {
    } catch (badarea)
    {
        cerr << "Error";
    }*/
}