// CS 103 Week 1-2 Ex 4 Cube a Number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>

using namespace std;

int cubeNum(int x) {
    int result;
    result = pow(x, 3);
    return result;
}

int main()
{
    int user_num;
    cout << "Please ener a number: ";
    cin >> user_num;

    cout << "Cube of " << user_num << " is: " << cubeNum(user_num);


    cout << "\n\n\n";
    return 0;
}