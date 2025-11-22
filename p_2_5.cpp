//
// Created by blindcoalminer on 10/18/25.
//

#include <iostream>
#include <cmath>
using namespace std;

double Fakt(int);
bool Prim(int);

int main() {
    int szam;
    cout << "Kerem egy szamot: ";
    cin >> szam;
    cout << endl;
    cout << "A szam " << szam << " faktorialja: " << Fakt(szam) << endl;

    if (Prim(szam) == true) {
        cout << "A szam " << szam << " egy primitiv szam." << endl;
    }
    else {
        cout << "A szam " << szam << " nem egy primitiv szam." << endl;
    }

    cin.ignore().get();
    return 0;
}

double Fakt(int n) {
    double f = 1;
    for (int i = 2; i <= n; i++) {
        f *= i;
    }
    return f;
}

bool Prim(int x) {

    int i = 2;
    int gyok = sqrt(x);
    while (i <= gyok && x%i != 0) {
        i++;
    }
    if (i <= gyok) {
        return false;
    }

    return true;
}