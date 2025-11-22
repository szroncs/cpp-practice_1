/*Egy utazó ügynök a vartav.txt állományban tárolja a januárban
 felkeresett városok nevét és a megtett napi kilómétereket. 
A hónapban nem volt 20 városnál többen s a városok nevei
 szóközzel elválasztva vannak a távolságtól.
Az egyes városok mindig új sorban vannak. Készítsünk programot
 mely kimutatja:
? hány kilómétert utazott januárban.
? Melyik a legtávolabbi város.
- írja ki a város nevét és a távolságot a varos.txt állományba*/
#include <iostream>
#include <fstream>
#include <string> 
using namespace std;
struct ugynok
{
   string varos;
   int tav;    
};
int main()
{	
//Adatbevitel 
	ifstream be("vartav.txt");
	if(be.fail()){cout<<"hiba";system("pause");exit(1);}
	int i=0,j,db=0;
	ugynok A[20];
	while(!be.eof())
    {
 	   be>>A[i].varos;
	   be>>A[i].tav;
       cout<<A[i].varos<<" "<<A[i].tav<<endl;
       i++;
	}
	db=i;
	cout<<"\nJanuarban :"<<db <<" varosban jart"<<endl;
	be.close();
    cout<<endl;
    
//? hány kilómétert utazott januárban.  
    
    int ossz=0;
    for(i=0; i<db;i++)
      ossz=ossz+A[i].tav;
    cout<<"A januarban megtett tavolsag :"<<2*ossz<<endl; // oda vissza utazott :)

//? Melyik a legtávolabbi város.    
     	
    int max=0;
	for (i = 1; i<db; i++)
	{
		if (A[i].tav>A[max].tav) max = i;
	}
    cout<<"\nA legtavolabbi varos "<<A[max].varos<< " tavolsaga "<<A[max].tav<<"km"<<endl;
    ofstream ki("varos.txt");
    if(ki.fail()){cout<<"hiba";system("pause");exit(1);}
    ki<<A[max].varos<<" "<<A[max].tav;
    ki.close();
return 0;
}

