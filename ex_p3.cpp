//
// Created by blindcoalminer on 2025. 11. 21..
//

#include <iostream>
using namespace std;

int main() {
    int f = 20, * mut;
    int& fi = f;
    mut = &f;
    cout << "f=" << f <<" *mut= " << *mut << endl;	//---------------	2pont
    fi = f**mut;
    cout << "fi=" << fi << " *mut= " << *mut << endl;   //---------------	2pont
}