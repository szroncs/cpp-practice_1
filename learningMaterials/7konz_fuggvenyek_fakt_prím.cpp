// Kérjen be a fõfüggvényben egy egész számot
//Írjon Fakt() függvényt, és Prim() amely átveszi a bekért számot! 
//A Fakt() számítsa ki a szám faktoriálisát a Prim() döntse el. hogy Prím -e a szám!nyt!
#include <iostream>
using namespace std;

double Fakt(int);					//a függvény deklarációja
bool Prim(int);
int main()
{
	int szam;
	cout << "Adja meg a szamot: ";
	cin >> szam;						
	cout << szam << "! = " << Fakt(szam) << endl;
	if (Prim(szam) == true)
	{
		cout <<"A " <<szam << " Prim "<< endl;	
	}
	else
	{
		cout << "A " << szam << " Nem prim " << endl;
	}

	system("pause");
	return 0;
}
double Fakt(int n)					//a függvény definíciója
{
	double f = 1;
	for (int i = 2; i <= n; i++)
	{
		f *= i;				//f=f*i;
	}
	return f;
}
bool Prim(int x)
{

	int i = 2;
	int gyok = sqrt(x);
	while (i <= gyok && x%i != 0)
	{
		i++;
	}
	if (i <= gyok)
	{
		return false;
	}
	return true;
}