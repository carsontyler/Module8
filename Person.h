//
// Created by ctyler on 11/14/2017.
//

#ifndef MODULE10_PERSON_H
#define MODULE10_PERSON_H
#include <iostream>
#include <memory>                               // For smart pointers
#include "Resource.h"
using namespace std;

class Person
{
private:
    string firstName, lastName;
    int arNumber;
    //Resource *pResource;
    shared_ptr<Resource> pResource;             // Declare a shared pointer

public:
    Person();

    Person(string fn, string ln, int an);
    //Person(const Person &p);                  // Don't need with shared pointer
    ~Person();

    string getName();                     // Return first + last
    int getArNumber();
    void setArNumber(int arNumber);
    const string &getFirstName();
    void setFirstName(const string &firstName);
    string getResourceName();

    // Operator overload for < and >
    bool operator < (Person &p);
    bool operator < (int n);
    friend bool operator < (int n, Person &p);
    //Person& operator = (const Person &p);     // Don't need with shared pointer
    // These should work with int < Person, Person < int, int > Person, Person > int

    void AddResource();

    friend ostream &operator<<(ostream &os, const Person &person);
};
bool operator < (int i, Person &p);


#endif //MODULE10_PERSON_H
