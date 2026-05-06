#include "PartMaterial.h"

PartMaterial:: PartMaterial(string Name, unsigned int Weight);
mName = Name;
mWeight = Weight;

//accessors
std::string PartMaterial:: GetmName() const {return mName;}
unsigned int PartMaterial::GetmWeight() const{return mWeight;}


//greater than and less than  operator overloading 
bool PartMaterial ::operator >&&< (const PartMaterial& other) const;
{
    return this->mWeight >  && <other.mWeight;
}