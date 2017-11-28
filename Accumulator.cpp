#include <iostream>
#include "Accum.h"
#include "Person.h"
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
    mystring += "4";
    cout << mystring.getTotal()<<endl;

    /*integers += "Weber";                      // Types must match
    mystring += 4;*/

    //Template specialization
    //Person start("", "", 0);                  // Not needed if you have template specialization
    //Accum<Person> people(start);              // Not needed if you have template specialization
    Accum<Person> people(0);
    Person p1("Waldo", "Weber", 123);
    Person p2("Ogden", "Rocks", 789);
    people += p1;
    people += p2;

    // cout << people.getTotal().getArNumber() << endl;         Not needed with template specialization
    cout << people.getTotal() << endl;

    return 0;
}

/*
 * Template may not work
 * - Operator of function is missing
 * - Logic of the operator won't work for our case
 * 1st Choice: Add the operator or function with
 * 2nd Choice: Specialize template
 */