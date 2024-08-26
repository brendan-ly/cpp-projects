#include<iostream>

using std::cout;
using std::cin;
using std::string;

void swap(string &x, string &y);

int main()
{
    string x = "Root beer";
    string y = "Fanta";

    swap(x,y);

    cout << "X: " << x << '\n';
    cout << "Y: " << y << '\n';

    return 0;
}

// Pass by value: creating copies of original values
// Pass by reference: allows you to change original values by passing the memory address

void swap(string &x, string &y) {
    string temp;
    temp = x;
    x = y;
    y = temp;
}