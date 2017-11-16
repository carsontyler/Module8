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
    pResource = nullptr;    // c++11
}

void Person::setArNumber(int arNumber) {Person::arNumber = arNumber;}
int Person::getArNumber() const {return arNumber;}

/*!
 * Destructor. Clean Memeory
 */
Person::~Person() {delete pResource;}
string Person::getName() const {return firstName + " " + lastName;}

/*!
 * Compare Person < person
 * @param p reference to Person
 * @return True or false
 */
bool Person::operator<(Person &p) const {return arNumber < p.arNumber;}

/*!
 * Compare person < Int
 * @param n Integer number
 * @return true or false
 */
bool Person::operator<(int n) const {return arNumber < n;}

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
    delete pResource;
    pResource = new Resource("Resource for " + getName());
    // Resource r("Hello");
    // pResource = &r;          // only lives in this block
}

const string &Person::getFirstName() const
{
    return firstName;
}

void Person::setFirstName(const string &firstName)
{
    Person::firstName = firstName;
}

/*!
 * Copy Constructor
 * @param p Person ojbect to be copy
 */
Person::Person(const Person &p)
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
}
