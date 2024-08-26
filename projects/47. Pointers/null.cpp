#include<iostream>

using std::cout;
using std::cin;
using std::string;

int main()
{
    // Null value = a special value that means something has no value
    //              A pointer holding a null value means
    //              that pointer is not pointing at anything

    // nullptr = keyword rep. a null pointer literal
    
    // nullptrs are helpful when determining if an address
    // was successfully assigned to a pointer

    // When using pointers, be careful that your code isn't
    // dereferencing nullptr or pointing to free memory,
    // this will cause undefined behavior

    int *pointer = nullptr;
    int x = 123;

    pointer = &x;

    if (pointer == nullptr) {
        cout << "address was not assigned\n";
    } else {
        cout << "address was assigned!\n";
        cout << *pointer << '\n';
    }

    return 0;
}