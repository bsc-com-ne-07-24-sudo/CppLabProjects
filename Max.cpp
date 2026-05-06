#include <iostream>
using namespace std;

double max(double x, double y) {
    if(x > y){
         cout << " Enter your numbeer \n ";
    cin >> x;
        return x;
    }
    else 
    cout << " Enter another number \n";
    cin >> y;
        return y;
    }
    int main() {
        cout << max(4, 6);
        return 0;
    }
