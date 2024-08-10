#include <iostream>
#include <ctime>

using std::cin;
using std::cout;
using std::string;

int main()
{
    srand(time(0));
    int amountOfPulls;

    cout << "How many pulls?\n";
    cin >> amountOfPulls;

    for (int i = 1; i <= amountOfPulls; i++)
    {
        int randNum = (rand() % 100) + 1;
        if (randNum <= 89)
        {
            cout << "⭐️⭐️⭐️\n";
        }
        else if (randNum <= 99)
        {
            cout << "⭐️⭐️⭐️⭐️\n";
        }
        else
        {
            cout << "⭐️⭐️⭐️⭐️⭐️\n";
        }
    }

    return 0;
}