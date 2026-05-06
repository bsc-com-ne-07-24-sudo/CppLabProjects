#pragma once
#include <iostream>
#include <string>
using namespace std;

enum DrinkType
{
    water
    juice
    soda
    tea
    coffee
}

class Ingredient
{
    private:
    string name;
    DrinkType type;

    public:
    Ingredient();
    Ingredient(string name, DrinkType type)
    
        string getName() const;
        DrinkType getType() const; // accessor methods

        void display() const;// display function

        bool operator==(const Ingredient& other);

};

#include " Ingredient.h"

// In indredient.cpp

#include "Ingredient.h"
Ingredient:: Ingredient() // Default constructor

{
    name = "";
    type = Wwater;
}
//parameterized constructor

Ingredient:: Ingredient(string name, DrinkType type)
{
    this-> = name;
    this-> = type;
}
// Getter for name
string Ingredient::getName() const
{
    return name;
}

 // Getter for type
DrinkType Ingredient::getType() const
{
    return type;
}

// Display function
void Ingredient::display() const
{
    cout << "Ingredient Name: " << name << endl;
    cout << "Type: " << type << endl;
}

// Operator == overload
bool Ingredient::operator==(const Ingredient& other) const
{
    // Compare both name and type
    return (name == other.name && type == other.type);
}

📌 Drink.h
#pragma once
#include "Ingredient.h"

// Drink class (uses dynamic array of ingredients)
class Drink
{
private:
    Ingredient* ingredients; // dynamic array
    int size;                // max capacity
    int count;               // current number of ingredients

public:
    // Constructor
    Drink(int size);

    // Destructor (free memory)
    ~Drink();

    // Add ingredient
    void addIngredient(const Ingredient& ingredient);

    // Display all ingredients
    void displayDrink() const;

    // Find ingredient using ==
    bool findIngredient(const Ingredient& ingredient) const;
};
📌 Drink.cpp
#include "Drink.h"

// Constructor
Drink::Drink(int size)
{
    this->size = size;
    count = 0;
    ingredients = new Ingredient[size]; // dynamic allocation
}

// Destructor
Drink::~Drink()
{
    delete[] ingredients; // free memory
}

// Add ingredient
void Drink::addIngredient(const Ingredient& ingredient)
{
    if (count < size)
    {
        ingredients[count] = ingredient;
        count++;
    }
    else
    {
        cout << "Drink is full!" << endl;
    }
}

// Display drink ingredients
void Drink::displayDrink() const
{
    cout << "\n--- Drink Ingredients ---\n";
    for (int i = 0; i < count; i++)
    {
        ingredients[i].display();
        cout << "-------------------\n";
    }
}

// Search ingredient using operator ==
bool Drink::findIngredient(const Ingredient& ingredient) const
{
    for (int i = 0; i < count; i++)
    {
        if (ingredients[i] == ingredient)
        {
            return true;
        }
    }
    return false;
}
📌 main.cpp (Menu system example)
#include "Drink.h"

int main()
{
    // Create drink with space for 5 ingredients
    Drink myDrink(5);

    // Add ingredients
    myDrink.addIngredient(Ingredient("Water Base", WATER));
    myDrink.addIngredient(Ingredient("Orange Juice", JUICE));
    myDrink.addIngredient(Ingredient("Black Tea", TEA));

    // Display drink
    myDrink.displayDrink();

    // Search example
    Ingredient searchItem("Black Tea", TEA);

    if (myDrink.findIngredient(searchItem))
    {
        cout << "Ingredient found!" << endl;
    }
    else
    {
        cout << "Not found!" << endl;
    }

    return 0;
}