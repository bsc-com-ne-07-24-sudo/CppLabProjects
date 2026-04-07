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
