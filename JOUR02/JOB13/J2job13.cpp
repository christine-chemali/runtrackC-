//the multiply table
#include <iostream>
#include <iomanip>

int main() {
    std::cout << "=============================================" << std::endl;
    std::cout << "================ MULTIPLY ME ================" << std::endl;
    std::cout << "=============================================" << std::endl;
    std::cout << "    |";
    for (int j = 1; j <= 10; j++) {
        std::cout << std::setw(4) << j;
    }
    std::cout << std::endl;
    std::cout << "----|";
    for (int j = 1; j <= 10; j++) {
        std::cout << "----";
    }
    std::cout << std::endl;
    for (int i = 1; i <= 10; i++) {
        std::cout << std::setw(4) << i << "|";
        for (int j = 1; j <= 10; j++) {
            std::cout << std::setw(4) << i * j;
        }
        std::cout << std::endl;
    }
    std::cout << "=============================================" << std::endl;
    std::cout << "================== THE END ==================" << std::endl;
    std::cout << "=============================================" << std::endl;
    return 0;
}
// Created by chris on 14/05/2025.
//
