// CS 103 Week 1-2 Ex 5 Evaluate Number Properties.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

bool check_prime(int n) {
    bool is_prime = true;
    if (n == 0 || n == 1) {
        is_prime = false;
    }

    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            is_prime = false;
            break;
        }
    }
    return is_prime;

}

bool check_armstrong(int n) {
    bool is_armstrong;
    int digits[16];
    int count_digit = (int(log10(n) + 1));
    int n_temp;

    n_temp = n;

    for (int i = count_digit - 1; i >= 0; i--) {
        digits[i] = n_temp % 10;
        n_temp /= 10;
    }
    n_temp = 0;
    for (int i = 0; i <= count_digit - 1; i++) {
        //std::cout << digits[i];
        n_temp += (pow(digits[i], count_digit));
    }

    //std::cout << "\n\n\nN: " << n << " N Temp: " << n_temp << "\n";

    if (n_temp == n) {
        is_armstrong = true;
    }
    else {
        is_armstrong = false;
    }


    return is_armstrong;
}

int main()
{
    int n;
    std::cout << "Please enter a positive int: ";
    std::cin >> n;

    if (check_prime(n)) {
        std::cout << n << " is a prime number\n";
    }
    else {
        std::cout << n << " is not a prime number\n";
    }
    if (check_armstrong(n)) {
        std::cout << n << " is an armstrong number\n";
    }
    else {
        std::cout << n << " is not an armstrong number\n";
    }


    std::cout << "\n\n\n";
    return 0;

}
