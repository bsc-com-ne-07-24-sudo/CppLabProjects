#include <iostream>
using namespace std;

void Myfn(int year, string town, string job, string partener, int money){
    cout << " Enter your year u will get rich \n";
    cin >> year;
    cout << " Enter your town u want to live \n";
    cin >> town;
    cout << " Enter your job \n";
    cin >>job;
    cout << " your partener u want to marry \n";
    cin >> partener;
    cout << " the money u want to have \n";
    cin >> money;
    cout << " enter your value of your money in dollars \n";
    cin >> money;
}
int main() {
    Myfn(22, "D","D", "C", 66 );
    return 0;
}