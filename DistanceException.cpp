#include <iostream>                 // <> is library, system
#include "Distance.h"               // "" is local
using namespace std;


int main()
{
    try
    {
        Distance d1(17, 3.5);
        Distance d2;
        cout << "\nd1: ";
        d1.showDistance();

        d2.getDistance();
        cout << "\nd2: ";
        d2.showDistance();
    }
    catch (Distance::InchesEx)
    {
        cout << "\nInitialization Error."
             " Inches value too large";
    }

    // Continue
    cout << "\nMore work here. I am not dead";
    return 0;
}

