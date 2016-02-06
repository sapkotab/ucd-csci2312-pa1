//
// Created by bhuwan sapkota on 2/3/16.

//
//#include <iostream>
#include <cmath>
#include "Point.h"

//using namespace std;

double computeArea(const Point &a, const Point &b, const Point &c)
{
    double area;
    double sideA;
    double sideB;
    double sideC;
    double halfOfSumOfSides;

    sideA = a.distanceTo(b);
    sideB = b.distanceTo(c);
    sideC = c.distanceTo(a);

    halfOfSumOfSides = ((sideA + sideB + sideC)/2.0);

    area = sqrt(halfOfSumOfSides *(halfOfSumOfSides-sideA) * (halfOfSumOfSides -sideB) * (halfOfSumOfSides - sideC));

    return area;
}