#include<iostream>

using std::cout;
using std::cin;
using std::string;

int main()
{
    string test[] = {"ok", "hi"};

    cout << sizeof(test) << '\n';
    
    for (int i = 0; i <= sizeof(test)/sizeof(string); i++) {
        cout << test[i] << '\n';
    }

}
