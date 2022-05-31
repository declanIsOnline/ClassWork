// CS 103 Week 2 Structures Ex 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{
    struct Account {
        std::string account_number;
        double account_balance;
        double interest_rate;
        double average_monthly_bal;

        Account(std::string acc_no = "00-000-00000-00", double bal = 0.00, double int_rate = 0.00, double avg_bal = 0.00) {
            account_number = acc_no;
            account_balance = bal;
            interest_rate = int_rate;
            average_monthly_bal = avg_bal;
        }

    };

    Account user1;
    std::cout << user1.account_number;
    user1.account_balance = 19851.29;
    std::cout << user1.account_balance;
    
    
    std::cout << "\n\n\n";
    return 0;
}

