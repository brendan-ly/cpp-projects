#include<iostream>

using std::cout;
using std::cin;
using std::string;

void bubbleSort(int array[], int size);

int main()
{
    int array[] = {10, 1, 5, 3, 20, 50, 9};
    int size = sizeof(array)/sizeof(array[0]);

    bubbleSort(array, size);

    for (int element : array) {
        cout << element << " ";
    }
    cout << '\n';

    return 0;
}

void bubbleSort(int array[], int size) {
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}