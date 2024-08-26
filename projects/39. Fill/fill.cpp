#include<iostream>

using std::cout;
using std::cin;
using std::string;

int main()
{
    const int SIZE = 33;
    string foods[SIZE];

    fill(foods, foods + (SIZE/3), "pizza");
    fill(foods + (SIZE/3), foods + 2 * (SIZE/3), "burger");
    fill(foods + 2 * (SIZE/3), foods + SIZE, "noodle");
    for (string food : foods) {
        cout << food << '\n';
    }

    return 0;
}