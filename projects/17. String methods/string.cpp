#include<iostream>

using std::cout;
using std::string;
using std::cin;

// More C++ string methods: https://cplusplus.com/reference/string/string/

int main()
{
    string name;
    cout << "Enter your name: ";
    std::getline(cin, name);

    if (name.empty()) {
        cout << "You didn't enter your name.\n";
    }
    else {
        cout << "You entered your name! " << name << '\n';
    }

    if (name.length() > 12) {
        cout << "Your name can't be over 12 characters long.\n";
    }
    else {
        cout << "Welcome " << name << '\n';
    }

    return 0;
}