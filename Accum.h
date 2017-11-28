//
// Created by ctyler on 11/21/2017.
//

#ifndef MODULE10_ACCUM_H
#define MODULE10_ACCUM_H

#include "Person.h"

template <class T>
class Accum
{
private:
    T total;
public:
    Accum(T start):total(start){};

    T operator += (const T& t){return total = total + t;}
    T getTotal() {return total;}
};

// Template specialization
template <>
class Accum <Person>
{
private:
    int total;
public:
    Accum(int start): total(start){};
    int operator += (Person& t)
    {
        return total += t.getArNumber();
    }
    int getTotal(){return total;}
};


#endif //MODULE10_ACCUM_H
