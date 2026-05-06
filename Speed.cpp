#include <iostream>
using namespace std;

class Speed
{
    public:
    void angella(int love);
};
void Speed:: angella(int love)
{
    return love;
}
int main() 
{
    Speed promise;
    cout << promise.angella(1);
    return 0;
}