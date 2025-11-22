#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
// Egy hallgatói csoportba max. 15-en járnak.Tároljuk a hallgatók nevét, jegyét és a születési évét!
//Kérjük be a valós csoportlétszámot ellenõrzötten, majd a hallgatói adatokat!
//Írassuk ki az adatokat táblázatosan, számítsuk ki a csoport átlagát, majd írassuk ki a legöregebb hallgató nevét!
struct tanulo
{
	string nev;
	int jegy;
	int szul;
};
int main()
{
	tanulo hallg[15];
	int letszam, i, atlag = 0;

	// létszamám bekérése ellenõrzötten
	do
	{
		cout << "Adja meg a csoport letszamamot: ";
		cin >> letszam;
		cin.ignore();
	} while (letszam < 1 || letszam>15);

	// hallgatói adatok ellenõrzötten
	for (i = 0;i < letszam;i++)
	{
		cout << "Adja meg a(z) " << i + 1 << ". tanulo nevet: ";
		getline(cin, hallg[i].nev);
		cout << "Adja meg a szul evszamot: ";
		cin >> hallg[i].szul;
		do
		{
			cout << "Adja meg a jegyet: ";
			cin >> hallg[i].jegy;
			cin.ignore();
		} while (hallg[i].jegy < 1 || hallg[i].jegy > 5);
	}

	system("cls");                					//képernyõ törlés

	// kiiratas tablazatosan + atlagszamitas

	cout.setf(ios::left);
	cout << "Adatok: " << endl;
	cout << setw(10) << "Nev:" << "\t" << "Jegy:" << "\t" << "Szuletesi ev:" << endl;
	for (i = 0;i < letszam;i++)
	{
		cout << setw(10) << hallg[i].nev << "\t" << hallg[i].jegy << "\t" << hallg[i].szul << endl;
		atlag += hallg[i].jegy;
	}
	cout << "\nA csoport atlaga: " << (float)atlag / letszam << endl;

	// legöregebb tanulo - min kivalasztas
	int legoregebb = 0;			// legyen az elsõ tanuló a legöregebb
	for (i = 1;i<letszam;i++)
	{
		if (hallg[legoregebb].szul>hallg[i].szul)
		{
			legoregebb = i;							// a legöregebb az i. hallgató
		}
	}
	cout << "\n A legoregebb hallgato neve: " << hallg[legoregebb].nev << endl;
	cout << endl;
	return 0;
}
