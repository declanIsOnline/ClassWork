// CS 103 Week 1 Ex 4 Scalar Multiplication of 2D Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
using namespace std;


int main()
{
	int rows, columns, scalar;
	int i, j;
	cout << "Enter the number of rows for the matrix: ";
	cin >> rows;
	cout << "Enter the number of columns for the matrix: ";
	cin >> columns;

	int matrix[10][10];

	cout << "Enter the Elements of the matrix:\n";
	for (i = 0; i < rows; i++) {
		for (j = 0; j < columns; j++){
			cout << "Enter element Row " << i + 1 << ", Column " << j + 1 << ": ";
			cin >> matrix[i][j];
		}
	}

	cout << "Entered Matrix\n\n";
	for (i = 0; i < rows; i++) {
		for (j = 0; j < columns; j++){
			cout << matrix[i][j] << " ";
		}
		cout << "\n\n";
	}

	cout << "Enter scalar value to mulitply with the matrix: ";
	cin >> scalar;

	cout << "Matrix after scalar multiplication\n\n";
	for (i = 0; i < rows; i++) {
		for (j = 0; j < columns; j++) {
			cout << matrix[i][j] * scalar << " ";
		}
		cout << "\n\n";
	}



	cout << "\n\n\n";
	return 0;
}

