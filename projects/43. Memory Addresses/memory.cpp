#include<iostream>

using std::cout;
using std::cin;
using std::string;

int main()
{
    // memory address = a location in memory where data is stored
    // a memory address can be accessed with & (address-of operator)

    string name = "Jerry";
    int age = 25;
    bool student = true;

    cout << &name << '\n';
    cout << &age << '\n';
    cout << &student << '\n';

    return 0;
}