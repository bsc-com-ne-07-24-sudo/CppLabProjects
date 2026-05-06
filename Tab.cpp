#include <iostream>
using namespace std;

class Tab
{
    public:
    int age;
    double value;
    string song;
    string wish;
    int year;
};
int main() 
{
    Tab Vin;
    Vin.age = 28;
    Vin.value = 999999;
    Vin.song = " Great is thy faithfulllness";
    Vin.wish = " be faithful to God, be prosperous and rich , have a brass band";
    Vin.year = 2028;
    cout << Vin.age << " is a an age to have money value" << " " << Vin.value << " " << Vin.song << " " << Vin.wish << " " << Vin.year << " \n";

    return 0;

}