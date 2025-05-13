//Write a C++ program that prompts the user to enter an integer and then determines if the number is even or odd
#include <iostream>
int main() {
    std::cout << "Even Or Odd?" << std::endl;
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;
    if (number % 2 == 0) {
        std::cout << number << " is even" << std::endl;
    }
    else {
        std::cout << number << " is odd" << std::endl;
    }
    std::cout << "That's all folks!" << std::endl;
    return 0;
}
// Created by chris on 13/05/2025.
//
