#include <iostream>
#include <cmath>

int main() {
    // Terminal Calculator
    char op;
    double num1, num2;

    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter operator (+, -, *, /): ";
    std::cin >> op;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    switch(op) {
        case '+':
            std::cout << num1 << " + " << num2 << " = " << num1 + num2 << '\n';
            break;
        case '-': 
            std::cout << num1 << " - " << num2 << " = " << num1 - num2 << '\n';
            break;
        case '*':  
            std::cout << num1 << " * " << num2 << " = " << num1 * num2 << '\n';
            break;
        case '/':
            std::cout << num1 << " / " << num2 << " = " << num1 / num2 << '\n';
            break;
        default:
            std::cout << "Invalid operator!";
            break;
    }

    return 0;
}