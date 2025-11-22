//
// Created by blindcoalminer on 10/18/25.
//

#include <iostream>
using namespace std;

void csere(int *x, int *y);
int main() {
    int szam1, szam2;
    cout << "elso szam: ";
    cin>> szam1;
    cout << "masodik szam: ";
    cin>> szam2;
    cout << "csere elott: szam1= " << szam1 << " szam2= " << szam2 << endl;
    csere(&szam1, &szam2);
    cout << "csere utan: szam1= " << szam1 << " szam2= " << szam2 << endl;
    cin.ignore().get();
    return 0;
}

void csere(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}