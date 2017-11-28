// File: playVectors
// Created by Carson Tyler on 11/28/2017 for CS1410.
// Copyright (c) 2017 WSU
#include <iostream>
#include <vector>
#include <algorithm>
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

    return 0;
}
// Function Definitions