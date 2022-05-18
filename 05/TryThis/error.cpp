// ????
#include "../../std_lib_facilities.h"

void error(string s)
{
    throw runtime_error(s);
}

int main()
try
{

    return 0;
} catch(runtime_error& e){
    cerr<<"\nRUNTIME ERROR: "<<e.what()<<"\n";
    keep_window_open();
    return 1;
}