//
// Created by blindcoalminer on 2025. 10. 01..
// Írjunk egy programot, amely egy bekért egész számig kiszámítja a számok összegét! - `while` ciklussal.

#include <iostream>
using namespace std;

int main() {
    int i, sum = 0;
    cout << "Kerem egy egesz szamot: ";
    cin >> i;
    cout << endl;

    while (i > 0) {
        sum += i;
        i--;
    }

    cout << "A szamok osszege: " << sum << endl;

    cout << endl << "Press any key to exit";
    cin.ignore().get();
    return 0;
}