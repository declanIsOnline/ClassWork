// CS 103 Week 1-1 Ex 2 Void Fucntion Pyramid.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
using namespace std;

void print_pyramid(int height) {
    int i, j, k;

    //outer loop iterates as many times as the value of the height variable and seperates each line of the pyramid
    //j loop prints out a decreasing number of spaces (starting with the height value) to center each step of the pyamid
    //k loop prints 2 more asterisks with each step of the pyramid
    for (i = 0; i < height; i++) {
        for (j = height; j > i; j--) {
            cout << " ";
        }
        for (k = 0; k <= i; k++) {
            cout << "**";
        }
        cout << "\n";
    }
}

int main()
{
    int height = 0;
    while (height <= 0 || height > 30) {
        cout << "Please enter a number between 1 & 30 to draw a pyramid of that height: ";
        cin >> height;
    }

    cout << "\n\n\n";
    print_pyramid(height);

    cout << "\n\n\n";
    return 0;
}