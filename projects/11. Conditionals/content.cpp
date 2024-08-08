#include <iostream>

int main() {
    
    int x = 10;
    int y = 20;

    if (x > y) {
        std::cout << "x is greater than y" << '\n';
    } else if (x < y) {
        std::cout << "x is less than y" << '\n';
    } else {
        std::cout << "x is equal to y" << '\n';
    }

    int month;
    std::cout << "Enter a month number: ";
    std::cin >> month;

    switch(month) {
        case 1:
            std::cout << "January" << '\n';
            break;
        case 2:
            std::cout << "February" << '\n';
            break;
        case 3:
            std::cout << "March" << '\n';
            break;
        case 4:
            std::cout << "April" << '\n';
            break;
        case 5:
            std::cout << "May" << '\n';
            break;
        case 6:
            std::cout << "June" << '\n';
            break;
        case 7:
            std::cout << "July" << '\n';
            break;
        case 8:
            std::cout << "August" << '\n';
            break;
        case 9:
            std::cout << "September" << '\n';
            break;
        case 10:
            std::cout << "October" << '\n';
            break;
        case 11:
            std::cout << "November" << '\n';
            break;
        case 12:
            std::cout << "December" << '\n';
            break;
        default:
            std::cout << "Invalid month number" << '\n';
            break;
    }

    return 0;
}