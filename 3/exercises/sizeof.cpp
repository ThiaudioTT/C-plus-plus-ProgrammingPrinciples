#include <iostream>
using namespace std;

int main()
{
    cout << "Variável 'int' ocupa   : " << sizeof(int) << " byte(s)" << endl;
    cout << "Variável 'char' ocupa  : " << sizeof(char) << " byte(s)" << endl;
    cout << "Variável 'float' ocupa : " << sizeof(float) << " byte(s)" << endl;
    cout << "Variável 'double' ocupa: " << sizeof(double) << " byte(s)" << endl;
    cout << "Variável 'bool' ocupa  : " << sizeof(bool) << " byte(s)" << endl;
    return 0;
}

//From: 
//https://www.cmmprogressivo.net/2019/09/funcao-sizeof-em-cmm-short-long-unsigned.html
