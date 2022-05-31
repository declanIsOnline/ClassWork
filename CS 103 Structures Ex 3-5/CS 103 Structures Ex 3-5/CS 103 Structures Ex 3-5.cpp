// CS 103 Structures Ex 3-5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{
    struct location {
        double latitude, longitude, height;

        location(double lat = 0.00, double lon = 0.00, double h = 0.00) {
            latitude = lat;
            longitude - lon;
            height = h;
        }
    };

    struct city {
        std::string city_name;
        location position;
    };

    city AKL;
    AKL.city_name = "Auckland";
    AKL.position.latitude = -15.36;
    AKL.position.longitude = 35.94;
    AKL.position.height = 2.65;

    std::cout << AKL.city_name << std::endl;
    std::cout << AKL.position.latitude << std::endl;
    std::cout << AKL.position.longitude << std::endl;
    std::cout << AKL.position.height << std::endl;

    std::cout << "\n\n\n";
    return 0;
}
