//C++ program that iterates from 1 to a given integer n and
//checks if each number is a multiple of 3
//or a multiple of 5.
#include <iostream>
int main () {
    std::cout << "I'm a multiple of 3 or 5 or both ?" << std::endl;
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            std::cout << i << " is a multiple of 3 and 5. " << std::endl;
        } else if (i % 3 == 0) {
            std::cout << i << " is a multiple of 3. " << std::endl;
        } else if (i % 5 == 0) {
            std::cout << i << " is a multiple of 5. " << std::endl;
        }
    }
    std::cout << "That's all folks!" << std::endl;
    return 0;
}
// Created by chris on 14/05/2025.
//
