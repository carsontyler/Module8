#include <iostream>
#include "Accum.h"

using namespace std;

int main()
{
    Accum<int> integers(0);
    integers += 3;
    integers += 7;
    cout << integers.getTotal() << endl;

    Accum<string> mystring("");
    mystring += "Hello";
    mystring += " world!";
    cout << mystring.getTotal() << endl;

    /*integers += "Weber";                      // Types must match
    mystring += 4;*/


    return 0;
}