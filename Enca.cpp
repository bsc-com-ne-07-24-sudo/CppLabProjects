#include <iostream>
using namespace std;

class Employee
{
    private:
    int salary = 2233; // private attribute
    public:
    void setSalary(int s) // set salary
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
    Employee vin;
    vin.setSalary(100000);
    cout << vin.getSalary();
    return 0;
}