#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <map>

class Animal
{
    public:
    virtual void sound()
    {
        cout << " hi vin \n";
    }
};

class Dog : public Animal
{
    public:
    void sound() override
    {
        cout << " woof \n";
    }
};

int main()
{
    Anumal* a;
    Dog d;
    a = &d;
    a->sound();
    return 0;
}