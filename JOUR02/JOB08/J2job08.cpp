// a C++ program that uses a while loop to display all integers
// from a to b (inclusive) as provided by the user.
#include <iostream>

int main() {
    int a, b;
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
    int i = a;
    while (i <= b) {
        std::cout << i << std::endl;
        i++;
    }
    return 0;
}
// Created by chris on 14/05/2025.
//
