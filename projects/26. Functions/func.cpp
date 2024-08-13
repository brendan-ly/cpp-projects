#include<iostream>

using std::cout;
using std::cin;
using std::string;

// program read from top-down

void happyBirthday(string name, int age);

int main()
{

    string name = "Brian";
    int age = 21;

    happyBirthday(name, age);
    happyBirthday(name, age);
    happyBirthday(name, age);

    return 0;
}

void happyBirthday(string name, int age) {
    cout <<"Happy birthday to you! \n";
    cout <<"Happy birthday to you! \n";
    cout <<"Happy birthday dear " << name << ",\n";
    cout <<"Happy birthday to you! \n";
    cout <<"You are " << age << " years old!\n\n";
}

