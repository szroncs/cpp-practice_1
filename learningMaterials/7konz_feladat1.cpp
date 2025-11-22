#include<iostream>
#include<iomanip>
using namespace std;
//Példaprogram struktúra tip. változó létrehozására, értékadásra, képernyõtörlésre és formátumozott kiírásra.
//Tároljuk egy tanuló nevét, matematika jegyét és az érte kapott kreditet!
//Írjuk ki az adatokat formátumozottan a képernyõre! 

struct tanulo
{
	char nev[25];
	int jegy;
	int kredit;
};

int main()
{
	tanulo t;
	t.jegy = 5;
	t.kredit = 12;
	cout << "Adja meg a nevet: ";
	cin.getline(t.nev, 25);
	system("cls");               						 //képernyõ törlés
	cout << t.nev << " adatai: " << endl;
	cout << setw(10) << "Nev:" << "\t" << "Jegy:" << "\t" << "Kredit:" << endl;
	cout << setw(10) << t.nev << "\t" << t.jegy << "\t" << t.kredit << endl;
	cout << endl;
	return 0;
}
