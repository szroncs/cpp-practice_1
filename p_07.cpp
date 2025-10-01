//
// Created by blindcoalminer on 10/1/25.
// Matematika tantárgy érdemjegyét bekérve kiírja azt szövegesen, switch használatával.

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Kerem az erdemjegyet: " << endl;
    cin >> num;
    cout << endl;
    switch (num) {
        case 1:
            cout << "Elegtelen" << endl;
            break;
        case 2:
            cout << "Elegseges" << endl;
            break;
        case 3:
            cout << "Kozepes" << endl;
            break;
        case 4:
            cout << "Jo" << endl;
            break;
        case 5:
            cout << "Jeles" << endl;
            break;
        default:
            cout << "Nem megfelelo szamot adott meg." << endl;
    }

    cin.ignore().get();
    return 0;
}