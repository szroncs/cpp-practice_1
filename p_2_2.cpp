//
// Created by blindcoalminer on 10/18/25.
//

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct tanulo {
    string nev;
    int jegy;
    int szul;
};

int main() {
    tanulo hallg[15];
    int letszam, i, atlag =0;

    do {
        cout << "Adja meg a csoport letszamat";
        cin >> letszam;
        cin.ignore();
    } while (letszam < 1 || letszam > 15);

    for (i = 0; i < letszam; i++) {
        cout << "Adja meg a " << i+1 << ". tanulo nevet: ";
        getline(cin, hallg[i].nev);
        cout << "Adja meg a szul evszamot: ";
        cin >> hallg[i].szul;
        do {
            cout << "Adja meg a jegyeket: ";
            cin >> hallg[i].jegy;
            cin.ignore();
        } while (hallg[i].jegy < 1 || hallg[i].jegy > 5);

    }
    system("clear");
        cout.setf(ios::left);
    cout << "Adatok:" << endl;
    cout << setw(10) << "Nev:" << "\t" << "Jegy: " << "\t" << "Szul ev:" << endl;
    for (i = 0; i < letszam; i++) {
        cout << setw(10) << hallg[i].nev << "\t" << hallg[i].jegy << "\t" << hallg[i].szul << endl;
        atlag += hallg[i].jegy;
    }
    cout << "Atlag jegyek: " << (float)atlag / letszam << endl;

    int legoregebb = 0;
    for (i = 0; i < letszam; i++) {
        if (hallg[legoregebb].szul > hallg[i].szul) {
            legoregebb = i;
        }
    }
    cout << "\nA legoregebb hallgato neve: " << hallg[legoregebb].nev << endl;
    cout << endl;
}