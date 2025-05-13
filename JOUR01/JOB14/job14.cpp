//
#include <iostream>

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;
    int reverse = 0;
    while (number != 0) {
        int digit = number % 10;
        reverse = reverse * 10 + digit;
        number /= 10;
    }
    std::cout << "The reversed number is: " << reverse << std::endl;
    return 0;
}
// Created by chris on 13/05/2025.
//
