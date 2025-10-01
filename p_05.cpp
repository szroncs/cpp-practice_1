//
// Created by blindcoalminer on 10/1/25.
//matematika tantárgy érdemjegyét bekérve kiírja azt szövegesen.

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Kerem az erdemjegyet: " << endl;
    cin >> num;
    cout << endl;
    if (num < 1 || num > 5 ) {
        cout << "Nem megfelelo szamot adott meg." << endl;
    }

    if (num == 1) {cout << "Elegtelen" << endl;}
    if (num == 2) {cout << "Elegseges" << endl;}
    if (num == 3) {cout << "Kozepes" << endl;}
    if (num == 4) {cout << "Jo" << endl;}
    if (num == 5) {cout << "Jeles" << endl;}

    cin.ignore().get();
    return 0;
}