//
// Created by blindcoalminer on 10/1/25.
// Írjunk egy programot, amely egy bekért egész számig kiszámítja a számok összegét!

#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    cout << "Kerem egy egesz szamot: ";
    cin >> num;
    cout << endl;

    for (int i = 1; i <= num; i++) {
        sum += i;
    }

    cout << "A szamok osszege: " << sum << endl;

    cout << endl << "Press any key to exit";
    cin.ignore().get();
    return 0;
}