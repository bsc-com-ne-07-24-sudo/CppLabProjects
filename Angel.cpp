#include <iostream>
using namespace std;

class Angella
{
    public:
    int age( int years);
};
int Angella::age(int years)
{
    return years;
}
int main() 
{
    Angella love;
    cout << love.age(1000000);
    return 0;
}