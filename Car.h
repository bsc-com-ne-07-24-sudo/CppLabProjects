#include <iostream>
#include <fstream>

class Car
{
    private:
    CarPart* mCarPart; // Dynamic array of carparts
    int mCount; // Tracks assigned elements
    int mSize; //Total size of the array

    // Private member fucntions
    void AddCarPart();
    void ShowAllValidParts();
    public:
    //default constructor
    Car();
    //public execute function
    void Execute();
    
};