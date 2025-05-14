//a C++ program to check if a number is narcissistic
#include <iostream>
#include <cmath>

bool isNarcissistic(int number) {
    int originalNumber = number;
    int sum = 0;
    int digits = 0;
    while (number > 0) {
        number /= 10;
        digits++;
    }
    number = originalNumber;
    while (number > 0) {
        int digit = number % 10;
        sum += pow(digit, digits);
        number /= 10;
    }
    return sum == originalNumber;
}

int main() {
    int number;
    std::cout << "NARCISSE IS NOT DEAD" << std::endl;
    std::cout << "Enter a number: ";
    std::cin >> number;

    if (isNarcissistic(number)) {
        std::cout << number << " is a narcissistic number." << std::endl;
    } else {
        std::cout << number << " is not a narcissistic number." << std::endl;
    }
    return 0;
}
// Created by chris on 14/05/2025.
//
