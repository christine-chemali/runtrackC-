//Write a C++ program that prompt the user to enter 3 numbers
//and display the higher one
#include <iostream>
int main() {
    std::cout << "Which one will reach the sky?" << std::endl;
    int number1, number2, number3;
    std::cout << "Enter the first number: ";
    std::cin >> number1;
    std::cout << "Enter the second number: ";
    std::cin >> number2;
    std::cout << "Enter the third number: ";
    std::cin >> number3;
    int max;
    if (number1 >= number2 && number1 >= number3) {
        max = number1;
    }else if (number2 >= number1 && number2 >= number3) {
        max = number2;
    }else {
        max = number3;
    }
    std::cout << "The largest number is: " << max << std::endl;
    std::cout << "Will you also reach the sky? Or will you fall :-(" << std::endl;
    return 0;
}
// Created by chris on 13/05/2025.
//
