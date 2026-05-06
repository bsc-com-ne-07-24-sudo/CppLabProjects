#include <iostream>
using namespace std;
class Car
{
    public:
    string brand;
    string model;
    int value;
};
int main()
{
Car obj;
obj.brand = "BMW";
obj.model = " USA model";
obj.value = 22222;
cout << obj.brand << " \n";
cout << obj.model << " \n";
cout << obj.value << " \n";
return 0;
}
 