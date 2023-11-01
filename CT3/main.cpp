/*
 * main.cpp
 *
 *  Created on: Nov 1, 2023
 *      Author: Emran
 */


#include <bits/stdc++.h>
using namespace std;

int main() {
    // Declaring variables
    int a, b, c;

    // taking input from the user
   cout << "Enter three integer values: ";
   cin >> a >> b >> c;

    // Creating pointers and allocating memory dynamically
    int* ptrA = new int;
    int* ptrB = new int;
    int* ptrC = new int;

    // Storing values in the dynamic memory through the pointers
    *ptrA = a;
    *ptrB = b;
    *ptrC = c;

    // Displaying the contents of variables and pointers
    cout << "Values: " << a << ", " << b << ", " << c << endl;
     cout << "Pointers: " << *ptrA << ", " << *ptrB << ", " << *ptrC << endl;

    // Deallocating the dynamic memory
    delete ptrA;
    delete ptrB;
    delete ptrC;

    return 0;
}

