#include <iostream>
using namespace std;

class Vin
{
    protected: // protected access specifier
    int salary;
};

//derived class
class Networker: public Vin
{
    public:
    int bonus;
    void mySalary(int s)
    {
        salary = s;
    }
    int getSalary() 
    {
        return salary;
    }

};
int main()
{
    Vin engineer;
    engineer.mySalary(33333);
    engineer.bonus = 999;
    cout << engineer.getSalary() << " \n";
    return 0;
}
