#include<iostream>

using std::cout;
using std::cin;
using std::string;
using std::getline;

int main()
{
    string name;

    while (name.empty()) {
        cout << "Enter your name: ";
        getline(cin, name);
    }
    
    cout << "Hello " << name << '\n';


    return 0;
}