//
// Created by blindcoalminer on 2025. 10. 01..
// Írjunk programot amely bekéri öt nap hőmérsékletét (egész értékben) és kiszámítja az átlaghőmérsékletet!

#include <iostream>
using namespace std;

int main() {

    int i, temp, sum = 0;

    for (i = 1; i <= 5; i++) {
        cout << "Adja meg a " << i << ". nap homersekletet: " << endl;
        cin >> temp;
        sum += temp;
    }

    cout << "A napok atlag homerseklete: " << (float)sum / 5 << endl;

    cout << endl << "Press any key to exit";
    cin.ignore().get();
    return 0;
}