// escape test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ofstream outfile;

    outfile.open("test.txt");

    outfile << "testing testing\\ntesting\ntesting";

    outfile.close();

    ifstream infile;

    infile.open("test.txt");

    string test;

    

    while (!infile.eof()) {
        getline(infile, test);
        cout << test << endl;
    }

    infile.close();


    std::cout << "\n\n\n";
}