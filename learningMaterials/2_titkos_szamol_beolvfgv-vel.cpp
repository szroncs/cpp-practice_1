/*1, A szoveg.txt állományban lévõ szöveget olvassuk be a Beolvas() függvénnyel és írjuk ki a képernyõre!
Számoljuk meg, hogy hány sorból áll a szöveg!
2, Kérjünk be egy karaktert a fõfüggvényben és számoljuk meg hány ilyen karakter van a szövegben!
3, Titkosítsuk úgy a szöveget, úgy, hogy az elõbbi karaktereke cseréljük ki * -ra!
A szöveget most ne tároljuk tömbben vagy más adtszerkezetben, minden függvény esetén olvassuk be!
*/
#include <iostream>
#include <fstream>
using namespace std;
int Beolvas(char fnev[]);			//int Beolvas(char *fnev); mindkét jelölésmód használható
int Szamol(char fnev[], char betu);
void Titkosit(char fnev[],char betu);
int main ()
{
	char fajlnev[]="szoveg.txt";
	char karakter;
	cout<<"Beolvasas soronkent"<<endl; 
	cout<<"\n\nA sorok szama: "<<Beolvas(fajlnev)<<endl;
	cout <<"\n\n Melyik karaktert szamoljam meg?";
    cin>>karakter;
    cout<<"\n\n A megszamlalando karakterek szama: "<<Szamol(fajlnev,karakter); 
	cout<<"\n A titkositott szoveg\n\n";
    Titkosit(fajlnev,karakter);
	return 0;
}
int Beolvas(char fnev[])
{
	int db=0;		//sorok szama
	ifstream be(fnev);
	if(be.fail()){ 	cout<<"Hibas filemegnyitas! (sor)";	exit(1);}
	char sor[80];
	while(!be.eof())		
	{
		be.getline(sor,80);
		cout<<sor<<endl;
		db++;
	}
	be.close();
	return db;
}
int Szamol(char fnev[], char betu)
{
    int db=0;		//karakterek szama
	ifstream be(fnev);
	if (be.fail()) { cout << "Hibas filemegnyitas! (sor)";	exit(1); }
	char karakter;
	while(!be.eof())		
	{
		be.get(karakter);
		if (karakter==betu)	db++;
	}
	be.close();
	return db;
}
void Titkosit(char fnev[], char betu)
{
    int db=0;		//karakterek szama
	ifstream be(fnev);
	if (be.fail()) { cout << "Hibas filemegnyitas! (sor)";	exit(1); }
	char karakter;
	while(!be.eof())		
	{
		be.get(karakter);
		if (karakter==betu)	karakter='*';
		cout<<karakter;
	}
	be.close();
}

