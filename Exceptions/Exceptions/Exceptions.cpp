// Exceptions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

int main()
{
    int arr[5] = { 0,0,0,0,0 };
    int n, i, x;

    try {
        cout << "How many numbers would you like to enter (between One and Five)? ";
        cin >> n;
        
        if (n < 0 || n > 5) {
            throw(n);
        }

        for (i = 0; i < n; i++) {
            cout << "Please enter a value for index position " << i << ": ";
            cin >> x;
            arr[i] = x;
        }

        for (i = 0; i < 5; i++) {
            cout << i << ") " << arr[i] << std::endl;
        }
        
        cout << "\nEnter the index of the number you would like to delete: ";
        cin >> n;
        
        if (n < 0 || n >= 5) {
            throw(n);
        }

        // cases deliberately fall through
        switch (n) {
        case 0:
            arr[0] = arr[1];
            [[fallthrough]];
            
        case 1:
            arr[1] = arr[2];
            [[fallthrough]];

        case 2:
            arr[2] = arr[3];
            [[fallthrough]];

        case 3:
            arr[3] = arr[4];
            [[fallthrough]];

        case 4:
            arr[4] = 0;
            break;
        }

        for (i = 0; i < 5; i++) {
            cout << i << ") " << arr[i] << std::endl;
        }

    }
    catch (int number) {
        cout << n << " is not in range..."; 
    }
    
    

    cout << "\n\n\n";
    return 0;
}