#include "../../std_lib_facilities.h"

/*
This is a bughunting, probably some things here you will not understand.
05/11/2022
*/


int main()
try {
    // cout << "4. Success!" << '\n';

    /*syntax error*/ 
    // int res = 7; vector<int> v(10); v[5] = res; cout << "5. Success!\n";

    // vector<int> v(10); v[5] = 6; if (v[5]!=7) cout << "6. Success!\n";

    // if (cond) cout << "Success!\n"; else cout << "Fail!\n";
    // if (true) cout << "Success!\n"; else cout << "Fail!\n";

    /*Logic error*/
    // bool c = false; if (c) cout << "Success!\n"; else cout << "Fail!\n";
    // bool c = true; if (c) cout << "Success!\n"; else cout << "Fail!\n";

    // string s = "ape"; boo c = "fool"<s; if (c) cout << "Success!\n";
    // string s = "ape"; bool c = "fool"<s; if (c) cout << "Success!\n";

    // string s = "ape"; if (s=="ape") cout << "Success!\n";
    // string s = "ape"; if (s=="ape") cout << "Success!\n";

    // string s = "ape"; if (s+"fool") cout < "Success!\n";
    // string s = "ape"; if (s=="ape") cout << "Success!\n";

    /* Infinite loop*/
    // vector<char> v(5); for (int i=0; 0<v.size(); ++i) ; cout << "Success!\n";
    // vector<char> v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n";
    // vector<char> v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n";

    // string s = "Success!\n"; for (int i=0; i<6; ++i) cout << s[i];
    // string s = "Success!\n"; for (int i=0; i<s.size(); ++i) cout << s[i];

    // if (true) then cout << "Success!\n"; else cout << "Fail!\n"
    // if (true) cout << "Success!\n"; else cout << "Fail!\n";

    // int x = 2000; char c = x; if (c==2000) cout << "Success!\n";
    // int x = 2000; int c = x; if (c==2000) cout << "Success!\n";

    // string s = "Success!\n"; for (int i=0; i<10; ++i) cout << s[i];
    // vector<int> v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n";

    /*infinityy Loop error*/
    // int i=0; int j = 9; while (i<10) ++j; if (j<i) cout << "Success!\n";
    // int i=0; int j = 9; while (i<10) ++i; if (j<i) cout << "Success!\n";

    // int x = 4; double d = 5/(x–2); if (d=2*x+0.5) cout << "Success!\n";
    // int x = 4; double d = 5/(x-2); if (d=2*x+0.5) cout << "Success!\n";
    // cout<<d;
    //int x = 4; double d = 5.0/(x-2); if (d==2.0+0.5) cout << "Success!\n";
    // cout << "Success!\n";

    
    keep_window_open();
    return 0;
}
catch (exception& e) {
    cerr << "errorzap: " << e.what() << '\n'; 
    keep_window_open();
    return 1;
}
catch (...) {
    cerr << "Oops: unknown exception!\n"; 
    keep_window_open();
    return 2;
}