#include <fstream>
#include <iostream>
using namespace std;

int main() {
    char data[100];
    // Open a file in write mode.
    ofstream outfile;
    outfile.open("afile.txt");
    cout << "Writing to the file" << endl;
    cout << "Enter your name: ";
    cin.getline(data, 100);
    // Write inputted data into the file.
    outfile << data << endl;
    cout << "Enter your age: ";
    cin >> data;
    cin.ignore();
    outfile << data << endl;
    // Close the opened file.
    outfile.close();
    // Open a file in read mode.
    ifstream infile;
    infile.open("afile.txt");
    cout << "Reading from the file" << endl;
    infile >> data;
    cout << data << endl;
    infile >> data;
    cout << data << endl;
    infile.close();
    return 0;

}
