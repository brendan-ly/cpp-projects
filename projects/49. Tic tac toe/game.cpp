#include<iostream>
#include <ctime>

using std::cout;
using std::cin;
using std::string;

void drawBoard(char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
bool checkWinner(char *spaces, char player, char computer);
bool checkTie(char *spaces);

int main()
{   
    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'X';
    char computer = 'O';
    bool running = true;

    drawBoard(spaces);

    return 0;
}


// **************************************
//               FUNCTIONS
// **************************************
void drawBoard(char *spaces) {
    cout << "     |     |     " << '\n';
    cout << "     |     |     " << '\n';
    cout << "     |     |     " << '\n';
}

void playerMove(char *spaces, char player) {

}

void computerMove(char *spaces, char computer) {

}

bool checkWinner(char *spaces, char player, char computer) {

}

bool checkTie(char *spaces) {

}