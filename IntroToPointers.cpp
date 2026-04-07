#include <iostream>
using namespace std;

int main() {
    // declare pointer and initialize it
    //so that it doesn't store a random address
    int *ptr = nullptr;

    int integerVar = 5;
    ptr = &integerVar; // assign the address of integerVar to ptr
    // output the value of integerVar
    cout << " integerVar: " << integerVar << endl;
    // output the address of integerVar
    cout << " address of integerVar: " << &integerVar << endl;
    //output the address assigned to ptr
    cout << "ptr: " << ptr << endl;
    //output the address of ptr
    cout << "address of ptr: " << &ptr << endl;
    return 0;
}