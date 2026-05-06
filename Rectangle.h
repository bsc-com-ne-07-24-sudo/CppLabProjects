<<<<<<< HEAD
#include <iostream>
using namespace std;

    #ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
    float length;
    float width;

public:
    // Default constructor
    Rectangle();
     Rectangle(float l, float w);

    // Destructor
    ~Rectangle();

    // Setter methods (mutators)
    void setLength(float l);
    void setWidth(float w);
   

    // Getter methods (accessors)
    float getLength() const;
    float getWidth() const;

    // Area function
    float calculateArea() const;
};

#endif
=======
#pragma once
#include "Polygon.h"

class Rectangle: public Polygon
{
public:
int Area();
};
>>>>>>> 22014fe59e59d0025ffc8a6c30cdcdc1ab9e164c
