//
// Created by ctyler on 11/14/2017.
//

#ifndef MODULE10_RESOURCE_H
#define MODULE10_RESOURCE_H
#include <iostream>
using namespace std;

class Resource
{
private:
    string name;
public:
    Resource(string n);
    ~Resource();

    string getName() const;
};


#endif //MODULE10_RESOURCE_H
