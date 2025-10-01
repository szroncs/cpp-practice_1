//
// Created by blindcoalminer on 10/1/25.
// Írjunk egy programot, amely egymás alá tízszer kiírja a nevünket!

#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 10; i++) {
        cout << i+1 << "\t" << "Blindcoalminer" << endl;
    }

    cout << endl << "Press any key to exit";
    cin.ignore().get();
    return 0;
}