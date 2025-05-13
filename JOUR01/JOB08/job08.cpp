// Write a C++ program that prompt the user to enter a year
// and then determines whether that year is a leap or not
# include <iostream>
int main() {
    std::cout << "Leap Or Not Leap? That is the question!" << std::endl;
    int year;
    std::cout << "Please enter a year: ";
    std::cin >> year;
    if ((year % 4 == 0 && year % 100 !=0) || (year % 400 == 0)){
    std::cout << year << " is a leap year!"<<std::endl;
    }else {
        std::cout << year << " is not a leap year!"<< std::endl;
    }
    std::cout << "That's all folks! :-)" << std::endl;
    return 0;

}
// Created by chris on 13/05/2025.
//
