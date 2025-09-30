//
// Created by blindcoalminer on 9/30/25.
// Betű kiírása ASCII számmal user input alapján

#include <iostream>
using namespace std;

int main() {
    int i;
    char betu;
    cout << "Adjon meg egy betut: " << endl;
    cin >> betu;
    i = betu;
    cout << "A megadott betu ASCII száma: " << i << ", az eredeti betu: " << betu << endl;
    cout << endl;

    cout << "A program vége, nyomjon egy billentyűt a kilépéshez..." << endl;
    cin.ignore().get(); // wait for user input before closing, similar to system("pause") but that only works on windows
    return 0;
}