#include <iostream>
using namespace std;

class Parent
{
    public:

    void myNum()
    {
      cout << " it will happen \n";
    }
};
class Father: public Parent
{

};
class Mother: public Father
{

};

int main()
{
    Mother vin;
    vin.myNum();
    return 0;
}