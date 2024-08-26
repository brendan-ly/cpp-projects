#include<iostream>

using std::cout;
using std::cin;
using std::string;

int main()
{
    // pointers = variable that stores a memory address of another variable
    //            sometimes it's easier to work with an address

    // & address-of operator
    // * dereference operator

    string name = "Jackie";
    int age = 25;
    string freePizzas[3] = {"cheese pizza", "pepperoni pizza", "sausage pizza"};

    string *pName = &name;
    int *pAge = &age;
    string *pFreePizzas = freePizzas;

    cout << *pName << '\n';
    cout << *pAge << '\n';
    cout << freePizzas << '\n';

    return 0;
}