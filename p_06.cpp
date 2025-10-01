//
// Created by blindcoalminer on 10/1/25.
// Matematika tantárgy érdemjegyét bekérve kiírja azt szövegesen.
// Egymásba ágyazott if else ágakkal.

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Kerem az erdemjegyet: " << endl;
    cin >> num;
    cout << endl;
    if (num < 1 || num > 5) {
        cout << "Nem megfelelo szamot adott meg." << endl;
    }
    if (num == 1) {cout << "Elegtelen" << endl;} else {
        if (num == 2) {cout << "Elegseges" << endl;} else {
            if (num == 3) {cout << "Kozepes" << endl;} else {
                if (num == 4) {cout << "Jo" << endl;} else {
                    if (num == 5) {cout << "Jeles" << endl;}
                }
            }
        }
    }

    cin.ignore().get();
    return 0;
}