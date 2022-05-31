// CS 103 Week 1-2 Ex 1 Base and Exponent function.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>

using namespace std;

int powerof(int base, int exponent) {
    return pow(base, exponent);
}


int main()
{
    int base, exponent, result;
    cout << "Please enter a base value: ";
    cin >> base;
    cout << "Please enter an exponent value: ";
    cin >> exponent;
    cout << "\n\n";
    cout << "The base value: " << base << "\n";
    cout << "The exponent value: " << exponent << "\n";
    result = powerof(base, exponent);
    cout << base << " ^ " << exponent << " is " << result;

    cout << "\n\n\n";
    return 0;
}
