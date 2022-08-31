// pointer revisin VOL 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

void even_odd(int* index, int size) {
    int even = 0, odd = 0;
    for (int i = 0; i < 10; i++) {
        if (*(index + i) % 2 == 0) {
            even++;
        }
        else {
            odd++;
        }
    }
   
    cout << even << " even numbers in the list, and " << odd << " odd numbers in the list;" << endl;
};

void swap_names(string* first_name, string *surname) {
    string temp = *first_name;
    *first_name = *surname;
    *surname = temp;

}

int main()
{
    string first_name;
    string last_name;

    string* first;
    string* last;

    first = &first_name;
    last = &last_name;

    cout << "enter your first name: ";
    cin >> first_name;

    cout << "enter your last name: ";
    cin >> last_name;

    cout << "Hi " << first_name << " " << last_name << "!" << endl;
    cout << "I'm bout to fuck ur name up..." << endl;
    swap_names(first, last);
    cout << "Hi " << first_name << " " << last_name << "!" << endl;


}



//pointer notation for arrays for dummys
/*int list[10];

    for (int i = 0; i < 10; i++) {
        cout << "Please enter a value for index position " << i << ": ";
        cin >> list[i];
    }

    cout << "\n\n";
    for (int i = 0; i < 10; i++) {
        cout << *(list + i) << " ";
    }
    cout << "\n\n";

    even_odd(list, 10);*/


//add numbers with pointers
/*int x;
int y;
int* ptr1;
int* ptr2;

ptr1 = &x;
ptr2 = &y;

std::cout << "Please enter an X value: ";
std::cin >> x;

std::cout << "Please enter a Y value: ";
std::cin >> y;
std::cout << std::endl;


std::cout << "X + Y = " << *ptr1 + *ptr2;*/
