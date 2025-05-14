//Considering this program in C++ what will be the result
// for n = 0, n = 1, n = 4, n = 10, n= -5

#include <iostream>
int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    switch (n) {
        case 0: std::cout << "Null\n";
        case 1:
        case 2: std::cout << "Small\n";
            break;
        case 3:
        case 4:
        case 5: std::cout << "Medium\n";
        default: std::cout <<"Big\n";
    }
}
// for n = 0, n = 1, n = 4, n = 10, n= -5
// for n = 0 Null Small
// for n = 1 Small
// for n = 4 Medium Big
// for n = -5 Big
// Created by chris on 14/05/2025.
//
