//
// Created by bhuwan sapkota on 2/3/16.
//
//#include <iostream>
#include <cmath>
#include "Point.h"

//using namespace std;

// implementing constructors

Point::Point()
{
    x = 0.0;
    y = 0.0;
    z = 0.0;
}

Point::Point(double a, double b, double c)
{
    x = a;
    y = b;
    z = c;
}

// implementing mutators
void Point::setX(double newX) { x = newX; }

void Point::setY(double newY) { y = newY; }

void Point::setZ(double newZ) { z = newZ; }

// implementing accessers
double Point::getX() const { return x; }

double Point::getY() const { return y; }

double Point::getZ() const { return z; }

// implementing member function

double Point::distanceTo(const Point &object) const
{
    double distance;
    distance = sqrt((( object.getX()-x)* ( object.getX()-x))
                    +(( object.getY()-y)* ( object.getY()-y))
                    +( object.getZ()-z)* ( object.getZ()-z));
    return distance;
}