#include<iostream>

using std::cout;
using std::cin;
using std::string;

double square(double length) {
    return length * length;
}

double squareCube(double length) {
    return length * length * length;
}

int main()
{
    double length = 5.0;
    double area = square(length);
    double volume = squareCube(length);

    cout << "Area of square: " << area << "cm^2\n";
    cout << "Volume of cube: " << volume << "cm^3\n";

    return 0;
}