//
// Created by blindcoalminer on 10/18/25.
//


#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct kosar {
    string nev;
    int magassag;
    int pont;
};

int main() {
    int letszam;

    do {
        cout << "Adja meg a letszamot 5-12 kozott: " << endl;
        cin >> letszam;
    } while (letszam > 12 || letszam < 5);
    cin.ignore();

    kosar csapat[12];
    srand((unsigned int)time(NULL));
    for (int i = 0; i < letszam; i++) {
        cout << "adja meg az " << i+1 <<". jatekos nevet:" << endl;
        getline(cin, csapat[i].nev);
        csapat[i].magassag = rand() % 51 + 170;
        csapat[i].pont = rand() % 101;
    }

    system("clear");
    for (int i = 0; i < letszam; i++) {
        cout << csapat[i].nev << "\t" << csapat[i].magassag << "\t" << csapat[i].pont << endl;
    }

    float atl = 0;
    for (int i = 0; i < letszam; i++) {
        atl = atl + csapat[i].pont;
    }
    cout << "A csapat pontatlaga: " << atl/letszam << endl;

    int max = 0;
    for (int i = 0; i < letszam; i++) {
        if (csapat[i].magassag > csapat[max].magassag) { max = i;}
    }
    cout << "A csapat legmagasabb jatekosa: " << csapat[max].nev << endl;

    int db50 = 0;
    for (int i = 0; i < letszam; i++) {
        if (csapat[i].pont > 50) {
            db50++;
        }
    }

    cout << "A csapatban az 50 pont felett dobott szama:" << db50 << endl;
    return 0;
}