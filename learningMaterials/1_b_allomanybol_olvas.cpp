// Példaprogram kész állományból olvasásra.
#include<iostream> 
#include<fstream>
using namespace std;

int main()
{
	char szoveg[80];
	ifstream be;
	
   be.open("gyak.txt");  // nem kell ios::nocreate
	if(be.fail()==1) {cout<<"Hiba"; system("pause");exit(1);} 
	while(!be.eof())
	{
	//be.get(szoveg);       // olvasás karakterenként
	//be>>szoveg;			// olvasás szóközig
	be.getline(szoveg,80);  // olvasás soronként
	cout<<szoveg<<endl;
	}
    be.close();
    return 0;
}
