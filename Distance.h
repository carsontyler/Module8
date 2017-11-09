//
// Created by ctyler on 11/9/2017.
//

#ifndef MODULE10_DISTANCE_H
#define MODULE10_DISTANCE_H


class Distance
{
private:
    int feet;
    float inches;
public:
    class InchesEx{};                                           // Exception Class
    Distance();
    Distance(int feet, float inches);

    void getDistance();
    void showDistance();

};


#endif //MODULE10_DISTANCE_H
