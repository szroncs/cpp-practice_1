//
// Created by blindcoalminer on 10/1/25.
//Bekér két számot, majd eldönti, hogy páros, vagy páratlan.

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Kerem az elso szamot: ";
    cin >> num;
    cout << endl;
    if (num % 2 == 0) {
        cout << "Az elso szam paros." << endl;
    } else {
        cout << "Az elso szam paratlan." << endl;
    }
    cout << endl << "Kerem a masodik szamot: ";
    cin >> num;
    cout << endl;
    if (num % 2 == 0) {
        cout << "Az masodik szam paros." << endl;
    } else {
        cout << "Az masodik szam paratlan." << endl;
    }
    cin.ignore().get();

    return 0;
}