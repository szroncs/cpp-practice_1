#include<iostream>
#include<string>
#include<ctime>
#include<iomanip>
#include<fstream>
using namespace std;
struct jatekos
{
	string nev;
	int jatekido;
	int gol;
};
int main()
{
	//int letszam;
	//1,Struktúra tömb létrehozása az adatok tárolásához
	jatekos csapat[7];

	//2,  Csapat adatainak bekérése
	ifstream be("jegyzokonyv.txt");
	srand((unsigned int)time(NULL));
	for (int i = 0; i < 7; i++)
	{
		getline(be, csapat[i].nev);
		csapat[i].jatekido = rand() % 61;
		do 
		{
			cout << "Adja meg az " << i + 1 << ". jatekos dobott goljainak szamat:" << endl;
			cin >> csapat[i].gol;
		} while (csapat[i].gol < 0 || csapat[i].gol>10);
		//cin.ignore();
	}
	//3, Csapattagok adatainak táblázatos kiíratása //  formázott kiírás
	system("CLS");
	cout.setf(ios::left);
	for (int i = 0; i < 7; i++)
	{
		cout << setw(20) << csapat[i].nev << setw(2) << csapat[i].jatekido 
			<< " " << csapat[i].gol << endl;
	}

	//4, Számítsuk ki a csapat össz. dobott góljának számát!
	int ossz = 0;
	for (int i = 0; i < 7; i++)
	{
		ossz = ossz + csapat[i].gol;
	}
	cout << "A csapat osszgolszama: " << ossz << endl;

	//5, Legtobb golt dobo jatekos neve, dobott goljainak szama
	int max = 0;
	for (int i = 1; i < 7; i++)
	{
		if (csapat[i].gol > csapat[max].gol) { max = i; }
	}
	cout << "A legtobb golt dobo jatekos: " << csapat[max].nev << " goljainak szama: " << csapat[max].gol << endl;

	//6, A 6 gól  felett dobók száma
	int db6 = 0;
	for (int i = 0; i < 7; i++)
	{
		if (csapat[i].gol > 6)
		{
			db6++;
		}
	}
	cout << "A hat gol felett dobok szama: " << db6 << endl;

	// 7, Írassuk ki azoknak a nevét és játékidejét akik legalább 20 percet a pályán töltöttek
	cout << "A legalabb 20 percet jatszo jatekosok: " << endl;
	for (int i = 0; i < 7; i++)
	{
		if (csapat[i].jatekido >= 20)
		{
			cout << setw(20) << csapat[i].nev << " " << csapat[i].jatekido << endl;
		}
	}

	//8,A kiegészített adatbázist, név, játékidõ, gólok mentsük el az uj_jegyzokonyv.txt állományba!
	ofstream ki("uj_jegyzokonyv.txt");
	ki.setf(ios::left);
	for (int i = 0; i < 7; i++)
	{
		ki<< setw(20) << csapat[i].nev << setw(2) << csapat[i].jatekido << " " << csapat[i].gol << endl;
	}
	return 0;
}