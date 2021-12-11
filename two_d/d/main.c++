/*
 * main.c++
 *
 *  Created on: Nov 18, 2021
 *      Author: abdelazim
 */

#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
    // Complete the code.
    int n = 0; long l = 0000; char ch; float f = 00.000; double d = 00.0000;
    cin >> n >> l >> ch >> f >> d;
    cout << n << endl << l << endl << ch << endl << fixed << setprecision(3)<< f << endl << fixed << setprecision(9) << d<< endl;
    return 0;
}


