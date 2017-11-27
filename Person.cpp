//
// Created by ctyler on 11/14/2017.
//

#include "Person.h"
Person::Person(string fn, string ln, int an)
{
    firstName = fn;
    lastName = ln;
    arNumber = an;
    //pResource = NULL; Prior to C++11
    //pResource = nullptr;    // c++11, don't need with shared/smart pointer
}

void Person::setArNumber(int arNumber) {Person::arNumber = arNumber;}
int Person::getArNumber() {return arNumber;}

/*!
 * Destructor. Clean Memeory
 */
Person::~Person()
{
    //delete pResource;     Don't need with smart pointers No deletes with smart
}
string Person::getName() {return firstName + " " + lastName;}

/*!
 * Compare Person < person
 * @param p reference to Person
 * @return True or false
 */
bool Person::operator<(Person &p) {return arNumber < p.arNumber;}

/*!
 * Compare person < Int
 * @param n Integer number
 * @return true or false
 */
bool Person::operator<(int n) {return arNumber < n;}

/*!
 * Compare integer < Person
 * @param n integer
 * @param p reference to Person
 * @return True or false
 */
bool operator<(int n, Person &p) {return n < p.arNumber;}

void Person::AddResource()
{
    // Pointer to Resource
    // delete pResource;        // Not needed with smart pointers
    // Resource r("Hello");
    // pResource = &r;          // only lives in this block
    pResource.reset();
    // pResource = new Resource("Resource for " + getName());       Not needed with smart pointers
    pResource = make_shared<Resource>("Resource for " + getName());

}

const string &Person::getFirstName()
{
    return firstName;
}

void Person::setFirstName(const string &firstName)
{
    Person::firstName = firstName;
}

string Person::getResourceName()
{
    return pResource->getName();                // -> Pointers to structures. Access to methods it points to. Pointer = ->
}

// Don't need with shared pointer
/*Person::Person(const Person &p)
{
    firstName = p.firstName;
    lastName = p.lastName;
    arNumber = p.arNumber;
    // Don't copy the reference. Create your own memory, you're own copy
    //pResource = p.pResource;
    pResource = new Resource(p.pResource->getName());
}

Person &Person::operator=(const Person &p)
{
    firstName = p.firstName;
    lastName = p.lastName;
    arNumber = p.arNumber;

    delete pResource;
    pResource = new Resource(pResource->getName());

    return *this;                                           // Return yourself
}*/
