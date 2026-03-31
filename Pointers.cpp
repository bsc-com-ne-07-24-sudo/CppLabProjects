#include <iostream>
using namespace std;

int main() {
    int firstvalue;
    int secondvalue;
    int * pPointer = nullptr;
    // assign pointer with the address of firstvalue
    pPointer = &firstvalue;
    *pPointer = 10; // assign value to the address of firstvalue
    // assign pointer with the address of secondvalue
    pPointer = &secondvalue;
    *pPointer = 20; // assign value to the address of secondvalue
    cout << "First value: " << firstvalue << endl; // Output: 10
    cout << "Second value: " << secondvalue << endl; // Output: 20
    return 0;
}