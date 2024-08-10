#include<iostream>

using std::cout;
using std::cin;
using std::string;

int main()
{
    int number;

    do {
        cout << "Enter a positive number: ";
        cin >> number;
    } while (number < 0);

    cout << "The number is " << number << '\n';

    return 0;
}