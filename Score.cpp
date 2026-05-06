#include <iostream>
using namespace std;

int main() {
    int Score = 0;
    int i = 0;
    int Sum = 0;
    while(Score <6){
        cout <<"the score are: " << Score << "\n";
        Score++;
    }
    for(int i = 0; i <=10; i =i+2){
        cout << i << "\n";
    }
    for(int Grade = 1; Grade <100; Grade++ ){
        Sum=Sum+Grade;
        cout << "the sum is: " << Sum << "\n";
    }
    double avg = Sum/100;
    cout << avg << "\n";
    return 0;
}