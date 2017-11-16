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

    return 0;
}
// Function Definitions

// RULE OF E
// 1) Copy constructor
// 2) Copy assignment operator
// 3)