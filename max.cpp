// File: max
// Created by Carson Tyler on 11/21/2017 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>

using namespace std;
// Constants
template <class T>
T max(T &t1, T &t2)
{
    return t1 < t2 ? t2 : t1;
}
// Prototypes

// Main Program Program
int main(void)
{
    cout << "Max of 33 and 44 is " << max(33, 44) << endl;
    string s1 = "Hello";
    string s2 = "World";
    cout << "The max of " << s1 << " and " << s2 << " is " << max(s1, s2) << endl;
    return 0;
}
// Function Definitions