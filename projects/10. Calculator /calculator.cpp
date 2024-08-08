#include <iostream>
#include <cmath>

int main() {
    
    double a;
    double b;
    double c;

    std::cout << "This is a triangle hypotenuse calculator." << '\n';
    std::cout << "Enter the length of side A: ";
    std::cin >> a;
    std::cout << "Enter the length of side B: ";
    std::cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));

    std::cout << "The length of the hypotenuse is: " << c << '\n';

    return 0;
}