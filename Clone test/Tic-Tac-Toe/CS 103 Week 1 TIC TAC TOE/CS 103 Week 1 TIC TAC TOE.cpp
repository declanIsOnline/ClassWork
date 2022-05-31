// Tic Tac Toe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

char game_board[9];
int turn;

// ADDING A COMMENT JUST CAUSE!!!
// adding another comment idk might delete later :/

void init_board() {
    game_board[0] = '1';
    game_board[1] = '2';
    game_board[2] = '3';
    game_board[3] = '4';
    game_board[4] = '5';
    game_board[5] = '6';
    game_board[6] = '7';
    game_board[7] = '8';
    game_board[8] = '9';

}

void draw_board() {
    system("cls");
    std::cout << "\n\n\t   TIC TAC TOE\n\n";
    std::cout << "\t     |     |     \n";
    std::cout << "\t  " << game_board[0] << "  |  " << game_board[1] << "  |  " << game_board[2] << "  \n";
    std::cout << "\t_____|_____|_____\n";
    std::cout << "\t     |     |     \n";
    std::cout << "\t  " << game_board[3] << "  |  " << game_board[4] << "  |  " << game_board[5] << "  \n";
    std::cout << "\t_____|_____|_____\n";
    std::cout << "\t     |     |     \n";
    std::cout << "\t  " << game_board[6] << "  |  " << game_board[7] << "  |  " << game_board[8] << "  \n";
    std::cout << "\t     |     |     \n";
    std::cout << "\n\n\n\n";
}

//return 1 = player one win | return 2 = player two win | return 3 = tie | return 0 = continue game
int check_win() {
    if (game_board[0] == game_board[1] && game_board[1] == game_board[2]) {
        if (game_board[0] == 'X') {
            return 1;
        }
        else {
            return 2;
        }
    }

    else if (game_board[3] == game_board[4] && game_board[4] == game_board[5]) {
        if (game_board[3] == 'X') {
            return 1;
        }
        else {
            return 2;
        }
    }

    else if (game_board[6] == game_board[7] && game_board[7] == game_board[8]) {
        if (game_board[6] == 'X') {
            return 1;
        }
        else {
            return 2;
        }
    }

    else if (game_board[0] == game_board[3] && game_board[3] == game_board[6]) {
        if (game_board[0] == 'X') {
            return 1;
        }
        else {
            return 2;
        }
    }

    else if (game_board[1] == game_board[4] && game_board[4] == game_board[7]) {
        if (game_board[1] == 'X') {
            return 1;
        }
        else {
            return 2;
        }
    }

    else if (game_board[2] == game_board[5] && game_board[5] == game_board[8]) {
        if (game_board[2] == 'X') {
            return 1;
        }
        else {
            return 2;
        }
    }

    else if (game_board[0] == game_board[4] && game_board[4] == game_board[8]) {
        if (game_board[0] == 'X') {
            return 1;
        }
        else {
            return 2;
        }
    }

    else if (game_board[2] == game_board[4] && game_board[4] == game_board[6]) {
        if (game_board[2] == 'X') {
            return 1;
        }
        else {
            return 2;
        }
    }

    else if (turn == 10) {
        return 3;
    }

    else {
        return 0;
    }
}

void player_turn() {
    std::string player_no;
    int choice;
    if (turn % 2 != 0) {
        player_no = "One";
    }
    else {
        player_no = "Two";
    }

    for (;;) {
        std::cout << "Player " << player_no << ", please select a square to mark: ";
        std::cin >> choice;

        if (choice < 1 || choice > 9) {
            std::cout << "Please enter a valid option...\n\n";
        }
        else if (game_board[(choice - 1)] == 'X' || game_board[(choice - 1)] == 'O') {
            std::cout << "Please choose a square that hasn't been marked\n\n";
        }
        else {
            if (turn % 2 != 0) {
                game_board[(choice - 1)] = 'X';
                break;
            }
            else {
                game_board[(choice - 1)] = 'O';
                break;
            }
        }
    }
    turn++;
    /*system("cls");*/

}

void computer_turn() {
    time_t srand(time(NULL));
    int choice;
    for (;;) {
        choice = rand() % 9;
        if (game_board[choice] == 'X' || game_board[choice] == 'O') {
            choice = 0;
        }
        else {
            game_board[choice] = 'O';
            break;
        }
    }

    turn++;
}

void single_player_game() {
    init_board();
    turn = 1;


    while (check_win() == 0) {
        draw_board();
        if (turn % 2 != 0) {
            player_turn();
        }
        else {
            computer_turn();
        }

    }
    if (check_win() == 1) {
        draw_board();
        std::cout << "Congrats Player One, You Win!!!\n\n";
    }
    else if (check_win() == 2) {
        draw_board();
        std::cout << "Sorry Player One, The CPU Won This Round!!!\n\n";
    }
    else if (check_win() == 3) {
        draw_board();
        std::cout << "It's a draw!!!\n\n";
    }
    std::cout << "1. Single Player\n";
    std::cout << "2. Multi Player\n";
    std::cout << "3. Quit\n";
}

void multi_player_game() {
    init_board();
    turn = 1;


    while (check_win() == 0) {
        draw_board();
        player_turn();
    }
    if (check_win() == 1) {
        draw_board();
        std::cout << "Congrats Player One, You Win!!!\n\n";
    }
    else if (check_win() == 2) {
        draw_board();
        std::cout << "Congrats Player Two, You Win!!!\n\n";
    }
    else if (check_win() == 3) {
        draw_board();
        std::cout << "It's a draw!!!\n\n";
    }
    std::cout << "1. Single Player\n";
    std::cout << "2. Multi Player\n";
    std::cout << "3. Quit\n";
}

int main()
{
    int game_mode;
    init_board();
    draw_board();

    std::cout << "1. Single Player\n";
    std::cout << "2. Multi Player\n";
    std::cout << "3. Quit\n";

    for (;;) {
        std::cout << "\n\nPlease Select an Option: ";
        std::cin >> game_mode;
        if (game_mode == 1) {
            single_player_game();
        }
        else if (game_mode == 2) {
            multi_player_game();
        }
        else if (game_mode == 3) {
            break;
        }
        else {
            std::cout << "Please try again, and enter a valid number...\n";
        }
    }

    std::cout << "\n\n\n";
    return 0;
}

