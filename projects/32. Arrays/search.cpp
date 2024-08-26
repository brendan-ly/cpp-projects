#include<iostream>

using std::cout;
using std::cin;
using std::string;

int searchArray(int array[], int size, int element);

int main()
{
    int numbers[] = {1, 21, 0, 44, 51, 6};
    int size = sizeof(numbers)/sizeof(int);
    int index;
    int myNum;
    
    cout << "Enter element to search for: ";
    cin >> myNum;

    index = searchArray(numbers, size, myNum);

    if (index != -1) {
        cout << myNum << " is at index " << index << '\n';
    } else {
        cout << myNum << " is not in the array " << '\n';
    }


    return 0;
}

int searchArray(int array[], int size, int element) {

    for (int i = 0; i < size; i++) {
        if (array[i] == element) {
            return i;
        }
    }
    return -1;
}