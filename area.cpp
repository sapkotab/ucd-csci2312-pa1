//
// Created by bhuwan sapkota on 2/3/16.


#include <cmath>
#include "Point.h"


double computeArea(const Point &a, const Point &b, const Point &c)
{

    double area;   // area of triangle

    // sides of triangle
    double sideA;
    double sideB;
    double sideC;

    // half of the sum of the sides of triangle usually denoted by 'S' on formula
    double halfOfSumOfSides;

    sideA = a.distanceTo(b);
    sideB = b.distanceTo(c);
    sideC = c.distanceTo(a);

    // s = (a+b+c)/2
    halfOfSumOfSides = ((sideA + sideB + sideC)/2.0);

    // area of the triangle A = √s(s-a)(s-b)(s-c)

    area = sqrt(halfOfSumOfSides *(halfOfSumOfSides-sideA) * (halfOfSumOfSides -sideB) * (halfOfSumOfSides - sideC));

    return area;
}