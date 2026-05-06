#include "Ingredient.h"

/* Default constructor */
Ingredient::Ingredient() {
    name = "";
    type = None;
}

/* Parameterized constructor */
Ingredient::Ingredient(string n, TypeOfIngredient t) {
    name = n;
    type = t;
}

/* Getter for name */
string Ingredient::getName() {
    return name;
}

/* Getter for type */
TypeOfIngredient Ingredient::getType() {
    return type;
}

/* Display function */
void Ingredient::display() {
    cout << "Name: " << name << ", Type: " << type << endl;
}