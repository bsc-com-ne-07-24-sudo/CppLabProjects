#include <iostream>
using namespace std;

int add(int age){
    return age;
}
string add(string name){
    return name;
}
string add(double weight, double height){
    return "Weight: " + to_string(weight) + " Height: " + to_string(height);
}
string add(char cash, double price){
    return "Cash: " + to_string(cash) + " Price: " + to_string(price);
}
int main() {
    cout << " Enter your age: \n";
    int age;
    cin >> age;
    cout << "Your age is: " << age << endl;
    cout << " Enter your name: \n";
    string name;
    cin >> name;
    cout << "Your name is: " << name << endl;
        cout << " Enter your weight: \n";
    double weight;
    cin >> weight;

    cout << " Enter your height: \n";
    double height;
    cin >> height;
    cout << "Your weight and height are: " << add(weight, height) << endl
            << " Enter your cash: \n";
    char cash;
    cin >> cash;
    cout << " Enter the price: \n";
    double price;
    cin >> price;
    cout << "Your cash and price are: " << add(cash, price) << endl;
     return 0;
}