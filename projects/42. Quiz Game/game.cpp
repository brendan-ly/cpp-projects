#include<iostream>

using std::cout;
using std::cin;
using std::string;

int main()
{
    string questions[] = {
        "1. What year was Java created?",
        "2. Who invented Javascript: ",
        "3. What is the keyword for printing output in C++?",
        "4. What does CSS stand for?"
    };

    string options[][4] = {
        {"A. 1995", "B. 1975", "C. 1985", "D. 1989"},
        {"A. James Gosling", "B. Brendan Eich", "C. Dennis Ritchie", "D. Guido van Rossum"},
        {"A. print", "B. console ",  "C. cout ", "D. cin"},
        {"A. Colorful Style Sheets", "B. Creative Style Sheets", "C. Computer Style Sheets", "D. Cascading Style Sheets"}
    };

    char answerKey[] = {'A', 'B', 'C', 'D'};

    int size = sizeof(questions) / sizeof(questions[0]);
    char guess;
    int score;

    for (int i = 0; i < size; i++) {
        cout << "***********************" << '\n';
        cout << questions[i] << '\n';
        cout << "***********************" << '\n';

        for (int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++) {
            cout << options[i][j] << '\n';
        }

        cin >> guess;
        guess = toupper(guess);

        if (guess == answerKey[i]) {
            cout << "CORRECT\n";
            score++;
        } else {
            cout << "INCORRECT\n";
            cout << "Answer: " << answerKey[i] << '\n';
        }
    }

    cout << "Your quiz score: " << score << "/" << size << '\n';

    return 0;
}
