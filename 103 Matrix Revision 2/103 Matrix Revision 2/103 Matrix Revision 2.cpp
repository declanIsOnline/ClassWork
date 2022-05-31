// 103 Matrix Revision 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
using namespace std;


int main()
{

    system("Color 0A");

    int matrix_a[2][2];
    int matrix_b[2][2];
    int matrix_c[2][2] = { {0,0},{0,0}};
    int i, j, k;

    cout << "Two Dimensional -- Matrix Multiplication\n";
    cout << "****************************************\n\n";


    // fill first matrix 

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            cout << "Enter Matrix A row " << i + 1 << " and column " << j + 1 << " value: ";
            cin >> matrix_a[i][j];
        }
    }

    cout << "\n\n";

    // fill second matrix

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            cout << "Enter Matrix B row " << i + 1 << " and column " << j + 1 << " value: ";
            cin >> matrix_b[i][j];
        }
    }

    cout << "\n\n\n";

    // display first matrix
    cout << "Matrix A\n\n";

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            cout << matrix_a[i][j] << "\t";
        }
        cout << "\n";
    }

    cout << "\n\n";

    // display second matrix
    cout << "Matrix B\n\n";

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            cout << matrix_b[i][j] << "\t";
        }
        cout << "\n";
    }

    // multiply matricies and display result

    cout << "result of Matrix A * Matrix B is:\n\n";

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            for (k = 0; k < 2; k++){
                matrix_c[i][j] += (matrix_a[i][k] * matrix_b[k][j]);
            }
            cout << matrix_c[i][j] << "\t";
        }
        cout << "\n";
    }

    cout << "\n\n" << endl;
    return 0;
}


