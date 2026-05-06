#include <iostream>
using namespace std;

class Networker
{
    public:
    void myMethod();

};
 void Networker::myMethod() 
 {
    cout << " you are rich";
 }
 int main() {
    Networker rich;
    rich.myMethod();
    return 0;
 }