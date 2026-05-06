#pragma once
#include <iostream>
#include <string>

class Square
{
    public:
    virtual void intArea()
    {
        cout << " the area of the square \n";
    }
};

class Polygon : public square
{
    public:
    void intArea() override
    {
        coout << " the area of the polygon \n";
    }
};


int main()
{
    Square* s;
    Polygon p;
    s = &p;
    s->intArea();
    return 0;
}


