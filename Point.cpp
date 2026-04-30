#include <iostream>
using namespace std;

int main() {
    int arr[3] = {12,30,44};
    int* p = arr;
    cout << *p <<" \n";
    cout << *p + 2 << " \n";
    return 0;
}