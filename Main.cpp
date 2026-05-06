#include <iostream>
#include "Rectangle.h"
<<<<<<< HEAD
using namespace std;
#include <iostream>
#include "Rectangle.h"

using namespace std;

int main() {
    Rectangle rect;
    float length2, width2;

cout << "\nEnter length for rectangle 2: ";
cin >> length2;

cout << "Enter width for rectangle 2: ";
cin >> width2;

Rectangle rect2(length2, width2);

cout << "Area of rectangle 2: " << rect2.calculateArea() << endl;

    float length, width;

    // User input
    cout << "Enter length: ";
    cin >> length;

    cout << "Enter width: ";
    cin >> width;

    // Set values
    rect.setLength(length);
    rect.setWidth(width);

    // Output area
    cout << "Area of rectangle: " << rect.calculateArea() << endl;

=======
#include "Triangle.h"

using namespace std;

int main()
{
    Rectangle rect;
    Triangle trgl;
    rect.SetValues(4,5);
    trgl.SetValues(4,5);
    cout << rect.Area() << "\n";
    cout << trgl.Area() << "\n";
>>>>>>> 22014fe59e59d0025ffc8a6c30cdcdc1ab9e164c
    return 0;
}