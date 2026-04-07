#include <iostream>
using namespace std;
#include "Rectangle.h"
    

// Constructor
Rectangle::Rectangle() {
    length = 0;
    width = 0;
}
Rectangle::Rectangle(float l, float w) {
    length = l;
    width = w;
}

// Destructor
Rectangle::~Rectangle() {
    // Nothing for now
}

// Setters
void Rectangle::setLength(float l) {
    length = l;
}

void Rectangle::setWidth(float w) {
    width = w;
}

// Getters
float Rectangle::getLength() const {
    return length;
}

float Rectangle::getWidth() const {
    return width;
}

// Area calculation
float Rectangle::calculateArea() const {
    return length * width;
}
