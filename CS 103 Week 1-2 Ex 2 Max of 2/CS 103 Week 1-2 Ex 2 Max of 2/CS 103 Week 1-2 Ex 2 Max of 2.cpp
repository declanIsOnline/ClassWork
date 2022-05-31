// CS 103 Week 1-2 Ex 2 Max of 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>

using namespace std;

int maxOfTwo(int x, int y) {
	if (x > y) {
		return x;
	}
	else {
		return y;
	}
}

int main()
{
	int x, y;

	cout << "Please enter the first number: ";
	cin >> x;
	cout << "Please enter the second number: ";
	cin >> y;

	cout << "The maximum of " << x << " and " << y << " is: " <<  maxOfTwo(x, y);


	cout << "\n\n\n";
	return 0;
}

