// macros.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

#define MIN(a,b) ((a) < (b) ? a : b)
#define MAKEPOS(i) ((i) < (0) ? (i*-1) : (i))

int main()
{
    int x, y;
    int i;

    x = 1000;
    y = 230;

    cout << "The Minimum is " << MIN(x, y) << endl;

    cout << "\nEnter a a number: ";
    cin >> i;
    cout << "IT IS DONE...\t\t" << MAKEPOS(i);

    std::cout << "\n\n\n";
    return 0;
}