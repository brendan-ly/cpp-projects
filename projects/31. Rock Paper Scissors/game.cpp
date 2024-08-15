#include<iostream>
#include <ctime>

using std::cout;
using std::cin;
using std::string;

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);


int main()
{
    char userChoice;
    char computerChoice;
    userChoice = getUserChoice();
    cout << "Your choice: ";
    showChoice(userChoice);

    computerChoice = getComputerChoice();
    cout << "Computer's choice: ";
    showChoice(computerChoice);

    chooseWinner(userChoice, computerChoice);


    return 0;
}

char getUserChoice() {
    char player;
    cout << "Welcome to the Rock Paper Scissors Game!\n";
    
    do {
        cout << "Choose one of the following\n";
        cout << "****************************************\n";
        cout << "'r' for rock\n";
        cout << "'p' for paper\n";
        cout << "'s' for scissors\n";
        cin >> player;
    } while (player != 'r' && player != 'p' && player != 's');

    return player;
}

char getComputerChoice() {
    srand(time(NULL));
    int num = (rand() % 3) + 1;

    switch (num) {
        case 1:
            return 'r';
            break;
        case 2:
            return 'p';
            break;
        case 3:
            return 's';
            break;
        default:
            cout << "Error";
            return 0;
            break;
    }
    
}
void showChoice(char choice) {
    if (choice == 'r') {
        cout << "Rock\n";
    } else if (choice == 'p') {
        cout << "Paper\n";
    } else {
        cout << "Scissors\n";
    }
}
void chooseWinner(char player, char computer) {
    switch (player) {
        case 'r':   if (computer == 'r') {
                        cout << "It's a tie!\n";
                    }
                    else if (computer == 'p') {
                        cout << "You lose!\n";
                    } else {
                        cout << "You win!\n";
                    }
        break;
        case 'p':   if (computer == 'r') {
                        cout << "You win!\n";
                    }
                    else if (computer == 'p') {
                        cout << "It's a tie!\n";
                    } else {
                        cout << "You lose!\n";
                    }
        break;
        case 's':   if (computer == 'r') {
                        cout << "You lose!\n";
                    }
                    else if (computer == 'p') {
                        cout << "You win!\n";
                    } else {
                        cout << "It's a tie!\n";
                    }
        break;
    }
}