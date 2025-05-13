//Write a C++ program that ask the user to input 5 numbers
//add display the average of them
#include <iostream>
int main() {
    std::cout << "Average of 5" << std::endl;
    constexpr int count = 5;
    int number;
    double sum = 0;
    for (int i = 0; i < count; i++) {
        std::cout << "Enter a number: ";
        std::cin >> number;
        sum += number;
    }
    const double average = sum / count;
    std::cout << "The average is " << average << std::endl;
    std::cout << "1, 2, 3 Sunshine :-)" <<std::endl;
    return 0;
}
// Created by chris on 13/05/2025.
//
