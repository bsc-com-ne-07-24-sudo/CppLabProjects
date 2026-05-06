#include <iostream>
using namespace std;

 void add(string name, string goal, string x, string y,double var, int cash){
    cout << " whats your unique name \n";
    cin >> name;
    cout << " what are your goals \n";
    cin >> goal;
    cout << " how much cash u want to start business \n";
    cin >> cash;
    if(cash>=1000000){
        cout << " eligible to do business \n";
    }else if(cash <=1000000){
        cout << " not eligible and try harder \n";
  }
    
    cout << " what things u want to accomplish in your life \n";
    cin >> x;
    
}
 int main () {
    add(" ", " "," ", " ", 9, 0);
    return 0;
 }