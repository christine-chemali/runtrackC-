// a program that generates Fibonacci sequence limited by the user
#include <iostream>

int main() {
    std::cout << "FIB FIB FIB FIB FIB FIBONACCI :-)" << std::endl;
    int limit;
    std::cout << "Enter a limit for the Fibonacci sequence: ";
    std::cin >> limit;
    int a = 0, b = 1;
    std::cout << "Fibonacci sequence up to " << limit << ": ";
    while (a <= limit) {
        std::cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
    }
    std::cout << std::endl;
    return 0;
}
// Created by chris on 14/05/2025.
//
