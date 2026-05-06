#pragma once
#include<string>
using namespace std;

enum IngredientType
{
    flour,
    sugar,
    eggs,
    butter,
    milk,
};

class Ingredient
{
    private:
    std::string name;
    IngredientType type;
    public:
    //default constrcutor
    Ingredient();

    //parameterized constructor

    Ingredient(string name, IngredientType type);

    //Getters
    string getName() const;
    IngredientType getType() const;

    //Display 
    void display() const;

    //operator overloading
    bool operator==(Ingredient& other) const;

};

//Ingredient .cpp //
#include "ingredient.h"
#include <iostream>
using namespace std;

//default constructor
Ingredeient:: Ingredient{
    name = "";
    Type = flour;
}
    // parameterized constructor

    Ingredeient:: Ingredient(string name, IngredientType type)
    {
        this->name = name;
        this->type = type;
    }
    // Getter for Name
    string Ingredient:: getName() const
    {
        return name;
    }
    // Getter for type
IngredientType Ingredient::getType() const {
    return type;
}
 // Display ingredient details
void Ingredient::display() const {
    cout << "Name: " << name << endl;

    // Display type using switch
    cout << "Type: ";
    switch (type) {
        case FLOUR: cout << "Flour"; break;
        case SUGAR: cout << "Sugar"; break;
        case EGGS: cout << "Eggs"; break;
        case BUTTER: cout << "Butter"; break;
        case MILK: cout << "Milk"; break;
    }
    cout << endl;
}

bool Ingredient::operator==(const Ingredients& other)
{
    return(name==other.name && type == other.type);
}

cake.h
#pragma once
#include "Ingredient.h"

class cake
{
    string cakeName;

    // Dynamic array of ingredients
    Ingredient* ingredients;
    int size;
    public:
    // Constructor
    Cake(string name);

    // Destructor (important for dynamic memory)
    ~Cake();

    // Add ingredient
    void addIngredient(Ingredient ing);

    // Display cake details
    void displayCake() const;
}

#include "Cake.h"
#include <iostream>
using namespace std;

// Constructor
Cake::Cake(string name) {
    cakeName = name;
    ingredients = nullptr; // no ingredients yet
    size = 0;
}

// Destructor
Cake::~Cake() {
    delete[] ingredients; // free memory
}

// Add ingredient dynamically
void Cake::addIngredient(Ingredient ing) {
    // Create new bigger array
    Ingredient* temp = new Ingredient[size + 1];

    // Copy old ingredients
    for (int i = 0; i < size; i++) {
        temp[i] = ingredients[i];
    }

    // Add new ingredient
    temp[size] = ing;

    // Delete old array
    delete[] ingredients;

    // Point to new array
    ingredients = temp;
    size++;
}

// Display cake details
void Cake::displayCake() const {
    cout << "\nCake Name: " << cakeName << endl;
    cout << "Ingredients:\n";

    for (int i = 0; i < size; i++) {
        ingredients[i].display();
        cout << "------------------\n";
    }
}

#include <iostream>
#include "Cake.h"
using namespace std;

// Function to choose ingredient type
IngredientType chooseType() {
    int choice;

    cout << "Select Ingredient Type:\n";
    cout << "1. Flour\n2. Sugar\n3. Eggs\n4. Butter\n5. Milk\n";
    cin >> choice;

    switch (choice) {
        case 1: return FLOUR;
        case 2: return SUGAR;
        case 3: return EGGS;
        case 4: return BUTTER;
        case 5: return MILK;
        default: return FLOUR;
    }
}

int main() {
    string cakeName;
    cout << "Enter Cake Name: ";
    cin >> cakeName;

    // Create cake object
    Cake cake(cakeName);

    int choice;

    do {
        cout << "\n===== MENU =====\n";
        cout << "1. Add Ingredient\n";
        cout << "2. Display Cake\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            string name;
            cout << "Enter ingredient name: ";
            cin >> name;

            IngredientType type = chooseType();

            Ingredient ing(name, type);

            // Add ingredient to cake
            cake.addIngredient(ing);

            cout << "Ingredient added!\n";
        }

        else if (choice == 2) {
            cake.displayCake();
        }

    } while (choice != 0);

    return 0;
}