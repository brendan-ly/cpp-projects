#include<iostream>

using std::cout;
using std::cin;
using std::string;

int main()
{
    string foods[5];
    int size = sizeof(foods)/sizeof(foods[0]);
    string temp;

    for (int i = 0; i < size; i++) {
        cout << "Enter your #" << i + 1 << " favorite food ('q' to exit): ";
        std::getline(cin, temp);
        if (temp == "q") {
            break;
        } 
        else if (temp == "" || temp == " ") {
            cout << "Empty input, exited program\n";
            break;
        }
        else {
            foods[i] = temp;
        }
    }

    cout << "You like the following foods: \n";

    for (int i = 0; !foods[i].empty(); i++) {
        cout << foods[i] << '\n';
    }

    return 0;
}