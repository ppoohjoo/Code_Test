#include <iostream>
#include <stdio.h>
using namespace std;

void a2439() {



    int x;
    cin >> x;


    for (int i = 1; i <= x; i++) {
        for (int k = 0; k < x - i; k++) {
            cout << " ";
        }
        for (int k = 0; k < i; k++) {
            cout << "*";
        }
        cout << "\n";
    }






}