//GOOD VIBES ONLY
#include <iostream>

int main() {
    int n;
    double harmonicSum = 0.0;
    std::cout << "HARMONICS VIBES" << std::endl;
    std::cout << "Enter a positive integer n: ";
    std::cin >> n;
    for (int i = 1; i <= n; i++) {
        harmonicSum += 1.0 / i;
    }
    std::cout << "The sum of the first " << n << " terms of the harmonic series is " << harmonicSum << std::endl;
    std::cout << "That's all folks" << std::endl;
    return 0;
}
// Created by chris on 14/05/2025.
//
