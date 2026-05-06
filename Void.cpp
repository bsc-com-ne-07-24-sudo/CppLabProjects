#include <iostream>
using namespace std;

void Myprofile(string fname, int Age){
    cout << "Enter your age";
    cin >> Age;
     cout << fname << " kauta "<< " has " << Age << " years old \n";
}
int main() {
    Myprofile("Vincent", 14);
    Myprofile("Lughano",33);
    Myprofile("Israella", 44);
    return 0;
}