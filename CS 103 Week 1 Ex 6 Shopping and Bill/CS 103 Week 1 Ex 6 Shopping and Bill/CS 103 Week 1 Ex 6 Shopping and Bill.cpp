// CS 103 Week 1 Ex 6 Shopping and Bill.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	system("Color 0A");

	string items[5] = { "Milk","Bread","Butter","Coke","Timtom?" };
	int quant[5] = { 0,0,0,0,0 };
	double subtotal[5] = { 0.00,0.00,0.00,0.00,0.00 };
	double price[5] = { 3.50,2.99,5.99,4.50,2.45 };
	
	string item;
	char cont = 'y';
	double total_price = 0.00;
	int i;

	cout << "Dairy Shopping Items and Price\n";
	cout << "*********************************************************************\n\n\n";

	cout << "\t\tItems\t\tPrice\n";
	cout << "*********************************************************************\n";
	for (i = 0; i < 5; i++) {
		cout << "\t\t" << items[i] << "\t\t" << price[i] << "\n";
	}
	cout << "\n*********************************************************************\n";

	while (cont == 'y' || cont == 'Y') {
		cout << "Please enter the item you wish to purchase: ";
		cin >> item;
		for (i = 0; i < 5; i++) {
			if (item == items[i]) {
				cout << "Enter the quantity: ";
				cin >> quant[i];
				subtotal[i] += (price[i]*quant[i]);
				cout << "\nDo you wish to continue? (y/n) ";
				cin >> cont;
				break;
			}
			else if (i == 4) {
				cout << "That doesn't match, please try again...\n\n\n";
				break;
			}
		}
	}

	cout << "\n\n\n\n";

	cout << "Items\t\tPrice\t\tQuantity\tSubtotal\n";
	for (i = 0; i < 5; i++) {
		if (quant[i] != 0) {
			cout << items[i] << "\t\t" << price[i] << "\t\t" << quant[i] << "\t\t" << subtotal[i] << "\n";
		}
	}

	for (i = 0; i < 5; i++) {
		total_price += subtotal[i];
	}

	cout << "\nTotal Price:\t\t\t\t\t" << total_price;

	


	cout << "\n\n\n";
	return 0;
}