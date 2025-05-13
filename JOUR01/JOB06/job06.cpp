//Create a C++ program that will
//display the multiply table of an int given by the user
#include <iostream>
int main() {
    std::cout << "Multiplying table of you chosen number" << std::endl;
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;
    std::cout << "The multiply table of " << number << std::endl;
    for (int i = 1; i <= 10; i++) {
        std::cout << i << "*" << number << "=" << number*i << std::endl;
    }
    return 0;
}
// Created by chris on 13/05/2025.
//
