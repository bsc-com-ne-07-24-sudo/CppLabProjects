// reading an entire binary file into memory
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream myfile("example.txt");
    if (myfile.is_open()) {
        // get length of file:
        myfile.seekg(0, myfile.end);
        int length = myfile.tellg();
        myfile.seekg(0, myfile.beg);

        char* buffer = new char[length];

        cout << "Reading " << length << " characters... ";
        // read data as a block:
        myfile.read(buffer, length);
        if (myfile) {
            cout << "all characters read successfully.";
        } else {
            cout << "error: only " << myfile.gcount() << " could be read";
        }
        myfile.close();

        delete[] buffer;
    } else {
        cout << "Unable to open file";
    }
    return 0;
}