// Szöveges állomany létrehozása, írás az állományba
#include<fstream>
#include<iostream>
using namespace std;
int  main()
{
	ofstream uj("gyak.txt");
	uj<<"Itt az uj allományom"<<endl<<"most hoztam letre"<<endl;
	uj.put('a');							// egy karakter írása az állományba
	uj.close();
	cout << "A fajl letrejott" << endl;
return 0;
}
