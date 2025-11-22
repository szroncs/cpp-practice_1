//
// Created by blindcoalminer on 2025. 11. 21..
//
// 2, Mit ír ki az alábbi program? Válaszait írja a pontozott vonalakra!
#include<iostream>
using namespace std;
int main()
{
    int a = 5, b = 2, c = 10, er;
    er = a % b * c;
    cout << "\n eredmeny= " << er;		//......................2 pont

    b = 2;
    double val_er = 1 / 2 * 2 + 12;
    cout << "\n eredmeny=" << val_er;//.....................2 pont


    int i = 0, tmb[5] = { 1,2,3,4,5 };
    do {
        tmb[i] = 3 * i;
        cout << "\n tmb[" << i << "]= " << tmb[i];
        i++;
    } while (i < 3);
    cout << "\n tmb[2]= " << tmb[2];		//......................2 pont

    a = 2; b = 15;
    switch (a)
    {
        case 0: b = b + 1;
        case 1: b = 3;
        case 2: b = 100;
        case 3: b = 350;
    }
    cout << "\n b= " << b;			//......................2 pont
    return 0;
}