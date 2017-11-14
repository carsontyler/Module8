//
// Created by ctyler on 11/14/2017.
//

#include "Person.h"
Person::Person(string fn, string ln, int an)
{
    firstName = fn;
    lastName = ln;
    arNumber = an;
}
void Person::setArNumber(int arNumber) {Person::arNumber = arNumber;}
int Person::getArNumber() const {return arNumber;}
Person::~Person() { }
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