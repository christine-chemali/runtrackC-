//Write a simple calculator in C++
//that can do simple maths op : + , - , / , *
#include <iostream>
int main() {
    std::cout << "CALCULATOR" << std::endl;
    double num1, num2;
    char operatorsign;
    long result;
    std::cout << "Enter number 1 : ";
    std::cin >> num1;
    std::cout << "Enter number 2 : ";
    std::cin >> num2;
    std::cout << "Enter operator (+, -, *, /): ";
    std::cin >> operatorsign;
    switch (operatorsign) {
        case '+':
            result = num1 + num2;
            std::cout << "Result: " << result << std::endl;
            break;
        case '-':
            result = num1 - num2;
            std::cout << "Result: " << result << std::endl;
            break;
        case '*':
            result = num1 * num2;
            std::cout << "Result: " << result << std::endl;
            break;
        case '/':
            if (num2 !=0) {
            result = num1 / num2;
            std::cout << "Result: " << result << std::endl;
            } else {
                std::cout << "Division by zero!" << std::endl;
            }
            break;
            default:
            std::cout << "Invalid operator!" << std::endl;
            break;
    }
    std::cout <<"Why did the calculator broke up with the math book? "<< std::endl;
    std::cout <<"Because it had to many problems! ..."<< std::endl;
    return 0;
}
// Created by chris on 14/05/2025.
//
