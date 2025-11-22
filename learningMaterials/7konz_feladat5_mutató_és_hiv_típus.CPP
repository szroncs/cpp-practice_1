#include<iostream>
using namespace std;

int main()
	{
	int f = 10 ;
	int *mut;	// intre mutató mutató típusú változó létrehozása
	int &fi=f;	//hivatkozási típusú változó létrehozása, 
	mut=&f;		//mut pointer is f-re mutat
	cout<<"f="<<f<<" fi="<<fi<< " *mut= "<<*mut<<endl;
		
	fi=20;
	cout<<"f="<<f<<" fi="<<fi<< " *mut= "<<*mut<<endl;
	
	cout << &f << " "<<&fi << " " << mut<<" "<<&mut << endl;
	// az elsõ 3 ugyanoda mutat a 4. nem ( a mutató címe)
	system("pause");
	return 0;
	}       
