//
// Created by blindcoalminer on 2025. 11. 21..
//

#include <iostream>
using namespace std;
float Fx(int * t, int x);
int main()
{
    int szam = 2;
    int tmb[2] = { 4.3,3.5 };

    cout << Fx(tmb, szam);			//--------------- 3 pont
}

float Fx(int * t, int x)
{
    float seged = 0;
    for (int i = 0; i < x; i++)
        seged = seged + t[i];
    if (seged > 7) return 1;
    return 0;
}