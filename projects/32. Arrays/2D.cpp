#include<iostream>

using std::cout;
using std::cin;
using std::string;

int main()
{
    string cars[][3] = {{"Mustang", "Escape", "F-150"},
                       {"Corvette", "Equinox", "Silverado"},
                       {"Challenger", "Durango", "Ram 1500"}};

    int rows = sizeof(cars) / sizeof(cars[0]);
    int columns = sizeof(cars[0]) / sizeof(cars[0][0]);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << cars[i][j] << " ";
        }
        cout << '\n';
    }

    return 0;
}