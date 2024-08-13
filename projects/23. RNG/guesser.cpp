#include<iostream>

using std::cout;
using std::cin;
using std::string;

int main()
{
    int num;
    int guess;
    int tries = 0;

    srand(time(NULL));
    num = (rand() % 100) + 1;

    cout << "***** NUMBER GUESSING GAME *****\n";

    do {
        cout << "Enter a guess between (1-100): ";
        cin >> guess;
        tries++;

        if (guess > num) {
            cout << "Too high!\n";
        } else if (guess < num) {
            cout << "Too low!\n";
        } else {
            cout << "Congratulations! # of tries: " << tries << '\n';
        }
    } while (guess != num);

    return 0;
}