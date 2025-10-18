//
// Created by blindcoalminer on 10/18/25.
//

#include <iostream>
using namespace std;

int kob(int x);

int main() {
    int szam;
    cout << "Kerem egy szamot: ";
    cin >> szam;
    cout << "\na szam kobe " << kob(szam) << endl;
    cin.ignore().get();
    return 0;
}

int kob(int x) {
    return x * x * x;
}