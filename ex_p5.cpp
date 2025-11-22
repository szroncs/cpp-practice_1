//
// Created by blindcoalminer on 2025. 11. 21..
//

/*Feladat :
Egy vegyesbolt adatait kell tárolni. Tároljuk az áruk neveit (string),  árát,
és a raktáron lévõ darabszámot!
Hozzunk létre egy az elõbbiek tárolására szolgáló struktúra típusú változót!
Maximum 15 db különféle árúnk lehet (15 elemû a struktúra tömb)!
1. Kérjük  be az árúk számát ellenõrzötten!
2. Kérjük be az áruk neveit! (pl. fekete ribizli szörp)
3. Kérjük be az áruk árát ellenõrzötten(nem lehet 5000 Ft nál nagyobb és 100 Ft- nál kisebb!)
4. Kérjük be az árúk darabszámát véletlengenerátorral (az árúk száma 1 és 10 db között lehet)
5. Írja ki az adatokat táblázatosan!
6. Határozza meg, és írja ki, mennyi az egész árukészlet értéke!
7. Számolja ki az átlagos árat és írja ki a képernyõre !
8. Számolja meg hány áruból van több mint öt raktárkészleten!
9. Írja ki a legdrágább áru nevét és árát!
10. Emelje az árakat 20 %-kal majd írja ki az áruk nevét és új árát!
*/

#include <iomanip>
#include <iostream>
using namespace std;

struct aru{
    string nev;
    int ar;
    int db;
};

int main() {
    aru aruk[15];
    int aruszam = 0;

    // adja meg hogy mennyi tételt fog megadni
    do {
       cout << "Kerem az aruk szamot: ";
        cin >> aruszam;
        cin.ignore();
        if (aruszam > 15 || aruszam < 1) {cout << "Nem lehet kisebb mint 1 vagy nagyobb mint 15!" << endl;}
    } while (aruszam > 15 || aruszam < 1);
    cout << aruszam << " árú adatát fogjuk felvinni" << endl;

    // adja meg az aruk neveit
    for (int i = 0; i < aruszam; i++) {
        cout << "Kerem az " << i+1 << ". aruk nevet: ";
        getline(cin, aruk[i].nev);

        // az áruk árait ellenõrzötten(nem lehet 5000 Ft nál nagyobb és 100 Ft- nál kisebb!)
        do {
            cout << "Kerem az " << i+1 << ". aruk arat: ";
            cin >> aruk[i].ar;
            cin.ignore();
            if (aruk[i].ar > 5000 || aruk[i].ar < 100) {cout << "Nem lehet kisebb mint 100 Ft vagy nagyobb mint 5000 Ft!" << endl;}
        } while (aruk[i].ar > 5000 || aruk[i].ar < 100);

        // Kérjük be az árúk darabszámát véletlengenerátorral (az árúk száma 1 és 10 db között lehet)
        aruk[i].db = rand() % 10 + 1;
    }
    // 5. Írja ki az adatokat táblázatosan!
    cout.setf(ios::left);
    cout << setw(20) << "aru neve" << setw(20) << "aru ara" << setw(25) << "aru db" << endl;
    for (int i = 0; i < aruszam; i++) {
        cout << setw(20) << aruk[i].nev << setw(20) << aruk[i].ar << setw(25) << aruk[i].db << endl;
    }

    // 6. Határozza meg, és írja ki, mennyi az egész árukészlet értéke!
    int arukeszlet_ertek = 0;
    for (int i = 0; i < aruszam; i++) {
        arukeszlet_ertek += aruk[i].ar * aruk[i].db;
    }
    cout << "\nAz arukeszlet teljes erteke: " << arukeszlet_ertek << " Ft" << endl;

    // 7. Számolja ki az átlagos árat és írja ki a képernyõre !
    int osszar = 0;
    for (int i = 0; i < aruszam; i++) {
        osszar += aruk[i].ar;
    }
    cout << "\nAz aruk atlgaos ara: " << osszar / aruszam << " Ft" << endl;

    // 8. Számolja meg hány áruból van több mint öt raktárkészleten!
    int otneltobb = 0;
    for (int i = 0; i < aruszam; i++) {
        if (aruk[i].db > 5) {otneltobb++;}
        }
    cout << "\nOtnel tobb keszlet: " << otneltobb << " termeknel." << endl;


    // 9. Írja ki a legdrágább áru nevét és árát!
    int legdragsabb_ar = 0;
    for (int i = 0; i < aruszam; i++) {
        if (aruk[i].ar > aruk[legdragsabb_ar].ar) legdragsabb_ar = i;
    }

    cout << "\nLegdragabb termek neve: " << aruk[legdragsabb_ar].nev << endl;
    cout << "\nLegdragabb termek ara: " << aruk[legdragsabb_ar].ar << " Ft" << endl;

    // 10. Emelje az árakat 20 %-kal majd írja ki az áruk nevét és új árát!
    for (int i = 0; i < aruszam; i++) {
        aruk[i].ar *= 1.2;
    }
    cout << "\nAz arak 20%-al emelt ara:" << endl;

    cout << setw(20) << "aru neve" << setw(20) << "aru ara"  << endl;
    for (int i = 0; i < aruszam; i++) {
        cout << setw(20) << aruk[i].nev << setw(20) << aruk[i].ar  << endl;
    }

    return 0;
}