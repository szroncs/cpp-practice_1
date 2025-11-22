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
#include<iostream>
#include<string>
#include<ctime>
using namespace std;
struct kosar
{
	string nev;
	int magassag;
	int pont;
};
int main()
{
	int letszam;
	//1, Létszám ellenõrzött bekérése
	do
	{
		cout<<"Adja meg a letszamot 5-12 kozott!"<<endl;
		cin >> letszam;
	} while (letszam > 12 || letszam < 5);
	cin.ignore();// a késõbbi getline() miatt kell

	//2,  Csapat adatainak bekérése
	kosar csapat[12]; 
	srand((unsigned int)time(NULL));
	for (int i = 0; i < letszam; i++)
	{
		cout<<"Adja meg az "<<i+1<<". jatekos nevet:"<<endl;
		getline(cin,csapat[i].nev);
		csapat[i].magassag = rand()%51+170;
		csapat[i].pont = rand()%101;
		// nincs szükség az ignore() használatára mert nem használunk cin -t.
	}
	
	//3, Csapattagok adatainak táblázatos kiíratása // nem formázott kiírás
	system("CLS");
	for (int i = 0; i < letszam; i++)
	{
		cout<<csapat[i].nev<<" "<< csapat[i].magassag<<" "<<csapat[i].pont<<endl;
	}
	
	//4, Számítsuk ki a csapat pont átlagát!
	float atl = 0;
	for (int i = 0; i < letszam; i++)
	{
		atl = atl + csapat[i].pont;
	}
	cout<<"A csapat pontatlaga: "<<atl / letszam<<endl;
	
	//5, Legmagasabb jatekos neve
	int max = 0;
	for (int i = 1; i < letszam; i++)
	{
		if (csapat[i].magassag > csapat[max].magassag) { max = i; }
	}
	cout<<"A legmagasabb jatekos neve: "<<csapat[max].nev<<endl;

	//6, Az ötven pont felett dobók száma
	int db50 = 0;
	for (int i = 0; i < letszam; i++)
	{
		if (csapat[i].pont > 50)
		{
			db50++;
		}
	}
	cout<<"Az otven pont felett dobok szama: "<<db50<<endl;
	return 0;
}