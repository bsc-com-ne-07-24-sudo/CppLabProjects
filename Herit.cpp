#include <iostream>
using namespace std;

class Car
{
    public:
    string model = " bmw";
    void benz()
    {
    cout << " is good \n";
    }
};
//Derived class (inheritance)
class Van: public Car
{
    public:
    string type = " DEFENDER RANGELOVER";
};
int main()
{
    Van vin;
    vin.benz();
    cout << vin.type + " " + vin.model;
    return 0;
}