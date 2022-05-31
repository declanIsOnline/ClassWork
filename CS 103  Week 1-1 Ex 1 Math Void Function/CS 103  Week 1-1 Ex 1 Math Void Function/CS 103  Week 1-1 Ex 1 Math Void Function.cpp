// CS 103  Week 1-1 Ex 1 Math Void Function.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>
using namespace std;

void domath(float x, float y) {
    cout << x << " + " << y << " = " << (x + y) << "\n";
    cout << x << " - " << y << " = " << (x - y) << "\n";
    cout << x << " * " << y << " = " << (x * y) << "\n";
    cout << x << " / " << y << " = " << (x / y) << "\n";
}


int main()
{
    float a, b;
    cout << "Please enter a number: ";
    cin >> a;
    cout << "Please enter another number: ";
    cin >> b;
    cout << "\n\n";
    domath(a, b);

    cout << "\n\n\n";
    return 0;
}