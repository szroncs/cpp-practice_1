#include<iostream>
#include<iomanip>
#include <string>
using namespace std;
// Adott egy 5 dolgozóból álló brigad. Tároljuk a dolgozók nevét és fizetését!
// Kérjük be az adatokat írjuk ki táblázatosan és számoljuk ki az össz fizetést!
struct dolgozo
{
	string nev;
	int fiz;
};

int main()
{
	dolgozo csop[5];
	int i, ossz = 0;

	// dolgozói adatok bekérése
	for (i = 0; i < 5; i++)
	{
		cout << "Adja meg a(z) " << i + 1 << ". dolgozo nevet: ";
		getline(cin, csop[i].nev);
		cout << "Adja meg a fizeteset: ";
		cin >> csop[i].fiz;
		cin.ignore();				//mivel ez után ismét getline vegyük ki a billentyûzet pufferbõl a sorvég(ENTER) jelet
	}		
	system("cls");                			//képernyõ törlés

	// kiiratas tablazatosan + osszfizetes szamitas
	cout.setf(ios::left);       			 // balra zárt kiírás
	for (i = 0;i < 5;i++)
	{
		cout << setw(25) << csop[i].nev << "\t" << csop[i].fiz << endl;
		ossz = ossz + csop[i].fiz;
	}
	cout << "\nA csoport osszfizetese: " << ossz << endl;
	return 0;
}
