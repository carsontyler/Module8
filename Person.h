//
// Created by ctyler on 11/14/2017.
//

#ifndef MODULE10_PERSON_H
#define MODULE10_PERSON_H
#include <iostream>
#include "Resource.h"
using namespace std;

class Person
{
private:
    string firstName, lastName;
    int arNumber;
    Resource *pResource;
public:
    Person(string fn, string ln, int an);
    Person(const Person &p);
    ~Person();

    string getName() const;                     // Return first + last
    int getArNumber() const;
    void setArNumber(int arNumber);
    const string &getFirstName() const;
    void setFirstName(const string &firstName);

    // Operator overload for < and >
    bool operator < (Person &p) const;
    bool operator < (int n) const;
    friend bool operator < (int n, Person &p);
    Person& operator = (const Person &p);
    // These should work with int < Person, Person < int, int > Person, Person > int
    void AddResource();
};
bool operator < (int i, Person &p);


#endif //MODULE10_PERSON_H
