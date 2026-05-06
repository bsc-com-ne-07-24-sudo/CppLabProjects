#include <iostream>
using namespace std;

int main() {
    double temp;
    char unit;
    cout << " temperature conversion \n";
    cout << "F = fahrenheit \n";
    cout << "C = celsius \n";
    cout << "Enter temperature value: ";
    cin >> unit;
    if (unit == 'F' || unit == 'f') {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temp;
        double celsius = (temp - 32) * 5.0 / 9.0;
        cout << temp << " F is equal to " << celsius << " C\n";
    } else if (unit == 'C' || unit == 'c') {
        cout << "Enter temperature in Celsius: ";
        cin >> temp;
        double fahrenheit = (temp * 9.0 / 5.0) + 32;
        cout << temp << " C is equal to " << fahrenheit << " F\n";
    } else {
        cout << "Invalid unit entered. Please enter 'F' or 'C'.\n";
    }
    return 0;
}



