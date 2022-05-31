// CS 103 Weel 1 Ex 3 Smalled Array Element.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
using namespace std;


int main()
{
	system("Color 0A");

	int i;
	int smallest = 0;
	int len;
	int arr[100];

	cout << "Enter the number of data values: ";
	cin >> len;
	for (i = 0; i < len; i++) {
		cout << "Enter value " << i + 1 << ": ";
		cin >> arr[i];
		if (i == 0) {
			smallest = arr[i];
		}
		else {
			if (arr[i] < smallest) {
				smallest = arr[i];
			}
		}
	}

	cout << "smallest element: " << smallest;



	cout << "\n\n\n";
	return 0;
}
