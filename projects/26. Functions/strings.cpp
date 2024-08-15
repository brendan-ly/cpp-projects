#include<iostream>

using std::cout;
using std::cin;
using std::string;

string concatStrings(string str1, string str2);

int main()
{
    string firstName = "Sam";
    string lastName = "Parker";
    string fullName = concatStrings(firstName, lastName);

    cout << "Hello " << fullName << '\n';

    return 0;
}

string concatStrings(string str1, string str2) {
    return str1 + " " + str2;
}