//Write a C++ program that will exchange the user input numbers
// the first one will become the second and vice versa
#include <iostream>
int main() {
    std::cout << "Vice Versa: Exchange the numbers " << std::endl;
    int number1, number2;
    std::cout << "Enter the first number: ";
    std::cin >> number1;
    std::cout << "Enter the second number: ";
    std::cin >> number2;
    std::cout << "Before the exchange the number1 is " << number1 << " the number2 is " << number2 << std::endl;
    int viceversa = number1;
    number1 = number2;
    number2 = viceversa;
    std::cout << "After the exchange the number1 is " << number1 << " and the number2 is " << number2 << std::endl;
    return 0;
}
// Created by chris on 13/05/2025.
//
