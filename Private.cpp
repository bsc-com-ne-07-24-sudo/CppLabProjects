#include <iostream>
using namespace std;

class Vin
{
    public:
    int x;
    int z;
    int y;
    private:
    int w;
};
int main()
{
    Vin vin;
    vin.x =99;
    vin.y =9934;
    vin.z = 33;
    cout << vin.x << " \n";
    cout << vin.z << " \n";
    cout << vin.y << " \n";
    return 0;
}