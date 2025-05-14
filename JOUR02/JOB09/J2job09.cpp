// a C++ program that asks the user to enter an integer and
// displays "WINNER" if the integer is between a and b (inclusive),
// where a and b are natural integers with a<b.
// It displays "LOSER" otherwise.
#include <iostream>

int main() {
    int a, b, userInput;
    while (true) {
        std::cout << "Enter the starting integer (a): ";
        std::cin >> a;
        std::cout << "Enter the ending integer (b): ";
        std::cin >> b;
        if (a <= b) {
            break;
        } else {
            std::cout << "The starting integer must be less than or equal to the ending integer. Please try again." << std::endl;
        }
    }
    if (a >= b) {
        std::cout << "The starting integer (a) must be less than the ending integer (b)." << std::endl;
        return 1;
    }
    std::cout << "Enter an integer: ";
    std::cin >> userInput;
    if (userInput >= a && userInput <= b) {
        std::cout << "WINNER" << std::endl;
    } else {
        std::cout << "LOOSER" << std::endl;
    }
    return 0;
}
// Created by chris on 14/05/2025.
//
