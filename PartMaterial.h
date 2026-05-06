 #pragma once
 #include <string>

 class PartMaterial
 {
    private:
    //member functions of materials
    std:: string mName;
    unsigned int mWeight;

    public:

    PartMaterial() ;// default constructor
    
    PartMaterial(string Name, unsigned int Weight);

    //accessor methods for all the members
    string GetmName();
    unsigned int GetmWeight();

    // overload operator
    bool operator > (const PartMaterial& other) && < (const PartMaterial) const;
 };
