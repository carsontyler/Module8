
#include <iostream>
#include "Person.h"
using namespace std;

// Prototypes
int Double(const int& x);

int main()
{
    int i = 3;
    const int ci = 3;
    i = 4;
    // ci = 4; << Read only

    int j = 10;
    int dj = Double(j), d10 = Double(10);
    //cout << dj << endl;
    //cout << d10 << endl;

    Person Waldo("Waldo", "Weber", 234);
    Waldo.setArNumber(456);
    cout << Waldo.getArNumber() << endl;
    const Person cWaldo = Waldo;
    //cWaldo.setArNumber(987); DOESN'T WORK, is a constant
    int wNumber = cWaldo.getArNumber();
    cout << wNumber << endl;

    int *pi = &i;
    cout << &i << endl;
    cout << pi << endl;
    //int *pci = &ci; DOESN'T WORK, address of ci is constant
    const int *pci = &ci;                                       // Pointer to a const

    Person*pWaldo = &Waldo;
    Person Someone("Someone", "Else", 345);
    cout << Waldo.getArNumber() << endl;
    cout << Waldo.getName() << endl;
    cout << pWaldo->getName() << endl;                          // Use -> operator

    return 0;
}
// Function Definitions
int Double(const int& x)
{
return x * 2;
}