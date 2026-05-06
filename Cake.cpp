#include "Cake.h"

/* Constructor */
Cake::Cake() {
    size = 5;
    count = 0;
    ingredients = new Ingredient[size]; // allocate memory
}

/* Destructor */
Cake::~Cake() {
    delete[] ingredients; // free memory
}

/* Add ingredient */
void Cake::addIngredient() {
    if (count >= size) {
        cout << "Array is full!\n";
        return;
    }

    string name;
    int typeChoice;

    cout << "Enter ingredient name: ";
    cin >> name;

    cout << "1.Flour 2.Egg 3.Sugar 4.Butter 5.BakingPowder 6.Milk\n";
    cin >> typeChoice;

    TypeOfIngredient type = (TypeOfIngredient)typeChoice;

    ingredients[count] = Ingredient(name, type);
    count++;

    cout << "Ingredient added!\n";
}

/* Show all ingredients */
void Cake::showAllIngredients() {
    if (count == 0) {
        cout << "No ingredients.\n";
        return;
    }

    for (int i = 0; i < count; i++) {
        ingredients[i].display();
    }
}

/* Search ingredient */
void Cake::searchIngredient() {
    int typeChoice;
    cout << "Enter type to search: ";
    cin >> typeChoice;

    TypeOfIngredient type = (TypeOfIngredient)typeChoice;

    bool found = false;

    for (int i = 0; i < count; i++) {
        if (ingredients[i].getType() == type) {
            ingredients[i].display();
            found = true;
        }
    }

    if (!found) {
        cout << "Not found.\n";
    }
}

/* Bake cake */
void Cake::bakeCake() {
    bool hasFlour = false, hasEgg = false, hasSugar = false;

    for (int i = 0; i < count; i++) {
        if (ingredients[i].getType() == Flour) hasFlour = true;
        if (ingredients[i].getType() == Egg) hasEgg = true;
        if (ingredients[i].getType() == Sugar) hasSugar = true;
    }

    if (hasFlour && hasEgg && hasSugar) {
        cout << "Cake baked successfully!\n";
    } else {
        cout << "Missing ingredients!\n";
    }
}

/* Menu system */
void Cake::menu() {
    int choice;

    do {
        cout << "\n1.Add\n2.Show\n3.Search\n4.Bake\n0.Exit\n";
        cin >> choice;

        switch (choice) {
            case 1: addIngredient(); break;
            case 2: showAllIngredients(); break;
            case 3: searchIngredient(); break;
            case 4: bakeCake(); break;
            case 0: cout << "Bye\n"; break;
            default: cout << "Invalid\n";
        }

    } while (choice != 0);
}