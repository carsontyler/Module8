//
// Created by ctyler on 11/21/2017.
//

#ifndef MODULE10_ACCUM_H
#define MODULE10_ACCUM_H

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


#endif //MODULE10_ACCUM_H
