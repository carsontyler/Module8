//
// Created by 17cty on 11/7/2017.
//

#include <cstring>
#include <iostream>
#include "MyString.h"
using namespace std;

// Constructor
MyString::MyString(char *s)
{
    int length = strlen(s);                                 // Length of input string
    // Get memory
    str = new char[length + 1];
    strcpy(str, s);                                         // Copy Argument to new allocated space, and save address to str
}

// Destructor
MyString::~MyString()
{
    cout << "Deleting memory" << endl;
    delete[] str;
}

void MyString::display()
{
    cout << str << endl;
}

/*!
 * Update string. This will allocate new meory.
 * Change my pointer o the new space
 * delete old memory
 * @param newStr New stirng to update
 */
void MyString::updateString(char *newStr)
{
    int length = strlen(newStr);
    char *temp = new char[length + 1];
    strcpy(temp, newStr);

    cout << "Deleting old memory" << endl;
    delete[] newStr;
    str = temp;                                             // Point to new allocated space
}