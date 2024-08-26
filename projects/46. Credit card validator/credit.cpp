#include<iostream>

using std::cout;
using std::cin;
using std::string;

int getDigit(const int number);
int sumOddDigits(const string cardNumber);
int sumEvenDigits(const string cardNumber);


int main()
{
    string cardNumber;
    int result = 0;

    cout << "Please enter a credit card number #: ";
    cin >> cardNumber;

    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);

    if (result % 10 == 0) {
        cout << cardNumber << " is valid.\n";
    } else {
        cout << cardNumber << " is not valid.\n";
    }

    return 0;
}

// **********************
//       FUNCTIONS
// **********************

int getDigit(const int number) {
    // 10 -> 0 + 1 -> 1
    // 12 -> 2 + 1 -> 3
    // 14 -> 4 + 1 -> 5
    // 16 -> 6 + 1 -> 7
    // 18 -> 8 + 1 -> 9

    return number % 10 + (number / 10 % 10);
}
int sumOddDigits(const string cardNumber) {

    int sum = 0;

    for(int i = cardNumber.size() - 1; i >= 0; i-=2) {
        sum += cardNumber[i] - '0';
    }

    return sum; 

}
int sumEvenDigits(const string cardNumber) {

    int sum = 0;

    for(int i = cardNumber.size() - 2; i >= 0; i-=2) {
        sum += getDigit((cardNumber[i] - '0') * 2);
    }

    return sum; 
}