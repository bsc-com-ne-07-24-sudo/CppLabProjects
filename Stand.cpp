#include <iostream>
using namespace std;

int main() {
    int myCash = 1000;
    const int Age = 22;
    string name = " VIN";
    double height = 3.3;
    int StudentID = 12;
    int StudentAge = 33;
    float StudentFee = 22.22;
    char Grade = 'A';
    auto Length = 89;
    auto Width = 90;
    int Area = Length * Width;
    int x;
    cout << " type a number: ";
    cin >> x;
    cout << "your number is: " << x;
    cout << " VINCENT VIN \n";
    cout << " Area of rectangle: " << Area << "\n";
    cout << " 3 + 3 \n"; // this is a comment
    cout << " i love Angella \n";
    cout << " i will have brass band \n";
    cout << name << " is " << " years old and " << height << "metre \n";
    cout << "Student ID: " << StudentID << "\n";
    cout << "Student Age: " << StudentAge << "\n";
    cout << "student fee: " << StudentAge << "\n";
    cout << " student grade: " << Grade << "\n";
    cout << " i am " << Age << " years old \n";
    cout << myCash;
    return 0;
}