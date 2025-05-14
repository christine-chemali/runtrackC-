//
//Make this non-readable file readable
//do {} while (cout <<"give a number >0", cin>> n, n<=0);
#include <iostream>

int main() {
    int n;
    do {
        std::cout <<"Give a number > 0 : ";
        std::cin >> n;
    } while (n<=0);
    std::cout << "You give the number : " << n << std::endl;
    return 0;
}
// Created by chris on 14/05/2025.
//
