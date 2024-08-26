#include<iostream>

using std::cout;
using std::cin;
using std::string;

double getTotal(double prices[], int size);

int main()
{
    double prices[] = {43.56, 15.19, 100.99};
    int size = sizeof(prices)/sizeof(double);
    double total = getTotal(prices, size);

    cout << "$" << total << '\n';

    return 0;
}

double getTotal(double prices[], int size) {
    double total = 0;
    for (int i = 0; i < size; i++) {
        total += prices[i];
    }

    return total;
}