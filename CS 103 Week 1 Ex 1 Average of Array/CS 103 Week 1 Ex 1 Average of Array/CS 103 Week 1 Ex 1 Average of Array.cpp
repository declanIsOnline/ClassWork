// CS 103 Week 1 Ex 1 Average of Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
#include <array>
using namespace std;

int main()
{
    system("Color 0A");
    int num_values = 0;
    float avg = 0;
    float arr[100];
    int i;

    while(num_values <= 0){
        cout << "Please enter a number of values greater than 0 and less than 100: ";
        cin >> num_values;
        if (num_values > 100) {
            num_values = 0;
            cout << "That number is too large, please try again!\n\n";
        }
    }

    
    for (i = 0; i < num_values; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> arr[i];
        avg += arr[i];
    }
    cout << "\n\n";
    cout << "Average is: " << avg / num_values;


    cout << "\n\n\n" << endl;
    return 0;
}