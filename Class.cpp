#include <iostream>
using namespace std;

class MyCLass {
    public:
        int Age;
        string name;
};
int main() {
    MyCLass Obj;
    Obj.Age = 22;
    Obj.name = "vincent";
    cout << Obj.Age << " \n";
    cout << Obj.name;
    return 0;
}