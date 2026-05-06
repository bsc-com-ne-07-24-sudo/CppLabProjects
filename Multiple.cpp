#include <iostream>
using namespace std;

class Club
{
    public:
    void myName()
    {
        cout << " Adventisit youth \n";
    }
};
// another class
class Member
{
    public:
    void Vin()
    {
        cout << " Pathfinder \n";

    }
};
class Angella: public Club, public Member
{

};
int main() 
{
    Angella love;
    love.myName();
    love.Vin();
    return 0;
} 