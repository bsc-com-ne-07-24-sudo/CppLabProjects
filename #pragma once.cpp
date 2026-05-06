#pragma once
#include <iostream>

class Polygon
{
    public:
    virtual intArea()
    {
        return 0;
    }
};

class Rectangle : public polygon
{
    public:
    int area()
    {
    return 20;
    }
};
class Triangle : public polygon
{
    public:
    int area()
    {
        return 10;
    }
};

polygon* p;

Rectangle rect;
Triangle tri;
p = &rect;
std::cout << "Area of Rectangle: " << p->area() << std::endl