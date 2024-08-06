#include<iostream>

int main() {

    // type conversion
    // Implicit = automatic
    // Explicit = precede value with new data type

    int x = 3.14; // x is 3
    double y = 3; // y is 3.0
    double z = (int) 4.1; // z is 4.0

    int correct = 10;
    int questions = 20;
    double score = correct / (double) questions * 100;

    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << z << '\n';
    std::cout << score << "%";
    return 0;
}