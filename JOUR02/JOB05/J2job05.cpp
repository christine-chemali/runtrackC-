//a C++ program that evaluates a grade entered by the user.
//If the grade is greater than 10, it will display "validated";
//otherwise, it will display "not validated."
//The program also checks to ensure that the grade is between 0 and 20.
//
#include <iostream>
int main () {
    std::cout << "EVALUATION OF GRADES" << std::endl;
    double grade;
    std::cout << "Enter a grade between 0 and 20 : ";
    std::cin >> grade;
    if (grade <0 || grade > 20) {
        std::cout << "Grade out of range" << std::endl;
        std::cout <<"Enter a grade between 0 and 20 : ";
        std::cin >> grade;
    } else {
        if (grade <10) {
            std::cout << "Not Validated!!! You're fired :-(" << std::endl;
        }else {
            std::cout << "Validated!!! You'll stay till next evaluation :-)" << std::endl;
        }
    }
    std::cout << "Why did the student get a bad grade in music?" << std::endl;
    std::cout << "Because they kept hitting all the wrong notes!"<<std::endl;
    return 0;
}
//
// Created by chris on 14/05/2025.
//
