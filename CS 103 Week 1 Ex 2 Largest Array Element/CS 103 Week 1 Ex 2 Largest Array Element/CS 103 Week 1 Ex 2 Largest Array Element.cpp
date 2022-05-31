// CS 103 Week 1 Ex 2 Largest Array Element.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
using namespace std;


int main()
{
	system("Color 0A");

	int i;
	int largest = 0;
	int len;
	int arr[100];

	cout << "Enter the number of data values: ";
	cin >> len;
	for (i = 0; i < len; i++) {
		cout << "Enter value " << i + 1 << ": ";
		cin >> arr[i];
		if (arr[i] > largest) {
			largest = arr[i];
		}
	}

	cout << "largest element: " << largest;
	


	cout << "\n\n\n";
	return 0;
}
