#include <iostream>
#include <string>
using namespace std;

/* ===============================
   1. ENUM for ingredient types
   =============================== */
enum TypeOfIngredient {
    None,
    Flour,
    Egg,
    Sugar,
    Butter,
    BakingPowder,
    Milk
};

/* ===============================
   2. Ingredient Class
   =============================== */
class Ingredient {
private:
    string name;                  // Name of ingredient
    TypeOfIngredient type;       // Type using enum

public:
    // Default constructor
    Ingredient() {
        name = "";
        type = None;
    }

    // Parameterized constructor
    Ingredient(string n, TypeOfIngredient t) {
        name = n;
        type = t;
    }

    // Getter for name
    string getName() {
        return name;
    }

    // Getter for type
    TypeOfIngredient getType() {
        return type;
    }

    // Function to display ingredient details
    void display() {
        cout << "Name: " << name << ", Type: " << type << endl;
    }
};

/* ===============================
   3. Cake Class
   =============================== */
class Cake {
private:
    Ingredient* ingredients;   // Dynamic array of ingredients
    int size;                  // Max number of ingredients
    int count;                 // Current number added

public:
    // Default constructor
    Cake() {
        size = 5;              // default size
        count = 0;
        ingredients = new Ingredient[size]; // allocate memory
    }

    // Destructor (important for memory cleanup)
    ~Cake() {
        delete[] ingredients;
    }

    /* ===============================
       Function: Add Ingredient
       =============================== */
    void addIngredient() {
        if (count >= size) {
            cout << "Array is full!\n";
            return;
        }

        string name;
        int typeChoice;

        cout << "Enter ingredient name: ";
        cin >> name;

        cout << "Select type:\n";
        cout << "1. Flour\n2. Egg\n3. Sugar\n4. Butter\n5. BakingPowder\n6. Milk\n";
        cin >> typeChoice;

        // Convert user input into enum
        TypeOfIngredient type = (TypeOfIngredient)typeChoice;

        // Store ingredient in array
        ingredients[count] = Ingredient(name, type);
        count++;

        cout << "Ingredient added successfully!\n";
    }

    /* ===============================
       Function: Show All Ingredients
       =============================== */
    void showAllIngredients() {
        if (count == 0) {
            cout << "No ingredients available.\n";
            return;
        }

        cout << "\n--- Ingredient List ---\n";
        for (int i = 0; i < count; i++) {
            ingredients[i].display();
        }
    }

    /* ===============================
       Function: Search Ingredient
       =============================== */
    void searchIngredient() {
        int typeChoice;
        cout << "Enter type to search (1-6): ";
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
            cout << "No ingredient found of that type.\n";
        }
    }

    /* ===============================
       Function: Bake Cake
       =============================== */
    void bakeCake() {
        // Condition: must have basic ingredients
        bool hasFlour = false, hasEgg = false, hasSugar = false;

        for (int i = 0; i < count; i++) {
            if (ingredients[i].getType() == Flour) hasFlour = true;
            if (ingredients[i].getType() == Egg) hasEgg = true;
            if (ingredients[i].getType() == Sugar) hasSugar = true;
        }

        if (hasFlour && hasEgg && hasSugar) {
            cout << "Cake baked successfully!\n";
        } else {
            cout << "Missing essential ingredients!\n";
        }
    }

    /* ===============================
       Menu Function
       =============================== */
    void menu() {
        int choice;

        do {
            cout << "\n====== MENU ======\n";
            cout << "1. Add Ingredient\n";
            cout << "2. Show All Ingredients\n";
            cout << "3. Search Ingredient\n";
            cout << "4. Bake Cake\n";
            cout << "0. Exit\n";
            cout << "Choose: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    addIngredient();
                    break;
                case 2:
                    showAllIngredients();
                    break;
                case 3:
                    searchIngredient();
                    break;
                case 4:
                    bakeCake();
                    break;
                case 0:
                    cout << "Exiting...\n";
                    break;
                default:
                    cout << "Invalid option!\n";
            }

        } while (choice != 0);
    }
};

/* ===============================
   MAIN FUNCTION
   =============================== */
int main() {
    Cake cake;      // Create Cake object
    cake.menu();    // Start menu system
    return 0;
}