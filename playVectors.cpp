// File: playVectors
// Created by Carson Tyler on 11/28/2017 for CS1410.
// Copyright (c) 2017 WSU
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include "Person.h"
using namespace std;

// Main Program Program
int main(void)
{
    vector<int> v;
    v.push_back(3);
    v.push_back(99);
    v.push_back(-23);
    v.push_back(6);
    // cout << v[0] << endl;

    // Using auto iterator with range
    for(auto i = v.begin(); i != v.end(); i++)          // Auto finds out type for you
    {
        cout << *i << " ";
    }
    cout << endl;

    // Using index notation
    for(unsigned int i = 0; i < v.size(); i++)          // Auto finds out type for you
    {
        cout << v[i] << " ";
    }
    cout << endl;

    // Using directly an iterator, does all, not a specific value
    for(auto item:v)
    {
        cout << item << " ";
    }
    cout << endl;

    // Using auto iterator with reverse range
    for(auto i = v.rbegin(); i != v.rend(); i++)          // Auto finds out type for you
    {
        cout << *i << " ";
    }
    cout << endl;

    // Display the max, min, and sort your array
    sort(begin(v), end(v));
    for(auto item:v)
    {
        cout << item << " ";
    }
    cout << endl;

    auto result = max_element(begin(v), end(v));
    cout << "Max is " << v[distance(v.begin(),result)] << endl;
    cout << "Max is " << *result << endl;

    result = min_element(begin(v), end(v));
    cout << "Min value is " << *result << endl;

    // A vector of objects
    vector<Person> vp;
    Person Waldo("Waldo", "Weber", 123);
    Person Vandy("Vandy", "Vanderbilt", 678);
    vp.push_back(Waldo);
    vp.push_back(Vandy);

    // Use iterator to get objects
    for (auto ip = vp.begin(); ip != vp.end(); ip++)
    {
        cout << ip->getName() << endl;
        // Below requires your object to have output << operator defined
        cout << *ip << endl;
    }
    cout << Waldo << endl;

    // Now, lets talk about MAPs
    map<int, Person> people;
    //          key <int>        =  value <Person>
    people[Waldo.getArNumber()]  =  Waldo;
    // IF the key exists, yo update the value,
    // ELSE you create the value
    people[Vandy.getArNumber()] = Vandy;

    for(auto item:people)
    {
        // The two components of my map are:
        //      key -> first              value -> second
        cout << item.first << " " << item.second.getFirstName() << endl;
    }

    Person Elmo("Elmo", "Street", 100);
    people[123] = Elmo;
    people[124] = Elmo;

    for(auto item:people)
    {
        // The two components of my map are:
        //      key -> first              value -> second
        cout << item.first << " " << item.second.getFirstName() << endl;
    }


    return 0;
}
// Use for final. Min, max, sort.
// Generator relational, equality, output stream operators

/*
 * Map Collection
 * Set of key-value pairs
 * Grows on demand
 * Add or access items by []
 *  Or use pair <> template when adding.
 * Can use find() to access
 * #include<map>
 */