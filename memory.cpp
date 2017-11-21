// File: memory
// Created by Carson Tyler on 11/16/2017 for CS1410.
// Copyright (c) 2017 WSU
#include <iostream>
#include "Person.h"
using namespace std;
// Constants

// Prototypes

// Main Program Program
int main(void)
{
    Person Waldo("Waldo", "Weber", 123);
    Waldo.AddResource();
    Waldo.setFirstName("WaldoJr");
    Waldo.AddResource();

    Person WaldoSr = Waldo;

    Waldo = WaldoSr;

    string s1 = Waldo.getResourceName();
    cout << "\n s1: " << s1 << endl;

    return 0;
}
// Function Definitions

// RULE OF E
// 1) Copy constructor
// 2) Copy assignment operator
// 3) Something else

// Smart Pointer
// 1) Shared_ptr      --      Increases reference. Deletes, when counter is zero
// 2) weak_ptr        --      Let's you "peak" at a shared pointer. Borrow info without counter
// 3) unique_ptr      --      Cannot make a copy. (std::move). Single owner. Deletes when out of scope. *Most Common