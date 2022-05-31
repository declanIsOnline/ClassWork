// CS 103 Week 1-2 Ex 3 Sum of Previous Int.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int sumOfPreceding(int start) {
    int result = 0;
    for (int i = start; i > 0; i--) {
        result += i;
    }
    return result;
}

int main()
{
    int user_num;
    
    cout << "Please enter a number: ";
    cin >> user_num;
    cout << sumOfPreceding(user_num);


    cout << "\n\n\n";
    return 0;
}