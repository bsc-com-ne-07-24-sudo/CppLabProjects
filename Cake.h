#ifndef CAKE_H
#define CAKE_H

#include "Ingredient.h"

/* Cake class declaration */
class Cake {
private:
    Ingredient* ingredients; // dynamic array
    int size;
    int count;

public:
    Cake();   // constructor
    ~Cake();  // destructor

    void addIngredient();
    void showAllIngredients();
    void searchIngredient();
    void bakeCake();
    void menu();
};

#endif