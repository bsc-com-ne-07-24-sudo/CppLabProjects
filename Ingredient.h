#ifndef INGREDIENT_H
#define INGREDIENT_H

#include <iostream>
#include <string>
using namespace std;

/* ENUM declaration */
enum TypeOfIngredient {
    None,
    Flour,
    Egg,
    Sugar,
    Butter,
    BakingPowder,
    Milk
};

/* Ingredient class declaration */
class Ingredient {
private:
    string name;
    TypeOfIngredient type;

public:
    Ingredient(); // default constructor
    Ingredient(string n, TypeOfIngredient t); // parameterized

    string getName();
    TypeOfIngredient getType();

    void display();
};

#endif