// CS 103 Week 2 Structures Ex 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{
    struct movie {
        std::string name, director;
        int release_year;

        movie(std::string n = "", std::string d = "", int y = 0) {
            name = n;
            director = d;
            release_year = y;
        }
    };

    movie user1;
    
    std::cout << "Please enter the infor for your favorite movie\n";
    std::cout << "Name: ";
    std::getline(std::cin, user1.name);
    std::cout << "Director: ";
    std::getline(std::cin, user1.director);
    std::cout << "Release year: ";
    std::cin >> user1.release_year;

    std::cout << "Name: " << user1.name << "\n";
    std::cout << "Director: " << user1.director << "\n";
    std::cout << "Release Year: " << user1.release_year << "\n";

    
    std::cout << "\n\n\n";
    return 0;
}
