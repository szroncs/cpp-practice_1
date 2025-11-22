//
// Created by blindcoalminer on 2025. 11. 21..
//

/* Egy max 12 fõs kosárlabda csapat adatait tároljuk egy struktúra tömbben.
* Tároljuk a játékosok nevét, magasságát, és dobott pontjait.
* 1, Kérjük be ellenõrzötten a csapat létszámát (5-12)!
* 2, Töltsük fel a struktúratömböt adatokkal úgy, hogy a nevet billentyûzetrõl kérjük be,
* a magasságot és pontokat véletlengenerátorral állítsuk elõ. A magasság 170- 220 cm, a dobott pontok
* 0-100 között lehetnek.
* 3,Írassuk ki az adatokat táblázatosan!
* 4, Számítsuk ki a csapat pont átlagát!
* 5, Ki a legmagasabb (adjuk meg a nevét)!
* 6, Számoljuk meg hányan dobtak 50 pont felett!
*
*/

#include <iomanip>
#include <iostream>
#include <limits>
using namespace std;

struct jatekos{
    string nev;
    int magassag;
    int pont;
};

int main() {

    jatekos jk[12];

    // 1, Kérjük be ellenõrzötten a csapat létszámát (5-12)!
    int letszam;

    do {
        cout << "Kerem a csapat letszamat: ";
        cin >> letszam;
        cin.ignore();
        if (letszam < 5 || letszam > 12) {
            cout << "Nem lehet kisebb mint 5 vagy nagyobb mint 12!" << endl;
        }
    } while (letszam < 5 || letszam > 12);

    // cout << "Kerem a csapat letszamat: ";
    // while (!(cin >> letszam)) {
    //     cout << "Nem lehet kisebb mint 5 vagy nagyobb mint 12!" << endl;
    //     cin.clear();
    //     cin.ignore(numeric_limits<streamsize>::max(), '\n');
    //     cout << "Kerem a csapat letszamat: ";
    // }
    // cin.ignore();

    // * 2, Töltsük fel a struktúratömböt adatokkal úgy, hogy a nevet billentyûzetrõl kérjük be,
    // * a magasságot és pontokat véletlengenerátorral állítsuk elõ. A magasság 170- 220 cm, a dobott pontok
    // * 0-100 között lehetnek.



    for (int i = 0; i < letszam; i++) {
        cout << "Kerem a " << i+1 << ". jatekos nevet: ";
        getline(cin, jk[i].nev);
        jk[i].magassag = rand() % 50 + 170;
        jk[i].pont = rand() % 100 + 1;
    }

    // * 3,Írassuk ki az adatokat táblázatosan!
    cout.setf(ios::left);
    cout << setw(20) << "nev" << setw(20) << "magassag (cm)" << setw(20) << "pont" << endl;
    for (int i = 0; i < letszam; i++) {
        cout << setw(20) << jk[i].nev << setw(20) << jk[i].magassag << setw(20) << jk[i].pont << endl;
    }


    // * 4, Számítsuk ki a csapat pont átlagát!
    int osszpont = 0;
    for (int i = 0; i < letszam; i++) {
        osszpont += jk[i].pont;
    }
    cout << "\nA csapat pontatlaga: " << osszpont / letszam << endl;

    // * 5, Ki a legmagasabb (adjuk meg a nevét)!
    int maxmagassag = jk[0].magassag;
    string colos = jk[0].nev;
    for (int i = 0; i < letszam; i++) {
        if (jk[i].magassag > maxmagassag) {
            maxmagassag = jk[i].magassag;
            colos = jk[i].nev;
        }
    }
    cout << "\nA legmagasabb jatekos neve: " << colos << " " << maxmagassag << " cm" << endl;

    // * 6, Számoljuk meg hányan dobtak 50 pont felett!
    int otvenfelett = 0;
    for (int i = 0; i < letszam; i++) {
        if (jk[i].pont > 50) otvenfelett++;
    }
    cout << "\n" << otvenfelett << " jatekos dobtak 50 pont felett!" << endl;

    return 0;
}