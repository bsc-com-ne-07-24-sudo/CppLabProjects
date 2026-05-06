#include <iostream>
using namespace std;

class Club
{
    public:
    bool alive = true;
    void fan()
    {
        cout << " the club have fan \n ";
    }
};
class name:public Club
{
    void path()
    {
        cout << " pathfinder  \n";

    }
};
int main() 
{
    Club fun;
    Club vin;
    fun.fan() ;
    cout << fun.alive ;
    name.path();
    return 0;
    
}