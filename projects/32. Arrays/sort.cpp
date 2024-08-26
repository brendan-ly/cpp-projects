#include<iostream>

using std::cout;
using std::cin;
using std::string;

void selectionSort(int array[], int size);

int main()
{
    int myNumbers[] = {12, 1, 25, 38, 5, 100};
    int size = sizeof(myNumbers)/sizeof(int);
    
    selectionSort(myNumbers, size);

    for (int i = 0; i < size; i++) {
        cout << myNumbers[i] << " ";
    }

    cout << '\n';

    return 0;
}

void selectionSort(int array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int indexSmallest = i;
        for (int j = i + 1; j < size; j++) {
            if (array[j] < array[indexSmallest]) {
                indexSmallest = j;
            }
        }
        int temp = array[i];
        array[i] = array[indexSmallest];
        array[indexSmallest] = temp;
    }
}

