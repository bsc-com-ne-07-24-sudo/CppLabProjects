#include <iostream>
using namespace std;

class Vin
{
    public:
    void vin();
};
// method/function definition outside the class
void Vin :: vin()
{
cout << " you are strong \n";
}
int main()
{
    Vin angella;
    angella.vin();
    return 0;
}