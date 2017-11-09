//
// Created by ctyler on 11/9/2017.
//

#include "Distance.h"
#include <iostream>
using namespace std;

Distance::Distance()
{
    feet = 0;
    inches = 0.0;
}

Distance::Distance(int feet, float inches) : feet(feet), inches(inches) {}

void Distance::getDistance()
{
    cout << "\nEnter feet: ";
    cin >> feet;
    cout << "\nEnter inches: ";
    cin >> inches;

    if(inches >= 12)
    {
        throw InchesEx();
    }

    /* try
     * {
     *      thow "Bad input, index too high";
    */
}

void Distance::showDistance()
{
    cout << feet << "\' - " << inches << "\"";
}
