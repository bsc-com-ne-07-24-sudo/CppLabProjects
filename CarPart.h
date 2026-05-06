#include <iostream>
#include <string>
#include "PartMaterial.h"

class CarPart{
    private:

    // member functions
    std:: string Fname;
    std:: string mName; // member variables from PartMaterial
    unsigned int mWeight; // member variables from PartMaterial
    
    public:
    CarPart(); // default constructor
    CarPart( string name); // second constructor
    Void Initialise(); // function that initialise

};