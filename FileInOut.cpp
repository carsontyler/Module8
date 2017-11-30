// File: FileInOut
// Created by Carson Tyler on 11/30/2017 for CS1410.
// Copyright (c) 2017 WSU
#include <iostream>
#include <fstream>                  // File stream library
#include <vector>

using namespace std;

// Main Program Program
int main(void)
{
    ifstream inFS;                                              // Input file stream
    ofstream outFS;                                             // Output file stream
    int fileNum1 = 0;
    int fileNum2 = 0;
    vector<int> nums;

    // Try to open the file
    cout << "Opening file myfile.txt" << endl;
    inFS.open("../myfile.txt");                               // Relative path to exe file
    //inFS.open("C:\\Users\\17cty\\CLionProjects\\Module8");  // Absolute path. Don't use

    if(!inFS.is_open())
    {
        cout << "Could not open file myfile.txt" << endl;
        return 1;
    }
    // Now use inFS
    cout << "Reading two integers" << endl;
    //inFS >> fileNum1;
    //inFS >> fileNum2;

    /* Works by hand
    inFS >> fileNum1;
    nums.push_back(fileNum1);
    inFS >> fileNum1;
    nums.push_back(fileNum1);
    inFS >> fileNum1;
    nums.push_back(fileNum1);*/

    // Using loop
    while(!inFS.eof())
    {
        inFS >> fileNum1;
        if(inFS.good())
        {
            cout << "num: " << fileNum1 << endl;
        }
        else
        {
            // Bad record skipped over
            continue;
        }
        nums.push_back(fileNum1);
    }

    cout << "Opening file myfile.txt" << endl;
    inFS.open("../myoutfile.txt");
    if(!outFS.is_open())
    {
        cout << "Could not open file myoutfile.txt" << endl;
        return 1;
    }

    for(auto item:nums)
    {
        cout << item << endl;
        outFS << item << endl;
    }
    // Display
    for (auto item:nums)
    {
        cout << item << endl;
    }

    inFS.close();
    outFS.close();
    return 0;
}
// Function Definitions