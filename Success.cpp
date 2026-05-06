#include <iostream>
using namespace std;

class Mydream
{
    public:
    int age;
    int year;
    string wish;
    string dream;
    double money;
    char value;
    Mydream(int x, string y, string z,int a, double c, char d ) // constructor
    {
        age = x;
        year = a;
        wish = y;
        dream = z;
        money = c;
        value = d;

    }
};
int main ()
{
    Mydream Success( 28, "be financially stable", " have a brass band", 2028, 98982981, '$');
    cout << " by the age of " << " " << Success.age << " i will have" << Success.dream << " and " << Success.wish << "  " << " by the end of " << Success.year <<" " << " " << "i will have money value , valuing" << Success.money << Success.value << " \n";
    return 0;
}