#include <iostream>
using namespace std;

int main() {
    int count = 9;
    double myList[20];
    int* ptr = new int;
    *ptr = 10;
    string food = "eggs";
    string &meal = food;
    cout << meal << endl;
    cout << *ptr << endl;           
    cout << "size of myList: " << sizeof(myList) << endl;
    int globalVar = 5;
    cout << &count;
    cout << globalVar;
    return 0;
}