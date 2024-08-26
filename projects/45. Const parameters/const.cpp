#include<iostream>

using std::cout;
using std::cin;
using std::string;

// const parameter = parameter that is effectively read-only
//                   code is more secure and conveys intent 
//                   useful for references and pointers

void printInfo(const string &name, const int &age);

int main()
{
    string name = "Sam";
    int age = 21;

    printInfo(name, age);
    return 0;
}

void printInfo(const string &name, const int &age) {
    cout << name << '\n';
    cout << age << '\n';
}