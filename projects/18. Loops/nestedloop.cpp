#include <iostream>

using std::cin;
using std::cout;
using std::string;

int main()
{
    int rows;
    int columns;
    char symbol;

    cout << "How many rows?: ";
    cin >> rows;

    cout << "How many columns?: ";
    cin >> columns;

    cout << "What symbol to use?: ";
    cin >> symbol;



    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            cout << symbol << ' ';
        }
        cout << '\n';
    }

    cout << '\n';

    return 0;
}
