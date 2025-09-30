//
// Created by blindcoalminer on 9/30/25.
// Téglalap területének kiszámítása user input alapján

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Adja meg a téglalap oldalait: " << endl;
    cin >> a >> b;
    cout << "A téglalap területe: " << a * b << endl;
    cin.ignore().get(); // wait for user input before closing, similar to system("pause") but that only works on windows
    return 0;
}

