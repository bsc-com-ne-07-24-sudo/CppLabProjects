#include <iostream>
using namespace std;

int main() {
    int numberofElemts = 0;
    int* dynamicArray = nullptr;
    cout << "How many numbers would you like to type?";
    cin >> numberofElemts;
    dynamicArray = new int[numberofElemts];
    if (dynamicArray == nullptr) {
        cout << " Error: memory could not be allocated.";
    
    }
    else {
        cout << "Enter " << numberofElemts << " numbers: ";
        for (int i = 0; i < numberofElemts; i++) {
            cin >> dynamicArray[i];
        }
        cout << "The numbers you entered are: ";
        for (int i = 0; i < numberofElemts; i++) {
            cout << dynamicArray[i] << " ";
        }
    }
     delete[] dynamicArray;
     return 0;
}