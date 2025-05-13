//
#include <iostream>

int main() {
    int N;
    int sum = 0;
    std::cout << "Enter a number N : ";
    std::cin >> N;
    if (N < 5) {
        std::cout << "The sum of cube 5^3 to " << N << "^3 is: 0" << std::endl;
    } else {
        for (int i = 5; i <= N; i++) {
            sum += i * i * i;
        }
        std::cout << "The sum of cube 5^3 to " << N << "^3 is : " << sum << std::endl;
    }
    return 0;
}
// Created by chris on 13/05/2025.
//
