//
// Created by blindcoalminer on 10/1/25.
// Írjunk egy programot, amely egy karakterről eldönti, hogy betű, szám, vagy egyéb jel!

#include <iostream>
using namespace std;

int main() {
    char k;
    cout << "Kerem egy tetszoleges karaktert: ";
    cin >> k;
    int x = isalpha(k);
    int y = isdigit(k);
    if (x != 0) {
        cout << "A megadott karakter betu" << endl;
    } else {
        if (y != 0) {
            cout << "A megadott karakter szam" << endl;
        } else {
            cout << "A megadott karakter nem betu es nem szam" << endl;
        }
    }

    cout << endl << "Press any key to exit";
    cin.ignore().get();
    return 0;
}