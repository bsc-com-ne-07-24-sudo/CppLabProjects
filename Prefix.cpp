#include <iostream>
using namespace std;

int main() {
    int x = 3;
    // the value of x is inreased before the value of x is assigned to y
    // hence the value assigned to y is the value of x after being increased
    int y = ++x;
    cout << "The value of x is: " << x << endl;
    cout << "The value of y is: " << y << endl;
    return 0;
}