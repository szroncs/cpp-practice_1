//
// Created by blindcoalminer on 10/1/25.
// Írjunk egy programot, amely egy bekért betű kis és nagybetűs változatait adja meg!

#include <iostream>
using namespace std;

int main() {
    char letter, nagy, kicsi;
    cout << "Kerem a betut: ";
    cin >> letter;
    cout << endl;
    nagy = toupper(letter);
    kicsi = tolower(letter);
    cout << "Kisbetu: " << nagy << endl;
    cout << "Nagybetu: " << kicsi << endl;

    cout << endl << "Press any key to exit";
    cin.ignore().get();
    return 0;
}