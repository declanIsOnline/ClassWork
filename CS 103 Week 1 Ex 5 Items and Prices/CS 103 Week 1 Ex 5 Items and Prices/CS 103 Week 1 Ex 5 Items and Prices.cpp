// CS 103 Week 1 Ex 5 Items and Prices.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	system("Color 0A");

	string items[5] = { "Milk","Bread","Butter","Coke","Timtom?"};
	double price[5] = { 3.50,2.99,5.99,4.50,2.45 };

	cout << "Dairy Shopping Items and Price\n";
	cout << "*********************************************************************\n\n\n";

	cout << "\t\tItems\t\tPrice\n";
	cout << "*********************************************************************\n";
	for (int i = 0; i < 5; i++) {
		cout << "\t\t" << items[i] << "\t\t" << price[i] << "\n";
	}
	cout << "\n*********************************************************************\n";
}