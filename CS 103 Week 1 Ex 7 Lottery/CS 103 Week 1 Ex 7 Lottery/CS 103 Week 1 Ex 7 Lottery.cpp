// CS 103 Week 1 Ex 7 Lottery.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include <string>
using namespace std;


int main()
{
    string buyer[5];
    int ticket_number[5];
    int i;
    int winner;


    long srand(time(NULL));

    cout << "Lucky NZ Lottery Entry!!!!!\n";
    cout << "***************************\n\n";

    for (i = 0; i < 5; i++) {
        cout << "Enter your name: ";
        getline(cin, buyer[i]);
        ticket_number[i] = (rand() % 9001 + 1000);
        cout << "\nYour ticket number is: " << ticket_number[i] << "\n\n";

    }
    
    cout << "Buyers List:\n";
    cout << "************\n\n";

    for (i = 0; i < 5; i++) {
        cout << i + 1 << ". " << buyer[i] << "\t----\t" << ticket_number[i] << "\n";
    }



    winner = (rand() % 5);
    cout << "\n\n\n\n\n";
    cout << "The winner is: " << buyer[winner] << "\nWinning Ticket: " << ticket_number[winner];




    cout << "\n\n\n";
    return 0;
}
