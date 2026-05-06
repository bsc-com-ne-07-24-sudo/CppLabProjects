#include <iostream>
using namespace std;

void vin(string name, int cash, int bet) {
    if (bet > cash) {
        cout << "You cannot bet more than you have!" << endl;
        return;
    }
    cout << name << " bets $" << bet << "." << endl;
    // Simulate a win or loss
    bool win = rand() % 2 == 0; // 50% chance to win
    if (win) {
        cash += bet;
        cout << name << " wins! New cash: $" << cash << "." << endl;
    } else {
        cash -= bet;
        cout << name << " loses! New cash: $" << cash << "." << endl;
    }
}