//
// Created by blindcoalminer on 10/18/25.
//

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct dolgozo {
    string nev;
    int fiz;
};

int main() {
    dolgozo csop[5];
    int i, ossz = 0;

    // dolgozoi adatok bekerese
    for (i = 0; i < 5; i++) {
        cout << "Adja meg a " << i+1 << ". dolgozot nevet: ";
        getline(cin, csop[i].nev);
        cout << "Adja meg a " << i+1 << ". dolgozot fizeteset: ";
        getline(cin, csop[i].nev);
       // cin >> csop[i].fiz;
       // cin.ignore();
    }
    system("clear");

    cout.setf(ios::left);
    for (i = 0; i < 5; i++) {
        cout << setw(25) << csop[i].nev << "\t" << csop[i].fiz << endl;
        ossz = ossz + csop[i].fiz;
    }
    cout << "/nA csoport fizetese: " << ossz << endl;

    return 0;
}