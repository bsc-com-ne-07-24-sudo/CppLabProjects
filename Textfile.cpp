#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream myfile("example.txt");
    if(myfile.is_open()){
        myfile << "Hello, this is a test file." << endl;
        myfile << "This file is created using C++." << endl;
        myfile.close();
    }
    else {
        cout << "Unable to open file";
    }
    return 0;
}