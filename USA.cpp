#include <iostream>
using namespace std;

class USA
{
    public:
    int year;
    string program;
    double money;
    USA(int x, string z, double t )
    {
        year = x;
        program = z;
        money = t;
    }
};
int main() 
{
    USA dream(2028, "Masters in cyber security", 9876533);
    cout << dream.year << " " << dream.program << " " << dream.money << " \n";
    return 0;
}