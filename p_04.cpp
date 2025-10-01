//
// Created by blindcoalminer on 10/1/25.
//Bekér két számot, majd eldönti, hogy páros, vagy páratlan.

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Kerem az elso szamot: ";
    cin >> a;
    cout << endl;
    if (a % 2 == 0) {
        cout << "Az elso szam paros." << endl;
    } else {
        cout << "Az elso szam paratlan." << endl;
    }
    cout << endl << "Kerem a masodik szamot: ";
    cin >> b;
    cout << endl;
    if (b % 2 == 0) {
        cout << "Az masodik szam paros." << endl;
    } else {
        cout << "Az masodik szam paratlan." << endl;
    }
    cin.ignore().get();

    return 0;
}