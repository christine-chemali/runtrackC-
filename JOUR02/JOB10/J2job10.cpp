//square
#include <iostream>
#include <cmath>

int main() {
    double number;
    while (true) {
        std::cout << "Enter a real number (0 to exit): ";
        std::cin >> number;
        if (number == 0) {
            break;
        }
        if (number < 0) {
            std::cout << "Negative values are not accepted." << std::endl;
        } else {
            double squareRoot = std::sqrt(number);
            std::cout << "The square root of " << number << " is " << squareRoot << std::endl;
        }
    }
    return 0;
}
// Created by chris on 14/05/2025.
//
